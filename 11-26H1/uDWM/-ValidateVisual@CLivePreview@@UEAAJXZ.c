/*
 * XREFs of ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800B9460
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ @ 0x1800053CC (-GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180005C0C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180016090 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x1800688C0 (-SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x180072B5C (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800747B8 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     ??$_Destroy_range@V?$allocator@ULivePreviewResource@@@std@@@std@@YAXPEAULivePreviewResource@@QEAU1@AEAV?$allocator@ULivePreviewResource@@@0@@Z @ 0x1800B8D50 (--$_Destroy_range@V-$allocator@ULivePreviewResource@@@std@@@std@@YAXPEAULivePreviewResource@@QEA.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAXXZ @ 0x1800B973C (-_CleanupClonedVisualTree@CLivePreview@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLivePreview::ValidateVisual(CLivePreview *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 v6; // rdx
  LivePreviewResource *v8; // rdx
  LivePreviewResource *v9; // rcx
  CBaseObject *v10; // rcx
  __int64 v11; // r8
  double CurrentOpacity; // xmm0_8
  CVisual **v13; // rsi
  CVisual **i; // rdi
  CVisual *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v17; // [rsp+58h] [rbp+10h] BYREF

  v5 = CVisual::ValidateVisual(this, a2, a3, a4);
  if ( v5 < 0 )
  {
    v6 = 1442LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"clientcore\\windows\\dwm\\udwm\\livepreview.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( (*___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v17) & *((_DWORD *)this + 8)) != 0 )
  {
    if ( !*((_DWORD *)this + 103)
      && *((_DWORD *)this + 108) == 3
      && (unsigned __int8)EtwEventEnabled(
                            Microsoft_Windows_Dwm_Udwm_Provider_Context,
                            &PerfTrack_UdwmLivePreviewAnimation_FirstFrameFinished_Info)
      && !GetSystemMetrics(8193) )
    {
      CDesktopManager::SendRoundTripRequest(CDesktopManager::s_pDesktopManagerInstance, (unsigned int *)this + 107);
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 41) + 72LL) )
    {
      if ( *((_DWORD *)this + 58)
        && (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmLivePreviewAnimation_Stop) )
      {
        CDesktopManager::SendRoundTripRequest(CDesktopManager::s_pDesktopManagerInstance, (unsigned int *)this + 106);
      }
      if ( *((_DWORD *)this + 108) == 4 )
      {
        CLivePreview::_ClearAnimatedVisuals(this);
        CLivePreview::_CleanupClonedVisualTree(this);
        v5 = CLivePreview::_ClearAnimationOpaqueVisuals(this);
        if ( v5 < 0 )
        {
          v6 = 1466LL;
          goto LABEL_3;
        }
        v8 = (LivePreviewResource *)*((_QWORD *)this + 35);
        v9 = (LivePreviewResource *)*((_QWORD *)this + 34);
        if ( v9 != v8 )
        {
          std::_Destroy_range<std::allocator<LivePreviewResource>>(v9, v8);
          *((_QWORD *)this + 35) = *((_QWORD *)this + 34);
        }
        v10 = (CBaseObject *)*((_QWORD *)this + 50);
        if ( v10 )
        {
          CBaseObject::Release(v10);
          *((_QWORD *)this + 50) = 0LL;
        }
      }
      *((_DWORD *)this + 103) = 0;
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    }
    else
    {
      ++*((_DWORD *)this + 103);
    }
    CurrentOpacity = CLivePreviewTimeline::GetCurrentOpacity(*((CLivePreviewTimeline **)this + 41));
    v13 = (CVisual **)*((_QWORD *)this + 35);
    for ( i = (CVisual **)*((_QWORD *)this + 34); i != v13; i += 12 )
    {
      if ( *i )
        CVisual::SetOpacity(*i, CurrentOpacity, v11);
      v15 = i[5];
      if ( v15 )
        CVisual::SetOpacity(v15, 1.0 - CurrentOpacity, v11);
    }
    if ( *((_BYTE *)this + 185) )
    {
      CVisual::SetOpacity(*((CVisual **)this + 44), CurrentOpacity, v11);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 48LL))(*((_QWORD *)this + 42));
    }
    *((_DWORD *)this + 8) &= ~*___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v17);
  }
  return 0LL;
}
