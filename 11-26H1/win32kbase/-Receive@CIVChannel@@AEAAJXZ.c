/*
 * XREFs of ?Receive@CIVChannel@@AEAAJXZ @ 0x140222420
 * Callers:
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x140222284 (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x140222344 (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 *     ?Reconnect@CIVChannel@@AEAAJXZ @ 0x140222520 (-Reconnect@CIVChannel@@AEAAJXZ.c)
 * Callees:
 *     ?ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z @ 0x14021F848 (-ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CIVChannel::Receive(CIVChannel *this, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 (__fastcall *v4)(_QWORD); // rax
  int v6; // ebx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 UserSessionState; // rax
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+40h] [rbp-38h]
  __int128 v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-18h]

  v13 = 0LL;
  v3 = 0;
  v4 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)this + 4);
  LODWORD(v13) = 11;
  v10 = 0LL;
  v12 = 0LL;
  if ( v4 )
  {
    *((_QWORD *)&v12 + 1) = v4(*(_QWORD *)this);
    if ( !*((_QWORD *)&v12 + 1) )
    {
      v3 = -1073741823;
      goto LABEL_6;
    }
    v10 = v12;
  }
  if ( *(_QWORD *)(W32GetUserSessionState((_DWORD)this, a2, a3) + 19400) )
  {
    v6 = *((_DWORD *)this + 2);
    CurrentThread = KeGetCurrentThread();
    v11 = v13;
    UserSessionState = W32GetUserSessionState((_DWORD)this, a2, a3);
    return (unsigned int)ivrIVRecv(
                           0x10u,
                           *(_QWORD *)(UserSessionState + 19400),
                           (__int64)CurrentThread,
                           &v10,
                           v6,
                           (__int64)CIVChannel::sHeaderCallback);
  }
LABEL_6:
  if ( !*(_QWORD *)(W32GetUserSessionState((_DWORD)this, a2, a3) + 19400) )
    return (unsigned int)-1073741823;
  return v3;
}
