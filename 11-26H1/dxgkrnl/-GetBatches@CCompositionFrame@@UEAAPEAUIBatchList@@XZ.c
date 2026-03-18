/*
 * XREFs of ?GetBatches@CCompositionFrame@@UEAAPEAUIBatchList@@XZ @ 0x140049CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IBatchList *__fastcall CCompositionFrame::GetBatches(CCompositionFrame *this)
{
  struct IBatchList *result; // rax

  result = (struct IBatchList *)*((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = 0LL;
  return result;
}
