/*
 * XREFs of ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180093014
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800030D0 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180056E94 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800579B0 (-TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800606A4 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180083CA0 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180083E90 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180084720 (-ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800855D0 (-ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180085AE0 (-ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180087220 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008E930 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180090CA0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180092070 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180092940 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180092C50 (-SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180092D10 (-SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180092FBC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z @ 0x1800AEB10 (-v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z.c)
 *     ?AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E2BB0 (-AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E2DD0 (-AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z @ 0x1800E3120 (-BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z.c)
 *     ?CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x1800E31F0 (-CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z.c)
 *     ?ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E3480 (-ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E3510 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x1800E3600 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E3890 (-ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z @ 0x1800E3B30 (-CreateWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x1800E3C90 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?DestroyWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4060 (-DestroyWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DisallowPeekChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4120 (-DisallowPeekChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceActiveWindowAppearanceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4280 (-ForceActiveWindowAppearanceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4340 (-ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4430 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4550 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?FrameMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4660 (-FrameMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4720 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E4850 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GhostChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E58A0 (-GhostChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E5AB0 (-IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E5B80 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800E5DF0 (-IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?LivePreviewExcludeChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E5FC0 (-LivePreviewExcludeChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E6060 (-MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E6370 (-OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@@Z @ 0x1800E6D20 (-RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@.c)
 *     ?SetCornerStyle@CWindowList@@UEAAJPEAUIDwmWindow@@W4CORNER_STYLE@@@Z @ 0x1800E7FF0 (-SetCornerStyle@CWindowList@@UEAAJPEAUIDwmWindow@@W4CORNER_STYLE@@@Z.c)
 *     ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x1800E8080 (-SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?SetPartColor@CWindowList@@UEAAJPEAUIDwmWindow@@PEBUNCPART_COLOR@@@Z @ 0x1800E82F0 (-SetPartColor@CWindowList@@UEAAJPEAUIDwmWindow@@PEBUNCPART_COLOR@@@Z.c)
 *     ?SetRemoteAppPolicy@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWM_REMOTEAPP_POLICY@@@Z @ 0x1800E83C0 (-SetRemoteAppPolicy@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWM_REMOTEAPP_POLICY@@@Z.c)
 *     ?SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z @ 0x1800E8480 (-SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z.c)
 *     ?SetSystemBackdropType@CWindowList@@UEAAJPEAUIDwmWindow@@W4SYSTEMBACKDROP_TYPE@@@Z @ 0x1800E8520 (-SetSystemBackdropType@CWindowList@@UEAAJPEAUIDwmWindow@@W4SYSTEMBACKDROP_TYPE@@@Z.c)
 *     ?SetUseDarkModeColors@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x1800E85B0 (-SetUseDarkModeColors@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E8650 (-ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?TransitionsForceDisabledChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E8A00 (-TransitionsForceDisabledChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UnregisterIndirectSwapchainRenderTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEA_N@Z @ 0x1800E8AC0 (-UnregisterIndirectSwapchainRenderTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEA_N@Z.c)
 *     ?WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E8B90 (-WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x1800E8C10 (-WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800E8D00 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ZorderBandChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E9180 (-ZorderBandChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??0CWindowData@@QEAA@XZ @ 0x180055818 (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800930F0 (-SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009A248 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowList::GetSyncedWindowData(
        CWindowList *this,
        struct IDwmWindow *a2,
        char a3,
        struct CWindowData **a4)
{
  struct CWindowData *v8; // rbx
  CWindowData *v9; // rax
  const char *v10; // r9
  CWindowData *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( !v8 && (!a3 || (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2)) )
  {
    v9 = (CWindowData *)DefaultHeap::AllocClear(0x360uLL);
    if ( !v9 || (v11 = CWindowData::CWindowData(v9), (v8 = v11) == 0LL) )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x839,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        v10);
    *((_QWORD *)v11 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v11);
    *((_QWORD *)v8 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
    CWindowList::SyncWindowData(this, a2, v8);
  }
  *a4 = v8;
}
