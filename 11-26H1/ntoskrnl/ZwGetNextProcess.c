/*
 * XREFs of ZwGetNextProcess @ 0x1407253F0
 * Callers:
 *     DifZwGetNextProcessWrapper @ 0x1406A7AD0 (DifZwGetNextProcessWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetNextProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
