/*
 * XREFs of ZwGetWriteWatch @ 0x140725470
 * Callers:
 *     DifZwGetWriteWatchWrapper @ 0x1406A8180 (DifZwGetWriteWatchWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetWriteWatch(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
