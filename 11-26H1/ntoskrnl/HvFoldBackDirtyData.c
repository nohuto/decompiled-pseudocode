/*
 * XREFs of HvFoldBackDirtyData @ 0x140AAFDC4
 * Callers:
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 * Callees:
 *     HvMarkDirtyForFlush @ 0x1404B5320 (HvMarkDirtyForFlush.c)
 *     HvFreeDirtyData @ 0x1408CEB28 (HvFreeDirtyData.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 */

void __fastcall HvFoldBackDirtyData(ULONG_PTR a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v4; // rdi
  __int64 v6; // rbp
  int v7; // esi

  v4 = 0LL;
  if ( *(_QWORD *)(a1 + 1696) )
  {
    v6 = *(unsigned int *)(a1 + 1688);
    HvLockHiveWriter(a1, a2, a3, a4);
    if ( (_DWORD)v6 )
    {
      v7 = 8;
      do
      {
        if ( _bittest64(*(const signed __int64 **)(a1 + 1696), v4) == 1 )
          HvMarkDirtyForFlush(a1);
        ++v4;
        v7 += 512;
        --v6;
      }
      while ( v6 );
    }
    HvUnlockHiveWriter(a1);
  }
  HvFreeDirtyData(a1);
}
