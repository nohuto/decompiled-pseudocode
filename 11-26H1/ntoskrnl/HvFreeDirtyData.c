/*
 * XREFs of HvFreeDirtyData @ 0x1408C8574
 * Callers:
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     CmpDereferenceHive @ 0x1408C6580 (CmpDereferenceHive.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1408C9470 (CmpDeleteKeyObject.c)
 *     CmpDeleteHive @ 0x1408D42C4 (CmpDeleteHive.c)
 *     CmpWalkOneLevel @ 0x1408D5620 (CmpWalkOneLevel.c)
 *     CmpUnlockHashEntry @ 0x140A345F0 (CmpUnlockHashEntry.c)
 *     HvFoldBackDirtyData @ 0x140AB20F0 (HvFoldBackDirtyData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
