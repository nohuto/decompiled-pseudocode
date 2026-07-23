/*
 * XREFs of FsFilterCtrlInit @ 0x140454CD0
 * Callers:
 *     FsRtlAcquireFileExclusiveCommon @ 0x14098C650 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFile @ 0x140A64120 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140A6A2E0 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x140A6A590 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlQueryOpen @ 0x140ABD4B8 (FsRtlQueryOpen.c)
 * Callees:
 *     FsFilterAllocateCompletionStack @ 0x140454D68 (FsFilterAllocateCompletionStack.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall FsFilterCtrlInit(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int8 a6)
{
  unsigned __int16 v7; // ax
  void *v8; // rcx
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = a5;
  *(_DWORD *)a1 = 64;
  *(_BYTE *)(a1 + 4) = a2;
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v7 = *(char *)(a3 + 76);
  *(_WORD *)(a1 + 72) = v7;
  *(_WORD *)(a1 + 74) = 0;
  if ( v7 > 0xFu )
    return FsFilterAllocateCompletionStack(a1, a6);
  v8 = (void *)(a1 + 88);
  *(_QWORD *)(a1 + 80) = v8;
  memset_0(v8, 0, 0x1E0uLL);
  result = 0LL;
  *(_WORD *)(a1 + 72) = 15;
  return result;
}
