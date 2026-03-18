/*
 * XREFs of EditionPushProcessLaunchForegroundPolicy @ 0x140214FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushForegroundPolicy@CForegroundLaunch@@QEAAXPEAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z @ 0x14028EEA0 (-PushForegroundPolicy@CForegroundLaunch@@QEAAXPEAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z.c)
 */

__int64 __fastcall EditionPushProcessLaunchForegroundPolicy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return CForegroundLaunch::PushForegroundPolicy(*(_QWORD *)(UserSessionState + 18872), a1, a2, a3);
}
