/*
 * XREFs of ?OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180038F30
 * Callers:
 *     ?OnWindowMinimized@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x180076610 (-OnWindowMinimized@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowRestored@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800A0C90 (-OnWindowRestored@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility_2@@@details@wil@@QEAA_NXZ @ 0x1800390FC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibili.c)
 *     ?_EvaluateWindowForWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z @ 0x18003993C (-_EvaluateWindowForWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z @ 0x180068A94 (-SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x18009BEB4 (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ @ 0x1800A1B68 (-ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ.c)
 *     ?_GetHostWindowHandleForProxyWindow@CCaptureManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800A53AC (-_GetHostWindowHandleForProxyWindow@CCaptureManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z.c)
 *     ?_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800A5E48 (-_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CCaptureManager::OnWindowVisibilityUpdated(__int64 ****this, struct CWindowData *a2)
{
  CCaptureManager *v4; // rcx
  int updated; // ebx
  __int64 v7; // rdx
  HWND HostWindowHandleForProxyWindow; // rax
  bool v9; // r8
  __int64 ***v10; // rdi
  __int64 **v11; // rbx
  unsigned __int64 v12; // r9
  char *v13; // rdx
  unsigned __int64 v14; // rcx
  bool ShouldExcludeFromFilteredCaptures; // al
  int v16; // r9d
  __int64 v17; // r12
  bool v18; // r15
  __int64 v19; // r10
  int v20; // ebp
  __int64 v21; // rdx
  int v22; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_ItemClosedEventOnVisibility_2>::GetImpl'::`2'::impl) )
  {
    if ( *((_DWORD *)a2 + 114) )
    {
      if ( !*((_QWORD *)a2 + 81) )
      {
        HostWindowHandleForProxyWindow = CCaptureManager::_GetHostWindowHandleForProxyWindow(v4, a2);
        updated = CCaptureManager::_UpdateCaptureControllerCaptureState(
                    (CCaptureManager *)this,
                    HostWindowHandleForProxyWindow,
                    v9);
        if ( updated < 0 )
        {
          v7 = 1290LL;
LABEL_6:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v7,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)(unsigned int)updated,
            v22);
          return (unsigned int)updated;
        }
      }
    }
  }
  if ( !*((_DWORD *)a2 + 115) )
    goto LABEL_3;
  v10 = this[26];
  v11 = *v10;
  while ( 2 )
  {
    if ( v11 == (__int64 **)v10 )
    {
LABEL_3:
      updated = CCaptureManager::_EvaluateWindowForWindowCaptures((CCaptureManager *)this, a2);
      if ( updated >= 0 )
        return 0LL;
      v7 = 1321LL;
      goto LABEL_6;
    }
    v12 = 0LL;
    v13 = (char *)v11[11];
    v14 = ((char *)v11[12] - v13) >> 4;
    while ( 1 )
    {
      if ( v12 >= v14 )
        goto LABEL_22;
      if ( *(_QWORD *)v13 == *((_QWORD *)a2 + 5) && *((_QWORD *)a2 + 55) )
        break;
      ++v12;
      v13 += 16;
    }
    if ( (v12 & 0x80000000) != 0LL )
      goto LABEL_22;
    ShouldExcludeFromFilteredCaptures = CWindowData::ShouldExcludeFromFilteredCaptures(a2);
    v17 = v16;
    v18 = ShouldExcludeFromFilteredCaptures;
    v20 = CVisualProxy::SetExcludeSubtree(*(CVisualProxy **)(v19 + 16LL * v16 + 8), ShouldExcludeFromFilteredCaptures);
    if ( v20 < 0 )
    {
      v21 = 1312LL;
      goto LABEL_24;
    }
    LOBYTE(v11[14][4 * v17 + 3]) = !v18;
    v20 = CCaptureControllerProxy::SetWindowInfos(
            (CCaptureControllerProxy *)v11[4],
            (const struct _DWMCaptureWindowInformation *)v11[14],
            ((char *)v11[15] - (char *)v11[14]) >> 5);
    if ( v20 >= 0 )
    {
LABEL_22:
      v11 = (__int64 **)*v11;
      continue;
    }
    break;
  }
  v21 = 1316LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
    (const char *)(unsigned int)v20,
    v22);
  return (unsigned int)v20;
}
