/*
 * XREFs of SetPointerMetaVisibility @ 0x1401229B0
 * Callers:
 *     _anonymous_namespace_::RenderCursor @ 0x14005E7DC (_anonymous_namespace_--RenderCursor.c)
 *     _anonymous_namespace_::xxxSwitchCursors @ 0x140123C6C (_anonymous_namespace_--xxxSwitchCursors.c)
 *     TransitionCursorSuppressionState @ 0x140123E50 (TransitionCursorSuppressionState.c)
 *     NtUserEnableMouseInputForCursorSuppression @ 0x140125510 (NtUserEnableMouseInputForCursorSuppression.c)
 *     PowerOnGdi @ 0x1401257F0 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1401259E0 (PowerOffGdi.c)
 *     _anonymous_namespace_::xxxRestoreMouseCursors @ 0x140125C04 (_anonymous_namespace_--xxxRestoreMouseCursors.c)
 * Callees:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1401212F8 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     zzzEnableDwmPointerSupport @ 0x140122C1C (zzzEnableDwmPointerSupport.c)
 */

bool __fastcall SetPointerMetaVisibility(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax

  v1 = a1;
  zzzEnableDwmPointerSupport(a1, 1LL);
  UserSessionState = W32GetUserSessionState(v3, v2);
  return CursorApiRouter::HidePointer(*(CursorApiRouter **)(UserSessionState + 36304), v1 == 0);
}
