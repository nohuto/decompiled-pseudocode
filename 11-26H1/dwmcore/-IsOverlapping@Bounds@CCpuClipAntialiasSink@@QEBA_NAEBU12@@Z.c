/*
 * XREFs of ?IsOverlapping@Bounds@CCpuClipAntialiasSink@@QEBA_NAEBU12@@Z @ 0x180196D38
 * Callers:
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Merge_same__CCpuClipAntialiasSinkContext::ProcessRenderCommands_OverlapPass_::_18_::_lambda_2___ @ 0x180196C28 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderCommand___--_Merg.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCpuClipAntialiasSink::Bounds::IsOverlapping(
        CCpuClipAntialiasSink::Bounds *this,
        const struct CCpuClipAntialiasSink::Bounds *a2)
{
  return *((float *)a2 + 2) > *((float *)this + 1) && *((float *)this + 2) > *((float *)a2 + 1);
}
