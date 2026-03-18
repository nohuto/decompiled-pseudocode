/*
 * XREFs of NtQueryDirectoryFileEx @ 0x1409B1DA0
 * Callers:
 *     DifNtQueryDirectoryFileExWrapper @ 0x140681940 (DifNtQueryDirectoryFileExWrapper.c)
 * Callees:
 *     BuildQueryDirectoryIrp @ 0x1409B1E90 (BuildQueryDirectoryIrp.c)
 *     IopSynchronousServiceTail @ 0x1409B2704 (IopSynchronousServiceTail.c)
 */

__int64 __fastcall NtQueryDirectoryFileEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10)
{
  __int64 result; // rax

  result = BuildQueryDirectoryIrp(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( !(_DWORD)result )
    return IopSynchronousServiceTail(0LL, 0LL, 0LL, 0, 0, 2);
  return result;
}
