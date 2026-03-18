/*
 * XREFs of ZwSetInformationDebugObject @ 0x1407268D0
 * Callers:
 *     DifZwSetInformationDebugObjectWrapper @ 0x1406B9AE0 (DifZwSetInformationDebugObjectWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationDebugObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
