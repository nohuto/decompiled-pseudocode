/*
 * XREFs of ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x1401A690C
 * Callers:
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x14005EF30 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x140258990 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x14026D7C8 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x14029454C (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
 *     NtUserShellMigrateWindow @ 0x1402BED70 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1402BF280 (NtUserShellSetWindowPos.c)
 *     ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1402C4070 (-ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402C7DC0 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1402CAA34 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1402CAB3C (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402CADE8 (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsGhostWindowClass(const struct tagWND *a1, __int64 a2)
{
  __int16 *v2; // rcx
  __int16 v3; // bx

  v2 = *(__int16 **)(*((_QWORD *)a1 + 17) + 8LL);
  v3 = *v2;
  return v3 == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v2, a2) + 19904) + 900LL);
}
