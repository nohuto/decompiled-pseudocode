/*
 * XREFs of ?SetBatches@CCompositionFrame@@UEAAXPEAUIBatchList@@@Z @ 0x140050090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCompositionFrame::SetBatches(CCompositionFrame *this, struct IBatchList *a2)
{
  *((_QWORD *)this + 25) = a2;
}
