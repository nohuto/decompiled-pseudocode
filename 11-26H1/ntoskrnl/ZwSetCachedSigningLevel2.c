/*
 * XREFs of ZwSetCachedSigningLevel2 @ 0x140726730
 * Callers:
 *     DifZwSetCachedSigningLevel2Wrapper @ 0x1406B8D00 (DifZwSetCachedSigningLevel2Wrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetCachedSigningLevel2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
