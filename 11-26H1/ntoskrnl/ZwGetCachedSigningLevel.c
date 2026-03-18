/*
 * XREFs of ZwGetCachedSigningLevel @ 0x140725310
 * Callers:
 *     DifZwGetCachedSigningLevelWrapper @ 0x1406A71A0 (DifZwGetCachedSigningLevelWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetCachedSigningLevel(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
