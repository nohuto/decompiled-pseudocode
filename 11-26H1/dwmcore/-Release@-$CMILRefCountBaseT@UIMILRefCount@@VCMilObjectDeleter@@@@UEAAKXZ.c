/*
 * XREFs of ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360
 * Callers:
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A5F4 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reserve_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUContentEntry@CDrawListCacheSet@@_K0@Z @ 0x18001E494 (-reserve_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CD.c)
 *     ?clear_region@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18001E878 (-clear_region@-$vector_facade@UContentEntry@CDrawListCacheSet@@V-$buffer_impl@UContentEntry@CDra.c)
 *     ??_ECAsyncFlushResponse@@UEAAPEAXI@Z @ 0x18001F290 (--_ECAsyncFlushResponse@@UEAAPEAXI@Z.c)
 *     ??$destruct_range@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@YAXPEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@0@Z @ 0x18001F2E8 (--$destruct_range@USinkRenderParameters@CCpuClipAntialiasSinkContext@@@detail@@YAXPEAUSinkRender.c)
 *     ?ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z @ 0x180025D40 (-ProcessInsertChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILD@@@Z.c)
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030DC0 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@UEAAXXZ @ 0x18007AF90 (-ReleaseResponseRef@CResponseItem@@UEAAXXZ.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x1800AB36C (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800C0E10 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ??1SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@XZ @ 0x1800C5A88 (--1SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAA@XZ.c)
 *     ?GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCommonRenderingShaderDesc@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180100310 (-GetCommonRenderingShaderInternalNoRef@CCommonRenderingShaderCache@@AEAAJPEAVCD3DDevice@@AEBUCom.c)
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x180111FC0 (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 *     ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x1801370A8 (-DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ.c)
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x180149494 (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUtagMILCMD_MAGNIFIERREN.c)
 *     ?Partition_RegisterForNotifications@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x18014E7BC (-Partition_RegisterForNotifications@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ??1CDrawListEntryBatch@@EEAA@XZ @ 0x180150FDC (--1CDrawListEntryBatch@@EEAA@XZ.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18016303C (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?OpenChannel@CComposition@@IEAAJIK_KPEAX@Z @ 0x180163C50 (-OpenChannel@CComposition@@IEAAJIK_KPEAX@Z.c)
 *     ?Create@CChannelContext@@SAJIK_KPEAXPEAVCConnection@@PEAPEAV1@@Z @ 0x180163D70 (-Create@CChannelContext@@SAJIK_KPEAXPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ?SetProcessAttribution@CWindowNode@@QEAAJAEBUDCOMPOSITION_PROCESS_ATTRIBUTION@@@Z @ 0x180163EE4 (-SetProcessAttribution@CWindowNode@@QEAAJAEBUDCOMPOSITION_PROCESS_ATTRIBUTION@@@Z.c)
 *     ?Channel_BeginDuplicateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_BEGINDUPLICATERESOURCE@@@Z @ 0x18019CD00 (-Channel_BeginDuplicateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBU.c)
 *     ?InternalRelease@?$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A5C3C (-InternalRelease@-$ComPtr@VCGenericInkTipPointSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x1801AA340 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x1801CAC48 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 *     ?Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z @ 0x1801CADA0 (-Create@CSharedDirect3DResources@CDrawListEntryBatch@@SAJPEAVCD3DDevice@@PEAPEAV12@@Z.c)
 *     ?Release@CSpectreCallbackRenderer@@UEAAKXZ @ 0x1801D3FD0 (-Release@CSpectreCallbackRenderer@@UEAAKXZ.c)
 *     ?Create@CEffectCompilationService@@SAJPEAXPEAPEAV1@@Z @ 0x1801D6860 (-Create@CEffectCompilationService@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801D7020 (-reset@-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z @ 0x1801D777C (-Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z.c)
 *     ??4SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z @ 0x180209304 (--4SinkRenderParameters@CCpuClipAntialiasSinkContext@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVCConnection@@PEAPEAVCComposition@@@Z @ 0x18020E22C (-Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVCConnection@@PEAPEAVCComposition@@@Z.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x18021B59C (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180229B7C (--1CComposition@@MEAA@XZ.c)
 *     ??1?$com_ptr_t@VCSpectreCallbackRenderer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802347B8 (--1-$com_ptr_t@VCSpectreCallbackRenderer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(volatile signed __int32 *a1)
{
  int v2; // edi
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = _InterlockedDecrement(a1 + 2);
  if ( v2 < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v4);
  if ( !v2 )
  {
    if ( _InterlockedAdd(a1 + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v4);
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 24LL))(a1);
    v2 = _InterlockedDecrement(a1 + 2);
    if ( v2 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v4);
    if ( !v2 )
    {
      if ( _InterlockedDecrement(a1 + 2) < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v4);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 16LL))(a1, 1LL);
    }
  }
  return (unsigned int)v2;
}
