/*
 * XREFs of HvFreeDirtyData @ 0x1408CEB28
 * Callers:
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     CmpDereferenceHive @ 0x1408CCB50 (CmpDereferenceHive.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408CCC40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1408CFA20 (CmpDeleteKeyObject.c)
 *     CmpDeleteHive @ 0x1408DA884 (CmpDeleteHive.c)
 *     CmpWalkOneLevel @ 0x1408DBBE0 (CmpWalkOneLevel.c)
 *     CmpUnlockHashEntry @ 0x140A4F550 (CmpUnlockHashEntry.c)
 *     HvFoldBackDirtyData @ 0x140AAFDC4 (HvFoldBackDirtyData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall HvFreeDirtyData(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rsi
  PVOID *i; // rdi
  void *v5; // rcx

  v2 = *(void **)(a1 + 1696);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    v3 = 0LL;
    *(_DWORD *)(a1 + 1688) = 0;
    *(_QWORD *)(a1 + 1696) = 0LL;
    for ( i = (PVOID *)(a1 + 1712); (unsigned int)v3 < *(_DWORD *)(a1 + 1720); v3 = (unsigned int)(v3 + 1) )
    {
      v5 = (void *)*((_QWORD *)*i + 3 * v3 + 1);
      if ( v5 )
      {
        ExFreePoolWithTag(v5, 0);
        *((_QWORD *)*i + 3 * v3 + 1) = 0LL;
      }
    }
    ExFreePoolWithTag(*i, 0);
    *i = 0LL;
    *(_QWORD *)(a1 + 1720) = 0LL;
    *(_BYTE *)(a1 + 1728) = 0;
  }
}
