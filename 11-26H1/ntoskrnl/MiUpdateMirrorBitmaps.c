/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x140B68B5C
 * Callers:
 *     MiAddPartitionHugeRange @ 0x1406EFCE8 (MiAddPartitionHugeRange.c)
 *     MiAcquireAddMemoryResources @ 0x14086B334 (MiAcquireAddMemoryResources.c)
 *     MmDuplicateMemory @ 0x140C130F0 (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x140CFEE64 (MiInitializeMirroring.c)
 * Callees:
 *     MiSplitMirrorBitMap @ 0x14086EAC0 (MiSplitMirrorBitMap.c)
 *     MiActOnMirrorBitmap @ 0x140C12CF8 (MiActOnMirrorBitmap.c)
 */

__int64 __fastcall MiUpdateMirrorBitmaps(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  unsigned __int8 *v7; // rdi
  int i; // esi
  int j; // esi

  v6 = (int)a1;
  v7 = &stru_140E2ED08.WaitBlock[2].WaitType + 4 * (int)a1;
  if ( !a3 || *(_DWORD *)v7 )
  {
    if ( *(_DWORD *)v7 != 2 )
    {
      for ( i = 0; i < 2; ++i )
      {
        if ( !(unsigned int)MiActOnMirrorBitmap(a1, (unsigned int)i, 0LL) )
        {
LABEL_13:
          *(_DWORD *)v7 = 1;
          return 0LL;
        }
      }
    }
    if ( a3 )
    {
      for ( j = 0; j < 2; ++j )
      {
        if ( !(unsigned int)MiSplitMirrorBitMap(
                              (unsigned __int64 *)&stru_140E2ED08.WaitBlock[1] + 4 * v6 + 2 * j,
                              a2,
                              a3) )
          goto LABEL_13;
      }
    }
    *(_DWORD *)v7 = 2;
  }
  return 1LL;
}
