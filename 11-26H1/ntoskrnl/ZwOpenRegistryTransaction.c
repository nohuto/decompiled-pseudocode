/*
 * XREFs of ZwOpenRegistryTransaction @ 0x14072A660
 * Callers:
 *     DifZwOpenRegistryTransactionWrapper @ 0x1406B0D50 (DifZwOpenRegistryTransactionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenRegistryTransaction(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
