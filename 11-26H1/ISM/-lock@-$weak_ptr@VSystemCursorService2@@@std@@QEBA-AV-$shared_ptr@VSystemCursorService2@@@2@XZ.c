/*
 * XREFs of ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x18006B4CC
 * Callers:
 *     ?OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z @ 0x18002FBEC (-OnClientDisconnected@ShellGesturesProcessor@@QEAAXPEAVDragManagerClientProxy@@@Z.c)
 *     ?TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA?AV?$weak_ptr@VGestureHandler@@@std@@PEAUHitTestInfo@@PEAUHitTestResult@@@Z @ 0x180073418 (-TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA-AV-$weak_ptr@VGestureHandler@@@std.c)
 *     ?AttachCursorVisualToShellRoot@SystemCursor2@@QEAAJXZ @ 0x1800FAFDC (-AttachCursorVisualToShellRoot@SystemCursor2@@QEAAJXZ.c)
 *     ?Cleanup@CustomCursorApplication2@@QEAAXXZ @ 0x1800FB28C (-Cleanup@CustomCursorApplication2@@QEAAXXZ.c)
 *     ?CreateCursorVisual@SystemCursor2@@AEAAJXZ @ 0x1800FB6C8 (-CreateCursorVisual@SystemCursor2@@AEAAJXZ.c)
 *     ?SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z @ 0x1800FCBC4 (-SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z.c)
 *     ?SetOrientationAngle@SystemCursor2@@QEAAJM@Z @ 0x1800FCC6C (-SetOrientationAngle@SystemCursor2@@QEAAJM@Z.c)
 *     ?SetShape@SystemCursor2@@QEAAJ_K_N@Z @ 0x1800FCD58 (-SetShape@SystemCursor2@@QEAAJ_K_N@Z.c)
 *     ?SetShellMagnification@SystemCursor2@@QEAAJM@Z @ 0x1800FCFE8 (-SetShellMagnification@SystemCursor2@@QEAAJM@Z.c)
 *     ?PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@Z @ 0x18015CF00 (-PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV-$vec.c)
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x18015D598 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??$_Construct_from_weak@VSystemCursorService2@@@?$_Ptr_base@VSystemCursorService2@@@std@@IEAA_NAEBV?$weak_ptr@VSystemCursorService2@@@1@@Z @ 0x18006B4FC (--$_Construct_from_weak@VSystemCursorService2@@@-$_Ptr_base@VSystemCursorService2@@@std@@IEAA_NA.c)
 */

__int64 __fastcall std::weak_ptr<SystemCursorService2>::lock(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10

  *a2 = 0LL;
  a2[1] = 0LL;
  std::_Ptr_base<SystemCursorService2>::_Construct_from_weak<SystemCursorService2>(a2, a1);
  return v2;
}
