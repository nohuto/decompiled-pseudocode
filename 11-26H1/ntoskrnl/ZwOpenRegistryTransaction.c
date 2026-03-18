/*
 * XREFs of ZwOpenRegistryTransaction @ 0x140725A90
 * Callers:
 *     DifZwOpenRegistryTransactionWrapper @ 0x1406AD170 (DifZwOpenRegistryTransactionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwOpenRegistryTransaction(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
