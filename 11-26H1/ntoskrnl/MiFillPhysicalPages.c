/*
 * XREFs of MiFillPhysicalPages @ 0x140288AC0
 * Callers:
 *     MiInitializeSystemPageTable @ 0x14033CC0C (MiInitializeSystemPageTable.c)
 *     MiGetCachedPoolPages @ 0x1404AC4E0 (MiGetCachedPoolPages.c)
 *     MiInitializeDummyPages @ 0x140CF9670 (MiInitializeDummyPages.c)
 *     MxMapVa @ 0x140CFE330 (MxMapVa.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140287440 (MiMapPageInHyperSpaceWorker.c)
 *     AccelFillMemory @ 0x1402A0F14 (AccelFillMemory.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     KeZeroPages @ 0x1407353B0 (KeZeroPages.c)
 *     MxGetPhase0Mapping @ 0x140C86058 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MiFillPhysicalPages(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD *v4; // r15
  unsigned __int64 Phase0Mapping; // rbx
  int v9; // ebp
  unsigned __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = a3;
  LOBYTE(v12) = 17;
  v4 = 0LL;
  if ( KeGetCurrentPrcb()->MmInternal )
  {
    Phase0Mapping = MiMapPageInHyperSpaceWorker(a2, (unsigned __int8 *)&v12, 0x80000000);
    v9 = 1;
  }
  else
  {
    v9 = 0;
    Phase0Mapping = MxGetPhase0Mapping();
    v4 = (_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *v4 = MiMakeValidPte(v4, a2, 2684354564LL);
  }
  if ( a4 )
  {
    memset64((void *)Phase0Mapping, a4, 0x200uLL);
  }
  else
  {
    if ( !a1 )
    {
LABEL_5:
      KeZeroPages(Phase0Mapping, 4096LL);
      goto LABEL_6;
    }
    if ( (int)AccelFillMemory(a1, Phase0Mapping, 4096, 0, 3LL) < 0 )
    {
      _InterlockedIncrement(&dword_140EF4DEC);
      goto LABEL_5;
    }
  }
LABEL_6:
  if ( v9 )
  {
    v10 = (unsigned __int8)v12;
    result = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
    *(_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    if ( (_BYTE)v10 != 17 )
    {
      if ( KiIrqlFlags )
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
      __writecr8(v10);
    }
  }
  else
  {
    *v4 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    return MiFlushSingleTbEntry(Phase0Mapping, 2LL);
  }
  return result;
}
