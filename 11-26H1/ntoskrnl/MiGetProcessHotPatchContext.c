/*
 * XREFs of MiGetProcessHotPatchContext @ 0x140876358
 * Callers:
 *     MiLogHotPatchRundownForProcess @ 0x14070101C (MiLogHotPatchRundownForProcess.c)
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 *     MiDeleteHotPatchEntry @ 0x140875DB0 (MiDeleteHotPatchEntry.c)
 *     MiQueryProcessActivePatches @ 0x14087A690 (MiQueryProcessActivePatches.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiGetProcessHotPatchContext(__int64 a1, int a2)
{
  _QWORD *result; // rax
  int CurrentProcessorColor; // eax
  _QWORD *PoolMm; // rax
  signed __int64 v6; // rbx

  result = *(_QWORD **)(a1 + 1912);
  if ( !result )
  {
    if ( a2
      && (CurrentProcessorColor = MmGetCurrentProcessorColor(),
          (PoolMm = (_QWORD *)ExAllocatePoolMm(64LL, 0x28uLL, 1129336904, CurrentProcessorColor | 0x80000000)) != 0LL) )
    {
      PoolMm[1] = PoolMm;
      *PoolMm = PoolMm;
      PoolMm[4] = PoolMm + 3;
      PoolMm[3] = PoolMm + 3;
      PoolMm[2] = 0LL;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1912), (signed __int64)PoolMm, 0LL);
      if ( !v6 )
        return PoolMm;
      ExFreePoolWithTag(PoolMm, 0);
      return (_QWORD *)v6;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
