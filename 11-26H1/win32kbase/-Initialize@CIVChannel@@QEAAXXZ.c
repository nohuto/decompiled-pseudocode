/*
 * XREFs of ?Initialize@CIVChannel@@QEAAXXZ @ 0x140222284
 * Callers:
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x140219890 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x140219CA0 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x14021A330 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     IVWorkerThread @ 0x14021F9FC (IVWorkerThread.c)
 * Callees:
 *     isRootPartition @ 0x14009C868 (isRootPartition.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     ?ivrIVRegisterChildLifetimeNotifications@@YAJPEAU_ETHREAD@@0P6AJPEAX@ZKPEAPEAX@Z @ 0x14018DACC (-ivrIVRegisterChildLifetimeNotifications@@YAJPEAU_ETHREAD@@0P6AJPEAX@ZKPEAPEAX@Z.c)
 *     ?Receive@CIVChannel@@AEAAJXZ @ 0x140222420 (-Receive@CIVChannel@@AEAAJXZ.c)
 *     ?Reconnect@CIVChannel@@AEAAJXZ @ 0x140222520 (-Reconnect@CIVChannel@@AEAAJXZ.c)
 */

void __fastcall CIVChannel::Initialize(CIVChannel *this, int a2, int a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  unsigned int v7; // ebx
  __int64 v8; // rax
  int (*v9)(void *); // r8
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  unsigned int v14; // ebx
  struct _ETHREAD *CurrentThread; // rdi
  __int64 UserSessionState; // rax
  int (*v17)(void *); // r8

  if ( !isRootPartition((int)this, a2, a3) )
  {
    if ( !isChildPartition(v5, v4, v6) )
      goto LABEL_5;
    v14 = *((_DWORD *)this + 2);
    CurrentThread = KeGetCurrentThread();
    UserSessionState = W32GetUserSessionState(v12, v11, v13);
    if ( (int)ivrIVRegisterChildLifetimeNotifications(
                *(struct _ETHREAD **)(UserSessionState + 19400),
                CurrentThread,
                v17,
                v14) < 0 )
      goto LABEL_11;
    if ( *((_BYTE *)this + 44) )
      v10 = CIVChannel::Reconnect(this);
    else
      v10 = CIVChannel::Receive(this);
LABEL_4:
    if ( v10 >= 0 )
      goto LABEL_5;
LABEL_11:
    KeBugCheck(0x164u);
  }
  if ( !*((_BYTE *)this + 44) )
  {
    v7 = *((_DWORD *)this + 2);
    v8 = W32GetUserSessionState(v5, v4, v6);
    v10 = ivrIVRegisterChildLifetimeNotifications(*(struct _ETHREAD **)(v8 + 19400), 0LL, v9, v7);
    goto LABEL_4;
  }
LABEL_5:
  *((_BYTE *)this + 44) = 1;
}
