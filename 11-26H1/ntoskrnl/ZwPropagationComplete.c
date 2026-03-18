/*
 * XREFs of ZwPropagationComplete @ 0x140725CB0
 * Callers:
 *     DifZwPropagationCompleteWrapper @ 0x1406AF1F0 (DifZwPropagationCompleteWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPropagationComplete(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
