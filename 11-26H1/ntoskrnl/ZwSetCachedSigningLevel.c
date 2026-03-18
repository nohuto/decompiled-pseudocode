/*
 * XREFs of ZwSetCachedSigningLevel @ 0x140726710
 * Callers:
 *     DifZwSetCachedSigningLevelWrapper @ 0x1406B8EB0 (DifZwSetCachedSigningLevelWrapper.c)
 *     sub_140A19B9C @ 0x140A19B9C (sub_140A19B9C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetCachedSigningLevel(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
