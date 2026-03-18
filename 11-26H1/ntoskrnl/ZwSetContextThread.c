/*
 * XREFs of ZwSetContextThread @ 0x140726750
 * Callers:
 *     DifZwSetContextThreadWrapper @ 0x1406B9050 (DifZwSetContextThreadWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetContextThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
