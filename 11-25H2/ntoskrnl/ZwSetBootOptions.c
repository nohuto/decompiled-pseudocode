/*
 * XREFs of ZwSetBootOptions @ 0x14069E420
 * Callers:
 *     DifZwSetBootOptionsWrapper @ 0x14063BBB0 (DifZwSetBootOptionsWrapper.c)
 *     BiSetBootOptions @ 0x140805B44 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootOptions(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
