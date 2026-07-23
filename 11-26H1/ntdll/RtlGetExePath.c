/*
 * XREFs of RtlGetExePath @ 0x18009A000
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNeedCurrentDirectoryForExePath @ 0x18009A058 (RtlpNeedCurrentDirectoryForExePath.c)
 *     RtlpGetCachedPath @ 0x18009AF00 (RtlpGetCachedPath.c)
 */

NTSTATUS __cdecl RtlGetExePath(PCWSTR DosPathName, PWSTR *SearchPathA)
{
  char v3; // al
  __int64 CachedPath; // rax

  v3 = RtlpNeedCurrentDirectoryForExePath(DosPathName);
  CachedPath = RtlpGetCachedPath(&RtlpExeSearchPath, RtlpComputeExePath, v3 == 0, 0LL);
  if ( CachedPath )
  {
    *SearchPathA = (PWSTR)(CachedPath + 128);
    return 0;
  }
  else
  {
    *SearchPathA = 0LL;
    return -1073741801;
  }
}
