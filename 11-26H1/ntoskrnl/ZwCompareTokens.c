/*
 * XREFs of ZwCompareTokens @ 0x140724810
 * Callers:
 *     DifZwCompareTokensWrapper @ 0x14069D850 (DifZwCompareTokensWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCompareTokens(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
