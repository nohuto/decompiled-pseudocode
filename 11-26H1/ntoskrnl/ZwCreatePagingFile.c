/*
 * XREFs of ZwCreatePagingFile @ 0x140724B70
 * Callers:
 *     DifZwCreatePagingFileWrapper @ 0x1406A06E0 (DifZwCreatePagingFileWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreatePagingFile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
