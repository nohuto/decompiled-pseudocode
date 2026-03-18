/*
 * XREFs of NtUserRegisterTasklist @ 0x14029D020
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     _RegisterTasklist @ 0x1402B6E6C (_RegisterTasklist.c)
 */

__int64 __fastcall NtUserRegisterTasklist(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  EnterCrit(0LL, 0LL);
  v2 = ValidateReceivingHwnd(a1, 1);
  v4 = 0;
  if ( v2 )
    v4 = RegisterTasklist(v2);
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
