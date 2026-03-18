/*
 * XREFs of ?Reconnect@CIVChannel@@AEAAJXZ @ 0x140222520
 * Callers:
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x140222284 (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?sOnChildNotification@CIVChannel@@CAJPEAX@Z @ 0x1402226B0 (-sOnChildNotification@CIVChannel@@CAJPEAX@Z.c)
 * Callees:
 *     UserSleep @ 0x1401A50A0 (UserSleep.c)
 *     ?Receive@CIVChannel@@AEAAJXZ @ 0x140222420 (-Receive@CIVChannel@@AEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CIVChannel::Reconnect(CIVChannel *this, int a2, int a3)
{
  unsigned int i; // ebx
  unsigned int v5; // esi
  int (__fastcall *v6)(_QWORD); // rax
  int v7; // edx
  int v8; // r8d

  for ( i = 0; ; ++i )
  {
    if ( i >= 0xA )
      KeBugCheck(0x164u);
    v5 = *((_DWORD *)this + 2);
    v6 = *(int (__fastcall **)(_QWORD))(W32GetUserSessionState((_DWORD)this, a2, a3) + 19576);
    if ( v6 )
    {
      if ( v6(v5) >= 0 )
        break;
    }
    UserSleep(1000);
  }
  return CIVChannel::Receive(this, v7, v8);
}
