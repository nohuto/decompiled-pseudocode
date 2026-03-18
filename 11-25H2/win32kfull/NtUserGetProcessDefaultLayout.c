/*
 * XREFs of NtUserGetProcessDefaultLayout @ 0x140222550
 * Callers:
 *     <none>
 * Callees:
 *     _GetProcessDefaultLayout @ 0x140222590 (_GetProcessDefaultLayout.c)
 */

__int64 __fastcall NtUserGetProcessDefaultLayout(__int64 a1)
{
  __int64 ProcessDefaultLayout; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  ProcessDefaultLayout = (int)GetProcessDefaultLayout(a1);
  UserSessionSwitchLeaveCrit(v3);
  return ProcessDefaultLayout;
}
