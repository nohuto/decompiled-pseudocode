/*
 * XREFs of ZwSetCachedSigningLevel2 @ 0x14072B300
 * Callers:
 *     DifZwSetCachedSigningLevel2Wrapper @ 0x1406BC8E0 (DifZwSetCachedSigningLevel2Wrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetCachedSigningLevel2(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
