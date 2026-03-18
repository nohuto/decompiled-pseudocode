/*
 * XREFs of NtUserDoInitMessagePumpHook @ 0x140208E70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ @ 0x140208EB4 (-GetCurrentProcessUserGlobals@@YAPEAU_tagWIN32KUSERSESSIONSTATE@@XZ.c)
 */

__int64 NtUserDoInitMessagePumpHook()
{
  __int64 v0; // rcx

  EnterCrit(0LL, 0LL);
  v0 = *((_QWORD *)GetCurrentProcessUserGlobals() + 3);
  ++*(_DWORD *)(*(_QWORD *)(v0 + 488) + 28LL);
  UserSessionSwitchLeaveCrit(v0);
  return 1LL;
}
