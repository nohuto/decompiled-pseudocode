/*
 * XREFs of ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030DC0 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 *     ?ConfirmCompositionFrame@CComposition@@IEAAJXZ @ 0x180032890 (-ConfirmCompositionFrame@CComposition@@IEAAJXZ.c)
 *     ?Present@CDDARenderTarget@@IEAAJXZ @ 0x1800560EC (-Present@CDDARenderTarget@@IEAAJXZ.c)
 *     ?AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180093F74 (-AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?RequestOffThreadCleanTree@CComposition@@QEAAJXZ @ 0x180094C30 (-RequestOffThreadCleanTree@CComposition@@QEAAJXZ.c)
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE2B0 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE760 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800F2550 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800F26A0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x1800F3840 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x1800F3B80 (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1801092C8 (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 *     ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x180123D34 (-GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180123DDC (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180141868 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x18014CE4C (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 *     ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x18018A534 (-ScheduleCompositionPass@CCursorState@@AEAAXXZ.c)
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x1801917E8 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x1801B1F30 (-Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ.c)
 *     ?DeactivateOnNextFrame@CComputeScribbleRenderer@@QEAAXXZ @ 0x18020DD14 (-DeactivateOnNextFrame@CComputeScribbleRenderer@@QEAAXXZ.c)
 *     ?UpdateBatterySaverState@CComposition@@IEAAX_N@Z @ 0x18022B3C0 (-UpdateBatterySaverState@CComposition@@IEAAX_N@Z.c)
 *     ?UpdateEnergySaverState@CComposition@@IEAAX_N@Z @ 0x18022B4F8 (-UpdateEnergySaverState@CComposition@@IEAAX_N@Z.c)
 *     ?CheckForRenderCompleted@CVisualCapture@@IEAAXXZ @ 0x18028631C (-CheckForRenderCompleted@CVisualCapture@@IEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ @ 0x180226608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

ULONG __fastcall CComposition::ScheduleCompositionPass(__int64 a1, ULONG a2, unsigned int a3)
{
  __int64 v6; // r8
  void *v7; // rcx
  ULONG result; // eax
  signed int LastError; // eax
  LARGE_INTEGER DueTime; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-40h] BYREF
  LARGE_INTEGER *p_DueTime; // [rsp+58h] [rbp-30h]
  __int64 v13; // [rsp+60h] [rbp-28h]
  void *retaddr; // [rsp+88h] [rbp+0h]

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Comp_Racy>::GetImpl'::`2'::impl) )
  {
    if ( a2
      && a2 <= (unsigned int)((unsigned __int64)(1000LL
                                               * *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 312)
                                                                                               + 24LL))(*(_QWORD *)(a1 + 312))
                                                           + 8))
                            / g_qpcFrequency.QuadPart) )
    {
      a2 = 0;
    }
  }
  else if ( a2 <= (unsigned int)((unsigned __int64)(1000LL
                                                  * *(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 312)
                                                                                                  + 24LL))(*(_QWORD *)(a1 + 312))
                                                              + 8))
                               / g_qpcFrequency.QuadPart) )
  {
    a2 = 0;
  }
  if ( a2 < *(_DWORD *)(a1 + 248) )
  {
    DueTime.QuadPart = -10000LL * a2;
    v7 = *(void **)(a1 + 240);
    *(_DWORD *)(a1 + 248) = a2;
    if ( !SetWaitableTimerEx(v7, &DueTime, 0, 0LL, 0LL, 0LL, a2) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      ModuleFailFastForHRESULT(LastError, retaddr);
    }
  }
  _m_prefetchw((const void *)(a1 + 252));
  result = ~_InterlockedOr((volatile signed __int32 *)(a1 + 252), a3);
  if ( (result & a3) != 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    DueTime.LowPart = a3;
    p_DueTime = &DueTime;
    v13 = 4LL;
    return McGenEventWrite_EventWriteTransfer(
             &Microsoft_Windows_Dwm_Core_Provider_Context,
             &EVTDESC_SCHEDULED_COMPOSITION_REASON,
             v6,
             2u,
             &v11);
  }
  return result;
}
