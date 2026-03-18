/*
 * XREFs of ZwNotifyChangeDirectoryFile @ 0x140725830
 * Callers:
 *     DifZwNotifyChangeDirectoryFileWrapper @ 0x1406AAA30 (DifZwNotifyChangeDirectoryFileWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwNotifyChangeDirectoryFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
