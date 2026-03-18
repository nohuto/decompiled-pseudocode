/*
 * XREFs of ZwCreateRegistryTransaction @ 0x140724C70
 * Callers:
 *     DifZwCreateRegistryTransactionWrapper @ 0x1406A1650 (DifZwCreateRegistryTransactionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateRegistryTransaction(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
