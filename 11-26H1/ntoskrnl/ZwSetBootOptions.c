/*
 * XREFs of ZwSetBootOptions @ 0x1407266F0
 * Callers:
 *     DifZwSetBootOptionsWrapper @ 0x1406B8B90 (DifZwSetBootOptionsWrapper.c)
 *     BiSetBootOptions @ 0x1408941E0 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootOptions(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
