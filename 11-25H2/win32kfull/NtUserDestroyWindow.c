/*
 * XREFs of NtUserDestroyWindow @ 0x14017EB80
 * Callers:
 *     <none>
 * Callees:
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserDestroyWindow(__int64 a1)
{
  struct tagWND *v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  EnterCrit(0LL, 0LL);
  v2 = (struct tagWND *)ValidateReceivingHwnd(a1, 1LL);
  v4 = 0;
  if ( v2 )
    v4 = xxxDestroyWindow(v2);
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
