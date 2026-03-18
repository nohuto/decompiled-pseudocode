/*
 * XREFs of ZwCancelIoFileEx @ 0x140724670
 * Callers:
 *     DifZwCancelIoFileExWrapper @ 0x14069C660 (DifZwCancelIoFileExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCancelIoFileEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
