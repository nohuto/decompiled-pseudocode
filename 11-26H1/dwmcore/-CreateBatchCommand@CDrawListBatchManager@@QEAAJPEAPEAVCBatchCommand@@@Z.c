/*
 * XREFs of ?CreateBatchCommand@CDrawListBatchManager@@QEAAJPEAPEAVCBatchCommand@@@Z @ 0x1800C47E0
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006E21C (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800C0E10 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x1800C1C44 (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1800C2D20 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800C3820 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C5AE0 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1800C4514 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x18016D360 (-AddMultipleAndSet@-$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z.c)
 */

__int64 __fastcall CDrawListBatchManager::CreateBatchCommand(CDrawListBatchManager *this, struct CBatchCommand **a2)
{
  char *v2; // rbx
  unsigned int v3; // edi
  __int64 v5; // rdx
  unsigned int v6; // eax
  CBatchCommand *v8; // rax
  CBatchCommand *v9; // r14
  int v10; // eax
  CBatchCommand *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)this + 40;
  v3 = 0;
  if ( *((_DWORD *)this + 16) )
    goto LABEL_2;
  v8 = (CBatchCommand *)MIDL_user_allocate(0xB8uLL);
  v9 = v8;
  if ( v8 )
  {
    *(_DWORD *)v8 = 0;
    v11 = v8;
    v10 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(v2, &v11, 1LL);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x160u, 0LL);
      CBatchCommand::`scalar deleting destructor'(v9);
      return v3;
    }
LABEL_2:
    v5 = (unsigned int)(*((_DWORD *)v2 + 6) - 1);
    *a2 = *(struct CBatchCommand **)(*(_QWORD *)v2 + 8 * v5);
    v6 = *((_DWORD *)v2 + 8);
    *((_DWORD *)v2 + 6) = v5;
    if ( v6 >= (unsigned int)v5 )
      v6 = v5;
    *((_DWORD *)v2 + 8) = v6;
    return v3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x15Eu, 0LL);
  return 2147942414LL;
}
