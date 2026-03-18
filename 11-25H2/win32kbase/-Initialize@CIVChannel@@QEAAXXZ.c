/*
 * XREFs of ?Initialize@CIVChannel@@QEAAXXZ @ 0x14021EA98
 * Callers:
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x14018C0A0 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x140213C60 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1402146D0 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     IVWorkerThread @ 0x14021B528 (IVWorkerThread.c)
 * Callees:
 *     isRootPartition @ 0x14005E028 (isRootPartition.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     ?ivrIVRegisterChildLifetimeNotifications@@YAJPEAU_ETHREAD@@0P6AJPEAX@ZKPEAPEAX@Z @ 0x14021B0F4 (-ivrIVRegisterChildLifetimeNotifications@@YAJPEAU_ETHREAD@@0P6AJPEAX@ZKPEAPEAX@Z.c)
 *     ?Receive@CIVChannel@@AEAAJXZ @ 0x14021EC98 (-Receive@CIVChannel@@AEAAJXZ.c)
 *     ?Reconnect@CIVChannel@@AEAAJXZ @ 0x14021ED8C (-Reconnect@CIVChannel@@AEAAJXZ.c)
 */

void __fastcall CIVChannel::Initialize(CIVChannel *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rax
  int (*v7)(void *); // r8
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  struct _ETHREAD *CurrentThread; // rdi
  __int64 UserSessionState; // rax
  int (*v14)(void *); // r8

  if ( !isRootPartition((__int64)this, a2) )
  {
    if ( !isChildPartition(v4, v3) )
      goto LABEL_5;
    v11 = *((_DWORD *)this + 2);
    CurrentThread = KeGetCurrentThread();
    UserSessionState = W32GetUserSessionState(v10, v9);
    if ( (int)ivrIVRegisterChildLifetimeNotifications(
                *(struct _ETHREAD **)(UserSessionState + 19368),
                CurrentThread,
                v14,
                v11) < 0 )
      goto LABEL_11;
    if ( *((_BYTE *)this + 44) )
      v8 = CIVChannel::Reconnect(this);
    else
      v8 = CIVChannel::Receive(this);
LABEL_4:
    if ( v8 >= 0 )
      goto LABEL_5;
LABEL_11:
    KeBugCheck(0x164u);
  }
  if ( !*((_BYTE *)this + 44) )
  {
    v5 = *((_DWORD *)this + 2);
    v6 = W32GetUserSessionState(v4, v3);
    v8 = ivrIVRegisterChildLifetimeNotifications(*(struct _ETHREAD **)(v6 + 19368), 0LL, v7, v5);
    goto LABEL_4;
  }
LABEL_5:
  *((_BYTE *)this + 44) = 1;
}
