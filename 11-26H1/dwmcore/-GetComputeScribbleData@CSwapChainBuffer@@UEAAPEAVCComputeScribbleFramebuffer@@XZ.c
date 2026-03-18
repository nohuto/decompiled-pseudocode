/*
 * XREFs of ?GetComputeScribbleData@CSwapChainBuffer@@UEAAPEAVCComputeScribbleFramebuffer@@XZ @ 0x1801BE620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CComputeScribbleFramebuffer *__fastcall CSwapChainBuffer::GetComputeScribbleData(CSwapChainBuffer *this)
{
  return (struct CComputeScribbleFramebuffer *)*((_QWORD *)this + 14);
}
