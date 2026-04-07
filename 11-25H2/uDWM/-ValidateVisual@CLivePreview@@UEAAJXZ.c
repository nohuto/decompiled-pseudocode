/*
 * XREFs of ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180036F70
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18000723C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18000B780 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ @ 0x1800371BC (-GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ.c)
 *     ?Update@CDoubleResourceProxy@@QEAAJN@Z @ 0x180037210 (-Update@CDoubleResourceProxy@@QEAAJN@Z.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x18003750C (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x1800375BC (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18003769C (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x1800377E8 (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180037998 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x1800787B0 (-SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLivePreview::ValidateVisual(CLivePreview *this)
{
  int v2; // edi
  double CurrentOpacity; // xmm0_8
  __int64 v5; // rdx
  CBaseObject *v6; // rcx
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = CVisual::ValidateVisual(this);
  if ( v2 < 0 )
  {
    v5 = 1581LL;
    goto LABEL_13;
  }
  if ( (*((_DWORD *)this + 8) & 0x2000) == 0 )
    return 0LL;
  if ( !*((_DWORD *)this + 123)
    && *((_DWORD *)this + 128) == 3
    && (unsigned __int8)EtwEventEnabled(
                          Microsoft_Windows_Dwm_Udwm_Provider_Context,
                          &PerfTrack_UdwmLivePreviewAnimation_FirstFrameFinished_Info)
    && !GetSystemMetrics(8193) )
  {
    CDesktopManager::SendRoundTripRequest(CDesktopManager::s_pDesktopManagerInstance, (unsigned int *)this + 127);
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 49) + 72LL) )
  {
    if ( *((_DWORD *)this + 72)
      && (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmLivePreviewAnimation_Stop) )
    {
      CDesktopManager::SendRoundTripRequest(CDesktopManager::s_pDesktopManagerInstance, (unsigned int *)this + 126);
    }
    if ( *((_DWORD *)this + 128) == 4 )
    {
      CLivePreview::_ClearAnimatedVisuals(this);
      v2 = CLivePreview::_CleanupClonedVisualTree(this);
      if ( v2 < 0 )
      {
        v5 = 1604LL;
        goto LABEL_13;
      }
      v2 = CLivePreview::_ClearAnimationOpaqueVisuals(this);
      if ( v2 < 0 )
      {
        v5 = 1605LL;
        goto LABEL_13;
      }
      CLivePreview::_ReleasePerMonitorResources(this);
      v6 = (CBaseObject *)*((_QWORD *)this + 60);
      if ( v6 )
      {
        CBaseObject::Release(v6);
        *((_QWORD *)this + 60) = 0LL;
      }
      v2 = CRenderDataVisual::ClearInstructions(this);
      if ( v2 < 0 )
      {
        v5 = 1610LL;
        goto LABEL_13;
      }
    }
    *((_DWORD *)this + 123) = 0;
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
  }
  else
  {
    ++*((_DWORD *)this + 123);
  }
  CurrentOpacity = CLivePreviewTimeline::GetCurrentOpacity(*((CLivePreviewTimeline **)this + 49));
  v2 = CDoubleResourceProxy::Update(*((CDoubleResourceProxy **)this + 50), CurrentOpacity);
  if ( v2 < 0 )
  {
    v5 = 1623LL;
  }
  else
  {
    if ( *((_BYTE *)this + 241) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 88LL))(*((_QWORD *)this + 54));
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 52) + 48LL))(*((_QWORD *)this + 52));
    }
    v2 = CDoubleResourceProxy::Update(*((CDoubleResourceProxy **)this + 51), 1.0 - CurrentOpacity);
    if ( v2 >= 0 )
    {
      *((_DWORD *)this + 8) &= ~0x2000u;
      return 0LL;
    }
    v5 = 1633LL;
  }
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\livepreview.cpp",
    (const char *)(unsigned int)v2,
    v7);
  return (unsigned int)v2;
}
