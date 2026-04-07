/*
 * XREFs of ?OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180086700
 * Callers:
 *     ?OnWindowMinimized@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180086650 (-OnWindowMinimized@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowRestored@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180093DF0 (-OnWindowRestored@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z @ 0x180003C7C (-SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z.c)
 *     ?_EvaluateWindowForWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z @ 0x180024318 (-_EvaluateWindowForWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800A8D0C (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ @ 0x1800C082C (-ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ.c)
 *     ?_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800C4120 (-_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@.c)
 *     ?_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800C47D0 (-_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility_2@@@details@wil@@QEAA_NXZ @ 0x1800C5108 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibili.c)
 */

__int64 __fastcall CProjectionBorderManager::OnWindowVisibilityUpdated(
        struct _RTL_GENERIC_TABLE *this,
        struct CWindowData *a2)
{
  CProjectionBorderManager *v4; // rcx
  HWND HostWindowHandleForProxyWindow; // rax
  bool v6; // r8
  int updated; // edi
  __int64 v8; // rdx
  __int64 v10; // rcx
  __int64 v11; // r14
  char ShouldExcludeFromFilteredCaptures; // r12
  int v13; // eax
  unsigned int v14; // esi
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PVOID RestartKey; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility_2>::GetImpl'::`2'::impl)
    && *((_DWORD *)a2 + 114)
    && !*((_QWORD *)a2 + 81)
    && (HostWindowHandleForProxyWindow = CProjectionBorderManager::_GetHostWindowHandleForProxyWindow(v4, a2),
        updated = CProjectionBorderManager::_UpdateCaptureControllerCaptureState(
                    (CProjectionBorderManager *)this,
                    HostWindowHandleForProxyWindow,
                    v6),
        updated < 0) )
  {
    v8 = 1401LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)updated,
      v19);
    return (unsigned int)updated;
  }
  else
  {
    if ( *((_DWORD *)a2 + 115) )
    {
      RestartKey = 0LL;
LABEL_17:
      while ( 1 )
      {
        v15 = RtlEnumerateGenericTableWithoutSplaying(this + 8, &RestartKey);
        v16 = v15;
        if ( !v15 )
          break;
        v10 = 0LL;
        if ( *((_DWORD *)v15 + 24) )
        {
          while ( 1 )
          {
            v11 = (unsigned int)v10;
            if ( **(_QWORD **)(v15[9] + 8 * v10) == *((_QWORD *)a2 + 5) )
            {
              if ( *((_QWORD *)a2 + 55) )
                break;
            }
            v10 = (unsigned int)(v10 + 1);
            if ( (unsigned int)v10 >= *((_DWORD *)v15 + 24) )
              goto LABEL_17;
          }
          if ( (int)v10 >= 0 )
          {
            _mm_lfence();
            ShouldExcludeFromFilteredCaptures = CWindowData::ShouldExcludeFromFilteredCaptures(a2);
            v13 = CVisualProxy::SetExcludeSubtree(
                    *(CVisualProxy **)(*(_QWORD *)(v16[9] + 8 * v11) + 8LL),
                    ShouldExcludeFromFilteredCaptures);
            v14 = v13;
            if ( v13 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x591,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
                (const char *)(unsigned int)v13,
                v19);
              return v14;
            }
            *(_BYTE *)(32 * v11 + v16[13] + 24) = ShouldExcludeFromFilteredCaptures ^ 1;
            updated = CCaptureControllerProxy::SetWindowInfos(
                        (CCaptureControllerProxy *)v16[1],
                        (const struct _DWMCaptureWindowInformation *)v16[13],
                        *((_DWORD *)v16 + 32));
            if ( updated < 0 )
            {
              v8 = 1429LL;
              goto LABEL_6;
            }
          }
        }
      }
    }
    v17 = CProjectionBorderManager::_EvaluateWindowForWindowCaptures(this, a2);
    v18 = v17;
    if ( v17 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59A,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v17,
        v19);
      return v18;
    }
  }
}
