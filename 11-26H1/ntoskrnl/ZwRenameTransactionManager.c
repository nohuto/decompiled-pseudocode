/*
 * XREFs of ZwRenameTransactionManager @ 0x140726450
 * Callers:
 *     DifZwRenameTransactionManagerWrapper @ 0x1406B7080 (DifZwRenameTransactionManagerWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRenameTransactionManager(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
