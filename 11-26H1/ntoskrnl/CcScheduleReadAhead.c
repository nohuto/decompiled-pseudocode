/*
 * XREFs of CcScheduleReadAhead @ 0x1405B4130
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleReadAheadNuma @ 0x14021EA88 (CcScheduleReadAheadNuma.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall CcScheduleReadAhead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  CcScheduleReadAheadNuma(FileObject, FileOffset, *(__int64 *)&Length, 0LL, 0LL);
}
