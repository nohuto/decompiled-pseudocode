/*
 * XREFs of ?OnWindowClosed@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800902E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800071D4 (-RemoveChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z @ 0x180059084 (-RemoveAt@-$DynArray@PEAVCAnimationComponent@@$0A@@@QEAAJI@Z.c)
 *     ?_RemoveSecondaryWindowFromWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z @ 0x180073788 (-_RemoveSecondaryWindowFromWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800A8D0C (-SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ??_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z @ 0x1800A8E48 (--_GCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@U_DWMCaptureWindowInformation@@$0A@@@QEAAJI@Z @ 0x1800C0064 (-RemoveAt@-$DynArray@U_DWMCaptureWindowInformation@@$0A@@@QEAAJI@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Filtered_Capture_Window_Close@@@details@wil@@QEAA_NXZ @ 0x1800C51BC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Filtered_Capture_Window_Close@@@d.c)
 */

__int64 __fastcall CProjectionBorderManager::OnWindowClosed(struct _RTL_GENERIC_TABLE *this, struct CWindowData *a2)
{
  struct _RTL_GENERIC_TABLE *v4; // r12
  __int64 v5; // rdi
  _QWORD *v6; // r14
  unsigned int v7; // edx
  int v8; // ebp
  CProjectionBorderManager::CAPTURE_FILTERED_WINDOW *v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  int v12; // ebx
  char *v13; // rax
  char *v14; // rbx
  __int64 v15; // rdx
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PVOID RestartKey; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 115) )
  {
    RestartKey = 0LL;
    v4 = this + 8;
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_16:
        v13 = (char *)RtlEnumerateGenericTableWithoutSplaying(v4, &RestartKey);
        v14 = v13;
        if ( !v13 )
          goto LABEL_17;
        v5 = 0LL;
        if ( *((_DWORD *)v13 + 24) )
        {
          v6 = v13 + 72;
          while ( **(_QWORD **)(*((_QWORD *)v13 + 9) + 8 * v5) != *((_QWORD *)a2 + 5) )
          {
            v5 = (unsigned int)(v5 + 1);
            if ( (unsigned int)v5 >= *((_DWORD *)v13 + 24) )
              goto LABEL_16;
          }
          if ( (int)v5 >= 0 )
            break;
        }
      }
      _mm_lfence();
      v8 = CContainerVisualProxy::RemoveChild(
             *((CContainerVisualProxy **)v13 + 8),
             *(struct CVisualProxy **)(*(_QWORD *)(*v6 + 8 * v5) + 8LL));
      if ( v8 < 0 )
        break;
      v9 = *(CProjectionBorderManager::CAPTURE_FILTERED_WINDOW **)(*v6 + 8 * v5);
      if ( v9 )
        CProjectionBorderManager::CAPTURE_FILTERED_WINDOW::`scalar deleting destructor'(v9, v7);
      v8 = DynArray<CAnimationComponent *,0>::RemoveAt((__int64 *)v14 + 9, v5);
      if ( v8 < 0 )
      {
        v17 = 1329LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)v8,
          v18);
        return (unsigned int)v8;
      }
      v10 = DynArray<_DWMCaptureWindowInformation,0>::RemoveAt(v14 + 104, (unsigned int)v5);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x532,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)(unsigned int)v10,
          v18);
        return v11;
      }
      --*((_DWORD *)a2 + 115);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Filtered_Capture_Window_Close>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Filtered_Capture_Window_Close>::GetImpl'::`2'::impl) )
      {
        v12 = CCaptureControllerProxy::SetWindowInfos(
                *((CCaptureControllerProxy **)v14 + 1),
                *((const struct _DWMCaptureWindowInformation **)v14 + 13),
                *((_DWORD *)v14 + 32));
        if ( v12 < 0 )
        {
          v15 = 1336LL;
          goto LABEL_20;
        }
      }
    }
    v17 = 1327LL;
    goto LABEL_24;
  }
LABEL_17:
  v12 = CProjectionBorderManager::_RemoveSecondaryWindowFromWindowCaptures(this, a2);
  if ( v12 >= 0 )
    return 0LL;
  v15 = 1342LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)v12,
    v18);
  return (unsigned int)v12;
}
