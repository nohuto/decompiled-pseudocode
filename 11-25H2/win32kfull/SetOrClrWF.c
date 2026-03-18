/*
 * XREFs of SetOrClrWF @ 0x1400373A0
 * Callers:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x140025E98 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     InternalInvalidate3 @ 0x140032DB8 (InternalInvalidate3.c)
 *     xxxSimpleDoSyncPaint @ 0x1400359F0 (xxxSimpleDoSyncPaint.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x140036B10 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxDWP_DoNCActivate @ 0x14003EE4C (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x140044E0C (xxxDrawCaptionBar.c)
 *     xxxCalcClientRect @ 0x140047B98 (xxxCalcClientRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14004A6D4 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x14004DAC8 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     xxxGetUpdateRgn @ 0x14004DED0 (xxxGetUpdateRgn.c)
 *     xxxSetWindowStyle @ 0x14004EEC0 (xxxSetWindowStyle.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x14004F8CC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxCompositedPaint @ 0x14004FBD4 (xxxCompositedPaint.c)
 *     xxxSetScrollBar @ 0x1400504D8 (xxxSetScrollBar.c)
 *     xxxGetUpdateRect @ 0x140051110 (xxxGetUpdateRect.c)
 *     xxxDoPaint @ 0x14005138C (xxxDoPaint.c)
 *     xxxBeginPaint @ 0x140052240 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x140052E08 (xxxEndPaint.c)
 *     xxxSendEraseBkgnd @ 0x1400531F0 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1400538A8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x140053964 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     UnsetRedirectedWindow @ 0x140058298 (UnsetRedirectedWindow.c)
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140058980 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x140058F0C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140059094 (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14005A4E4 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     CleanupWindowRedirection @ 0x14005AA34 (CleanupWindowRedirection.c)
 *     UnsetLayeredWindow @ 0x14005AAD8 (UnsetLayeredWindow.c)
 *     SelectWindowRgn @ 0x14005B5EC (SelectWindowRgn.c)
 *     xxxSetLayeredWindow @ 0x14005C15C (xxxSetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     DestroyWindowSmIcon @ 0x14006630C (DestroyWindowSmIcon.c)
 *     SetRedirectedWindow @ 0x1400B4EC4 (SetRedirectedWindow.c)
 *     xxxDispatchMessage @ 0x140116D64 (xxxDispatchMessage.c)
 *     xxxDCETrackCaptionButton @ 0x140117458 (xxxDCETrackCaptionButton.c)
 *     xxxTrackCaptionButton @ 0x1401192EC (xxxTrackCaptionButton.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x140152770 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     SetWindowGroupBand @ 0x140152834 (SetWindowGroupBand.c)
 *     CreateSpb @ 0x140155CBC (CreateSpb.c)
 *     FreeSpb @ 0x140156450 (FreeSpb.c)
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x14016D6F0 (xxxMNOpenHierarchy.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140180AB8 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxShowOwnedWindows @ 0x14018786C (xxxShowOwnedWindows.c)
 *     _SelectPalette @ 0x14018BD50 (_SelectPalette.c)
 *     ?DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z @ 0x140190294 (-DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z.c)
 *     _DeregisterShellHookWindow @ 0x14019F180 (_DeregisterShellHookWindow.c)
 *     SfnPOWERBROADCAST @ 0x1401A10A0 (SfnPOWERBROADCAST.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1401ADB3C (SetWindowSubtreeCoreWindowStatus.c)
 *     _RegisterShellHookWindow @ 0x1401BE6B0 (_RegisterShellHookWindow.c)
 *     ?ClrFTrueVis@@YAXPEAUtagWND@@@Z @ 0x1401C8208 (-ClrFTrueVis@@YAXPEAUtagWND@@@Z.c)
 *     xxxDWP_UpdateUIState @ 0x1401CE994 (xxxDWP_UpdateUIState.c)
 *     ClearWindowState @ 0x1401CEF80 (ClearWindowState.c)
 *     SetWindowState @ 0x1401CEFE0 (SetWindowState.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1401CF77C (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1401DB0A4 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     zzzDesktopSwitchSideEffects @ 0x1401EEB58 (zzzDesktopSwitchSideEffects.c)
 *     ?SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z @ 0x14020AB98 (-SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z.c)
 *     xxxUpdateShadowZorder @ 0x1402180E4 (xxxUpdateShadowZorder.c)
 *     NtUserSetMsgBox @ 0x14021B0E0 (NtUserSetMsgBox.c)
 *     ?UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z @ 0x14021E738 (-UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@W4SwpActivateOptions@@@Z @ 0x1402341E8 (-xxxSwpActivate@@YAHPEAUtagWND@@W4SwpActivateOptions@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     CheckFullScreen @ 0x140236038 (CheckFullScreen.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x14023A4E0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     NtUserSetWindowCompositionAttribute @ 0x14024E5B0 (NtUserSetWindowCompositionAttribute.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x140251998 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxSetModernAppWindow @ 0x140254280 (xxxSetModernAppWindow.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x14025542C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140256AE8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x14025C124 (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 *     xxxSetShellWindow @ 0x14025E314 (xxxSetShellWindow.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x14026E9D0 (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     _lambda_74fc1e22101fb496760f58e758191252_::_lambda_invoker_cdecl_ @ 0x140277400 (_lambda_74fc1e22101fb496760f58e758191252_--_lambda_invoker_cdecl_.c)
 *     NtUserRaiseLowerShellWindow @ 0x14029BDD0 (NtUserRaiseLowerShellWindow.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1402ACA34 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1402ACB30 (xxxSetBridgeWindowChild.c)
 *     ?CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z @ 0x1402B5B04 (-CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x1402B5DE8 (-xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     PatchThreadWindows @ 0x1402B6750 (PatchThreadWindows.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402BE800 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?ClearOverrideMargins@CWindowMarginProp@WindowMargins@@SAXPEAUtagWND@@@Z @ 0x1402C0ED8 (-ClearOverrideMargins@CWindowMarginProp@WindowMargins@@SAXPEAUtagWND@@@Z.c)
 *     ?SetOverrideMargins@CWindowMarginProp@WindowMargins@@SAJPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1402C11E0 (-SetOverrideMargins@CWindowMarginProp@WindowMargins@@SAJPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     ?RegisterShell@@YA_NPEAUtagWND@@@Z @ 0x1402C20D0 (-RegisterShell@@YA_NPEAUtagWND@@@Z.c)
 *     ?MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D4CF4 (-MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     ?MarkWindowAsNotArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402D4DD4 (-MarkWindowAsNotArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     xxxSetWindowData @ 0x1402DE828 (xxxSetWindowData.c)
 *     SetDialogPointer @ 0x1402E1884 (SetDialogPointer.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402E3E2C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402E488C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1402E85E0 (xxxEndScroll.c)
 *     xxxHelpLoop @ 0x1402EB044 (xxxHelpLoop.c)
 * Callees:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140037578 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 */

LONG_PTR __fastcall SetOrClrWF(int a1, struct tagWND *a2, unsigned __int16 a3, int a4)
{
  int v5; // edi
  int v6; // esi
  int v7; // ebp
  _DWORD *v8; // rax
  unsigned __int64 v9; // rdx
  LONG_PTR result; // rax
  char v11; // r8
  _DWORD *v12; // rax
  unsigned int v13; // r12d
  unsigned int v14; // edx
  unsigned int v15; // ecx
  int v16; // ebx
  int v17; // r15d
  int v18; // ebp
  __int64 v19; // rsi
  void *v20; // rdi
  int v21; // [rsp+20h] [rbp-68h] BYREF
  __int16 v22; // [rsp+24h] [rbp-64h]
  __int128 v23; // [rsp+26h] [rbp-62h]
  __int128 v24; // [rsp+36h] [rbp-52h]
  __int16 v25; // [rsp+46h] [rbp-42h]
  int v26; // [rsp+48h] [rbp-40h]
  __int64 v27; // [rsp+4Ch] [rbp-3Ch]
  int v28; // [rsp+54h] [rbp-34h]
  unsigned int v29; // [rsp+58h] [rbp-30h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( a4 )
  {
    v8 = (_DWORD *)*((_QWORD *)a2 + 5);
    v5 = v8[7];
    v6 = v8[6];
    v7 = v8[58];
  }
  v9 = *((_QWORD *)a2 + 5) + ((unsigned __int64)a3 >> 8);
  result = *(unsigned __int8 *)(v9 + 16);
  if ( a1 )
    v11 = result | a3;
  else
    v11 = result & ~(_BYTE)a3;
  *(_BYTE *)(v9 + 16) = v11;
  if ( a4 )
  {
    result = IsWindowDesktopComposed(a2);
    if ( (_DWORD)result )
    {
      v12 = (_DWORD *)*((_QWORD *)a2 + 5);
      v13 = v12[7];
      v14 = v12[6];
      v15 = v12[58];
      v16 = v6 ^ v14;
      result = v7 ^ v15;
      v17 = v5 ^ v13;
      if ( v5 == v13 )
      {
        if ( v16 )
          goto LABEL_13;
        if ( !(_DWORD)result )
          return result;
      }
      if ( (v17 & 0xB9CF0000) != 0 )
      {
        v18 = -16;
        goto LABEL_17;
      }
LABEL_13:
      if ( (v16 & 0x4E27A9) != 0 )
      {
        v18 = -20;
        v13 = v14;
      }
      else
      {
        if ( (result & 0x3F2C0) == 0 )
        {
LABEL_19:
          if ( (v17 & 0x1C40000) != 0 || (v16 & 0x200A0381) != 0 )
            return WindowMargins::CheckForChanges(a2, 1LL);
          return result;
        }
        v18 = -268435456;
        v13 = v15;
      }
LABEL_17:
      DirtyVisRgnTrackers(a2);
      v19 = *(_QWORD *)a2;
      v20 = (void *)ReferenceDwmApiPort();
      result = W32GetSessionState();
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(result + 96) + 4648LL));
      if ( v20 )
      {
        v25 = 0;
        v21 = 3932180;
        v26 = 1073741846;
        v22 = 0x8000;
        v27 = v19;
        v23 = 0LL;
        v28 = v18;
        v24 = 0LL;
        v29 = v13;
        LpcRequestPort(v20, &v21);
        result = ObfDereferenceObject(v20);
      }
      goto LABEL_19;
    }
  }
  return result;
}
