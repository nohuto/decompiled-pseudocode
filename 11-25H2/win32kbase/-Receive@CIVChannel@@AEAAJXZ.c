/*
 * XREFs of ?Receive@CIVChannel@@AEAAJXZ @ 0x14021EC98
 * Callers:
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x14021EA98 (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x14021EBBC (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 *     ?Reconnect@CIVChannel@@AEAAJXZ @ 0x14021ED8C (-Reconnect@CIVChannel@@AEAAJXZ.c)
 * Callees:
 *     ?ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z @ 0x14021B05C (-ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CIVChannel::Receive(CIVChannel *this, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *v3)(_QWORD); // rax
  int v6; // ebx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v8; // rdx
  __int128 v9; // [rsp+30h] [rbp-48h]
  __int128 v10; // [rsp+50h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp-18h]

  v2 = 0;
  v3 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)this + 4);
  v9 = 0LL;
  if ( !v3 || (*((_QWORD *)&v9 + 1) = v3(*(_QWORD *)this)) != 0LL )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(this, a2) + 19368) )
    {
      v6 = *((_DWORD *)this + 2);
      CurrentThread = KeGetCurrentThread();
      v8 = *(_QWORD *)(W32GetUserSessionState(this, a2) + 19368);
      v10 = v9;
      v11 = 12LL;
      return (unsigned int)ivrIVRecv(16LL, v8, (__int64)CurrentThread, &v10, v6, (__int64)CIVChannel::sHeaderCallback);
    }
  }
  else
  {
    v2 = -1073741823;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(this, a2) + 19368) )
    return (unsigned int)-1073741823;
  return v2;
}
