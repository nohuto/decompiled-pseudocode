/*
 * XREFs of FsFilterPerformCompletionCallbacks @ 0x14026F350
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14026DFE4 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14026EE84 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1409BB670 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFile @ 0x140A56BA0 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140A5D320 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x140A5D5D0 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlQueryOpen @ 0x140ABB7B4 (FsRtlQueryOpen.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall FsFilterPerformCompletionCallbacks(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // ax
  unsigned int *v5; // rsi
  __int64 v6; // r8
  bool v7; // zf

  v2 = *(_WORD *)(a1 + 74);
  if ( v2 )
  {
    v5 = (unsigned int *)(a1 + 52);
    do
    {
      v6 = *(_QWORD *)(a1 + 80) + 32LL * v2;
      if ( *(_BYTE *)(a1 + 4) == 0xF9 )
        *v5 = a2;
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v6 - 32);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(v6 - 24);
      guard_dispatch_icall_no_overrides(a1, a2, *(_QWORD *)(v6 - 16));
      if ( *(_BYTE *)(a1 + 4) == 0xF9 )
        a2 = *v5;
      else
        v5 = (unsigned int *)(a1 + 52);
      v7 = (*(_WORD *)(a1 + 74))-- == 1;
      v2 = *(_WORD *)(a1 + 74);
    }
    while ( !v7 );
  }
  return a2;
}
