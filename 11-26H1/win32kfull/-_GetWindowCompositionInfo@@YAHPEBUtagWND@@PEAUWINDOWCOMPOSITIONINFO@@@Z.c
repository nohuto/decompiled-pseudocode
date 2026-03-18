/*
 * XREFs of ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1400A8164
 * Callers:
 *     ?DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z @ 0x1400A6E6C (-DwmWindowCreate@@YAXPEAUtagWND@@PEBU1@PEBUtagRECT@@@Z.c)
 *     ?SetWindowCompositionNCRenderingExiled@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1400A82B8 (-SetWindowCompositionNCRenderingExiled@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@.c)
 *     ?SetWindowCompositionAccentPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1400A8730 (-SetWindowCompositionAccentPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1401E07E0 (NtUserGetWindowCompositionAttribute.c)
 *     ?SetWindowCompositionAlpha@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E54A8 (-SetWindowCompositionAlpha@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionNonClientRTLLayout@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5570 (-SetWindowCompositionNonClientRTLLayout@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowCompositionForceIconicSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5638 (-SetWindowCompositionForceIconicSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionNCRenderPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5704 (-SetWindowCompositionNCRenderPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionSystemBackdropType@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E57B8 (-SetWindowCompositionSystemBackdropType@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowCompositionForceActiveWindowAppearance@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E586C (-SetWindowCompositionForceActiveWindowAppearance@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBD.c)
 *     ?SetWindowDisableMoveSizeFeedback@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5934 (-SetWindowDisableMoveSizeFeedback@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionTransitions@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E59FC (-SetWindowCompositionTransitions@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionCornerStyle@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5AC0 (-SetWindowCompositionCornerStyle@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionDisallowPeek@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5B7C (-SetWindowCompositionDisallowPeek@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionPartColor@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5C44 (-SetWindowCompositionPartColor@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5D2C (-SetWindowCompositionFreezeSWR@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionHasIconicBitmap@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5E0C (-SetWindowCompositionHasIconicBitmap@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?SetWindowCompositionExcludeFromLivePreview@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5ED0 (-SetWindowCompositionExcludeFromLivePreview@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_U.c)
 *     ?SetWindowCompositionDarkModeColors@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1401E5F94 (-SetWindowCompositionDarkModeColors@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?GetWindowCompositionCornerStyle@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z @ 0x140234F70 (-GetWindowCompositionCornerStyle@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z.c)
 *     ?SetWindowCompositionRemoteAppPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140261A94 (-SetWindowCompositionRemoteAppPolicy@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?SetWindowCompositionExcludedFromDDA@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x140264A90 (-SetWindowCompositionExcludedFromDDA@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@.c)
 *     ?SetWindowCompositionAllowNCPaint@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x14026F030 (-SetWindowCompositionAllowNCPaint@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 *     ?SetWindowCompositionPassiveUpdateMode@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402CB9B0 (-SetWindowCompositionPassiveUpdateMode@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@.c)
 *     ?SetWindowCompositionVideoOverlayActive@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402CBA78 (-SetWindowCompositionVideoOverlayActive@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION.c)
 *     ?SetWindowCompositionVisualOwner@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z @ 0x1402CBB40 (-SetWindowCompositionVisualOwner@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@@Z.c)
 * Callees:
 *     IsTopLevelOrLayeredChildWindow @ 0x1400A8258 (IsTopLevelOrLayeredChildWindow.c)
 */

_BOOL8 __fastcall _GetWindowCompositionInfo(const struct tagWND *a1, struct WINDOWCOMPOSITIONINFO *a2)
{
  __int64 v4; // rdi
  int v5; // eax
  BOOL v6; // ebp
  int v7; // eax
  __int64 v8; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  unsigned __int64 v10; // rcx

  v4 = 0LL;
  v5 = IsTopLevelOrLayeredChildWindow();
  if ( v5 )
    v4 = *((_QWORD *)a1 + 46);
  v6 = v5 != 0;
  if ( v4 )
  {
    *(_OWORD *)a2 = *(_OWORD *)v4;
    *((_OWORD *)a2 + 1) = *(_OWORD *)(v4 + 16);
    *((_OWORD *)a2 + 2) = *(_OWORD *)(v4 + 32);
    *((_QWORD *)a2 + 6) = *(_QWORD *)(v4 + 48);
  }
  else
  {
    *(_DWORD *)a2 &= 0xFFFD0000;
    v7 = *(_DWORD *)a2;
    *(_OWORD *)((char *)a2 + 8) = 0LL;
    *((_DWORD *)a2 + 1) = 0;
    *((_QWORD *)a2 + 3) = 0LL;
    v8 = *((_QWORD *)a1 + 2);
    if ( !v8 )
    {
      CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(0LL);
      if ( CurrentThreadWin32Thread )
        v8 = *CurrentThreadWin32Thread;
      else
        v8 = 0LL;
      v7 = *(_DWORD *)a2;
    }
    v10 = (unsigned __int64)*(unsigned int *)(v8 + 680) >> 3;
    *((_DWORD *)a2 + 8) = 0;
    *(_DWORD *)a2 = v7 & 0xFFFBFFFF | v10 & 0x40000;
    *(_QWORD *)((char *)a2 + 36) = 0LL;
    *(_QWORD *)((char *)a2 + 44) = 0LL;
    *((_DWORD *)a2 + 13) = 0;
  }
  *(_DWORD *)a2 &= 0xFFFFFu;
  return v6;
}
