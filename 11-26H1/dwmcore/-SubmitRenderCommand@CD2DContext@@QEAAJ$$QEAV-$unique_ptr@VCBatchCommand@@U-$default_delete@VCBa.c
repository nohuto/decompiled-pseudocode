/*
 * XREFs of ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C48D0
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006E21C (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800C0E10 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x1800C1C44 (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1800C2D20 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800C3820 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800700A0 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C5AE0 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x1800CEC20 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 *     ?AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x18018CB8C (-AddBatchCommand@CDrawListBatchManager@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delet.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??$emplace_back@AEAPEAVCMegaRectBatchCommand@@@?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@QEAAAEAPEAVCMegaRectBatchCommand@@AEAPEAV2@@Z @ 0x18025EC10 (--$emplace_back@AEAPEAVCMegaRectBatchCommand@@@-$deque@PEAVCMegaRectBatchCommand@@V-$allocator@P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::SubmitRenderCommand(
        CD2DContext *this,
        _QWORD *a2,
        struct CHwLightCollectionBuffer *a3,
        struct ClipPlaneInfoRef *a4)
{
  _DWORD *v4; // rsi
  int v9; // eax
  unsigned int v10; // edi
  _QWORD *v12; // r14
  unsigned int v13; // ebx
  _DWORD *v14; // rdi
  __int64 v15; // rcx
  CBatchOptimizer *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  CD2DTarget *v19; // r13
  __int64 v20; // r8
  unsigned int i; // r12d
  __int64 v22; // rdx
  __int64 v23; // r8
  bool v24; // zf
  __int64 v25; // rdx
  int v26; // [rsp+30h] [rbp-39h] BYREF
  _DWORD *v27; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+40h] [rbp-29h] BYREF
  int *v29; // [rsp+50h] [rbp-19h]
  __int64 v30; // [rsp+58h] [rbp-11h]
  int *v31; // [rsp+60h] [rbp-9h]
  __int64 v32; // [rsp+68h] [rbp-1h]

  v4 = 0LL;
  if ( !*((_BYTE *)this + 429) )
  {
    v19 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      LODWORD(v27) = 0;
      v29 = &v26;
      v26 = 16;
      v31 = (int *)&v27;
      v30 = 4LL;
      v32 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        (__int64)a3,
        3u,
        &v28);
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 384LL))(*((_QWORD *)this + 25));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v26 = 0;
      v29 = (int *)&v27;
      LODWORD(v27) = 16;
      v31 = &v26;
      v30 = 4LL;
      v32 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        v20,
        3u,
        &v28);
    }
    for ( i = 0; i < *((_DWORD *)this + 86); ++i )
    {
      v22 = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * i);
      if ( v19 )
        *((_BYTE *)v19 + 78) = 0;
      v19 = (CD2DTarget *)v22;
      if ( !*(_BYTE *)(v22 + 78) )
      {
        v23 = *(_QWORD *)(v22 + 40);
        *(_QWORD *)(v22 + 16) = this;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 26) + 56LL))(
          *((_QWORD *)this + 26),
          *(_QWORD *)(v22 + 32),
          v23);
        *((_BYTE *)v19 + 78) = 1;
        CD2DTarget::ApplyCurrentClip(v19);
      }
    }
    *((_BYTE *)this + 429) = 1;
  }
  *((_BYTE *)this + 430) = 1;
  v9 = CD2DContext::EnsureDrawListBatch(this, a3, a4);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1EFu, 0LL);
    return v10;
  }
  v12 = (_QWORD *)*((_QWORD *)this + 17);
  ++dword_1803DE348;
  v13 = 0;
  v14 = (_DWORD *)*a2;
  v15 = v12[2];
  v16 = *(CBatchOptimizer **)(v15 + 160);
  if ( *(_DWORD *)*a2 != 4 )
    v14 = 0LL;
  v17 = v15 + 24;
  if ( v16 )
  {
    if ( (unsigned __int8)CBatchOptimizer::AddRenderingCommand(v16) )
      v4 = v14;
    v14 = v4;
  }
  else
  {
    v18 = CDrawListBatchManager::AddBatchCommand(v17, a2);
    v13 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x84u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x1F2u, 0LL);
      return v13;
    }
  }
  if ( v14 )
  {
    v24 = v14[21] == 5;
    v27 = v14;
    if ( v24 )
    {
      v25 = v12[22];
      if ( !v25 )
        v12[21] = v12[20];
      v12[22] = v25 + 1;
    }
    std::deque<CMegaRectBatchCommand *>::emplace_back<CMegaRectBatchCommand * &>(v12 + 16, &v27);
  }
  return v13;
}
