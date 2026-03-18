/*
 * XREFs of ?Reconnect@CIVChannel@@AEAAJXZ @ 0x14021ED8C
 * Callers:
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x14021EA98 (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?OnChildNotification@CIVChannel@@AEAAJPEAX@Z @ 0x14021EB58 (-OnChildNotification@CIVChannel@@AEAAJPEAX@Z.c)
 * Callees:
 *     UserSleep @ 0x140160300 (UserSleep.c)
 *     ?Receive@CIVChannel@@AEAAJXZ @ 0x14021EC98 (-Receive@CIVChannel@@AEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CIVChannel::Reconnect(CIVChannel *this, __int64 a2)
{
  int v3; // ebx
  unsigned int v4; // esi
  int (__fastcall *v5)(_QWORD); // rax
  __int64 v6; // rdx

  v3 = 0;
  while ( 1 )
  {
    v4 = *((_DWORD *)this + 2);
    v5 = *(int (__fastcall **)(_QWORD))(W32GetUserSessionState(this, a2) + 19544);
    if ( v5 )
    {
      if ( v5(v4) >= 0 )
        break;
    }
    UserSleep(1000);
    if ( (unsigned int)++v3 >= 0xA )
      KeBugCheck(0x164u);
  }
  return CIVChannel::Receive(this, v6);
}
