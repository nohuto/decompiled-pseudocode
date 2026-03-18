/*
 * XREFs of std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2___ @ 0x1800C275C
 * Callers:
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x1800C1C44 (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2___ @ 0x1800C275C (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderComm_ea_1800C275C.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1800C2D20 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800C3820 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2___ @ 0x1800C275C (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderComm_ea_1800C275C.c)
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Merge_same__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2___ @ 0x180196C28 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderCommand___--_Merg.c)
 */

__int64 __fastcall std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2___(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  char v3; // bl
  unsigned __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v3 = a3;
  if ( !a2 )
    return *a1;
  if ( a2 == 1 )
    return *(_QWORD *)*a1;
  v7 = a2 >> 1;
  v12 = std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2___(
          a1,
          a2 >> 1,
          a3);
  LOBYTE(v8) = v3;
  v9 = std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2___(
         &v12,
         a2 - v7,
         v8);
  LOBYTE(v10) = v3;
  v11 = v9;
  *a1 = std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Merge_same__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2___(
          *a1,
          v12,
          v9,
          v10);
  return v11;
}
