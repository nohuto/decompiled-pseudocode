/*
 * XREFs of ZwResetWriteWatch @ 0x140726510
 * Callers:
 *     DifZwResetWriteWatchWrapper @ 0x1406B7F70 (DifZwResetWriteWatchWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwResetWriteWatch(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
