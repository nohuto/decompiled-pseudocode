/*
 * XREFs of ?GetTouchProcessorLock@CTouchProcessor@@QEAAAEAVCEResourceLock@@XZ @ 0x1401A4D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CEResourceLock *__fastcall CTouchProcessor::GetTouchProcessorLock(CTouchProcessor *this)
{
  return (CTouchProcessor *)((char *)this + 32);
}
