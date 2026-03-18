/*
 * XREFs of _CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2_::operator() @ 0x180196D5C
 * Callers:
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Merge_same__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2___ @ 0x180196C28 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderCommand___--_Merg.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2_::operator()(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  if ( *(float *)(a3 + 12) <= *(float *)(a2 + 8) || *(float *)(a2 + 12) <= *(float *)(a3 + 8) )
    return *(float *)(a3 + 8) > *(float *)(a2 + 8);
  else
    return *(_DWORD *)a2 < *(_DWORD *)a3;
}
