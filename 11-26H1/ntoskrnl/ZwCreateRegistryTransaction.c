/*
 * XREFs of ZwCreateRegistryTransaction @ 0x140729840
 * Callers:
 *     DifZwCreateRegistryTransactionWrapper @ 0x1406A5230 (DifZwCreateRegistryTransactionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateRegistryTransaction(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
