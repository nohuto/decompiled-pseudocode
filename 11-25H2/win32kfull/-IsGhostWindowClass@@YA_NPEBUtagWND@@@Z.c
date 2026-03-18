/*
 * XREFs of ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x14016C5AC
 * Callers:
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x14014C01C (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x14019CC50 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x140239944 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1402507C4 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     NtUserShellMigrateWindow @ 0x1402A14B0 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1402A1990 (NtUserShellSetWindowPos.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1402A6CD4 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1402AEAA8 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1402AEBB0 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402AEE5C (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsGhostWindowClass(const struct tagWND *a1, __int64 a2)
{
  __int16 *v2; // rcx
  __int16 v3; // bx

  v2 = *(__int16 **)(*((_QWORD *)a1 + 17) + 8LL);
  v3 = *v2;
  return v3 == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v2, a2) + 19872) + 900LL);
}
