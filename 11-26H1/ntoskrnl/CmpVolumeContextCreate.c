/*
 * XREFs of CmpVolumeContextCreate @ 0x140A2E5E0
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x140A2FA8C (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmSiAllocateMemory @ 0x1404B7C28 (CmSiAllocateMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpVolumeContextCleanup @ 0x140A2E5A8 (CmpVolumeContextCleanup.c)
 *     CmpVolumeContextStart @ 0x140A2E678 (CmpVolumeContextStart.c)
 */

__int64 __fastcall CmpVolumeContextCreate(__int64 a1, __int64 a2, __int64 *a3)
{
  void *Memory; // rax
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // esi

  Memory = (void *)CmSiAllocateMemory();
  v6 = 0;
  v7 = (__int64)Memory;
  if ( Memory )
  {
    memset_0(Memory, 0, 0x48uLL);
    *(_QWORD *)(v7 + 24) = 1LL;
    v9 = CmpVolumeContextStart(v7, v8, a2);
    if ( v9 >= 0 )
    {
      *a3 = v7;
    }
    else
    {
      CmpVolumeContextCleanup(v7);
      CmSiFreeMemory((PPRIVILEGE_SET)v7);
      return (unsigned int)v9;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
