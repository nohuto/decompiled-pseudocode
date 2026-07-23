/*
 * XREFs of ViDeadlockRemoveThread @ 0x140C3E1A8
 * Callers:
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x14064AE3C (ViDeadlockRemoveMemoryRangeThreads.c)
 *     ViDeadlockEmptyDatabase @ 0x140C3D4DC (ViDeadlockEmptyDatabase.c)
 *     VfDeadlockReleaseResource @ 0x140C4A94C (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140C4D324 (VfDeadlockAcquireResource.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140649138 (VfReportIssueWithOptions.c)
 *     VfUtilAddressRangeRemove @ 0x140C27694 (VfUtilAddressRangeRemove.c)
 *     ViDeadlockPreprocessOptions @ 0x140C3DDD0 (ViDeadlockPreprocessOptions.c)
 */

__int64 __fastcall ViDeadlockRemoveThread(ULONG_PTR a1, int a2)
{
  _QWORD *v3; // r8
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  unsigned __int64 v6; // r9
  __int64 result; // rax
  unsigned __int64 v8; // r9

  if ( !*((_DWORD *)ViDeadlockGlobals + 8196)
    && *((int *)ViDeadlockGlobals + 8282) <= 1024
    && !a2
    && *(_DWORD *)(a1 + 40) )
  {
    ViDeadlockPreprocessOptions(byte_140E0EB68, "Terminated thread 0x%p owns lock.", 4106LL, *(_QWORD *)a1, a1, 0LL);
    VfReportIssueWithOptions(0xC4u, 0x100AuLL, *(_QWORD *)a1, a1, 0LL, byte_140E0EB68);
  }
  v3 = ViDeadlockGlobals;
  --*((_QWORD *)ViDeadlockGlobals + 2051);
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v4 + 8) != a1 + 24 || (v5 = *(_QWORD **)(a1 + 32), *v5 != a1 + 24) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  v6 = *(_QWORD *)a1 >> 12;
  result = 1023 * (v6 / 0x3FF);
  v8 = 2 * (v6 % 0x3FF);
  if ( *(_QWORD *)(v8 * 8 + v3[2050]) != v8 * 8 + v3[2050] )
    return VfUtilAddressRangeRemove(&v3[v8 + 2052], *(_QWORD *)a1, 1944LL);
  v3[v8 + 2052] = 0LL;
  v3[v8 + 2053] = 0LL;
  return result;
}
