/*
 * XREFs of ZwSetTimer2 @ 0x140726C10
 * Callers:
 *     DifZwSetTimer2Wrapper @ 0x1406BC210 (DifZwSetTimer2Wrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetTimer2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
