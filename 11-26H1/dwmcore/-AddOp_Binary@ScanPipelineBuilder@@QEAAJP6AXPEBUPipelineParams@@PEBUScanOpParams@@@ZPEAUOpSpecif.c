/*
 * XREFs of ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x1802B4E50
 * Callers:
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x1802B4A2C (-InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z.c)
 *     ?Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z @ 0x1802B4FF0 (-Append_Convert@ScanPipelineBuilder@@QEAAJAEBUPixelFormatInfo@@0W4Subpipe@1@@Z.c)
 *     ?Append_Convert_BetweenInterchange@ScanPipelineBuilder@@IEAAJW4DXGI_FORMAT@@0W4Subpipe@1@@Z @ 0x1802B531C (-Append_Convert_BetweenInterchange@ScanPipelineBuilder@@IEAAJW4DXGI_FORMAT@@0W4Subpipe@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddBufferReference@ScanPipelineBuilder@@IEAAJPEAPEBXW4BufferLocation@@@Z @ 0x1802B4D1C (-AddBufferReference@ScanPipelineBuilder@@IEAAJPEAPEBXW4BufferLocation@@@Z.c)
 *     ?AddOperation@ScanPipelineBuilder@@IEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@IPEAPEAUPipelineItem@@@Z @ 0x1802B4F58 (-AddOperation@ScanPipelineBuilder@@IEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 *     ?PingPongBuffer@ScanPipelineBuilder@@IEAAXW4Subpipe@1@@Z @ 0x1802B55A8 (-PingPongBuffer@ScanPipelineBuilder@@IEAAXW4Subpipe@1@@Z.c)
 */

__int64 __fastcall ScanPipelineBuilder::AddOp_Binary(
        int *a1,
        void (*a2)(const struct PipelineParams *, const struct ScanOpParams *),
        struct PipelineItem *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // r9d
  int v6; // eax
  struct PipelineItem *v7; // rbp
  unsigned int v9; // [rsp+20h] [rbp-18h]
  struct PipelineItem *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  if ( a2 )
  {
    v5 = a1[8];
    v10 = 0LL;
    v6 = ScanPipelineBuilder::AddOperation((ScanPipelineBuilder *)a1, a2, a3, v5, &v10);
    v4 = v6;
    if ( v6 < 0 )
    {
      v9 = 222;
    }
    else
    {
      v7 = v10;
      *((_QWORD *)v10 + 3) = 0LL;
      v6 = ScanPipelineBuilder::AddBufferReference(a1, (_QWORD *)v7 + 2, a1[6]);
      v4 = v6;
      if ( v6 < 0 )
      {
        v9 = 226;
      }
      else
      {
        ScanPipelineBuilder::PingPongBuffer(a1);
        *((_DWORD *)v7 + 10) = a1[8];
        v6 = ScanPipelineBuilder::AddBufferReference(a1, (_QWORD *)v7 + 1, a1[6]);
        v4 = v6;
        if ( v6 >= 0 )
          return v4;
        v9 = 230;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v9, 0LL);
    return v4;
  }
  v4 = -2003292287;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292287, 0xDAu, 0LL);
  return v4;
}
