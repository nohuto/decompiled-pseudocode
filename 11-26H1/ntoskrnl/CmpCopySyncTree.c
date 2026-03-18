/*
 * XREFs of CmpCopySyncTree @ 0x14098709C
 * Callers:
 *     CmpSaveBootControlSet @ 0x14084CBB8 (CmpSaveBootControlSet.c)
 *     CmSaveMergedKeys @ 0x14084D378 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14084D878 (CmpLoadHiveVolatile.c)
 *     CmpCloneHwProfile @ 0x140852134 (CmpCloneHwProfile.c)
 *     CmpPreserveSystemHiveData @ 0x14085F688 (CmpPreserveSystemHiveData.c)
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
 *     CmpReorganizeHive @ 0x140AE35CC (CmpReorganizeHive.c)
 * Callees:
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmpCopySyncTree2 @ 0x1408DE354 (CmpCopySyncTree2.c)
 */

__int64 __fastcall CmpCopySyncTree(ULONG_PTR a1, int a2, ULONG_PTR a3, int a4, __int16 a5, int a6)
{
  __int64 Pool; // rax
  struct _PRIVILEGE_SET *v11; // rbx
  unsigned int v12; // edi

  Pool = CmpAllocatePool(0x100uLL);
  v11 = (struct _PRIVILEGE_SET *)Pool;
  if ( Pool )
  {
    *(_DWORD *)(Pool + 12) &= 0xFFFFFFF8;
    *(_BYTE *)(Pool + 16) &= 0xFCu;
    *(_DWORD *)Pool = a2;
    *(_DWORD *)(Pool + 4) = a4;
    *(_DWORD *)(Pool + 8) = 0;
    v12 = CmpCopySyncTree2(Pool, 512LL, 0LL, a1, a3, a5, a6);
    CmSiFreeMemory(v11);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v12;
}
