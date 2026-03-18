/*
 * XREFs of ZwNotifyChangeDirectoryFileEx @ 0x140725850
 * Callers:
 *     DifZwNotifyChangeDirectoryFileExWrapper @ 0x1406AA840 (DifZwNotifyChangeDirectoryFileExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwNotifyChangeDirectoryFileEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
