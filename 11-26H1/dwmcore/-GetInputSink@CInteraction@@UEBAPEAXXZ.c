/*
 * XREFs of ?GetInputSink@CInteraction@@UEBAPEAXXZ @ 0x18025F980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CInteraction::GetInputSink(CInteraction *this)
{
  return CInteraction::GetInputHandle((CInteraction *)((char *)this - 72));
}
