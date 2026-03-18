/*
 * XREFs of ZwFreezeTransactions @ 0x1407252F0
 * Callers:
 *     DifZwFreezeTransactionsWrapper @ 0x1406A6E40 (DifZwFreezeTransactionsWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFreezeTransactions(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
