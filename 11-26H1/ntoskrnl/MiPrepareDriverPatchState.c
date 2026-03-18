/*
 * XREFs of MiPrepareDriverPatchState @ 0x140864420
 * Callers:
 *     MiLockPatchIatForDV @ 0x1406FAF50 (MiLockPatchIatForDV.c)
 *     MmWriteSystemImageTracepoint @ 0x1406FCF64 (MmWriteSystemImageTracepoint.c)
 *     MiLockAndMapEntireDriver @ 0x14086D784 (MiLockAndMapEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x14086DAC4 (MiApplyDriverHotPatch.c)
 *     MmReapplyBootPatchImports @ 0x140CFBA34 (MmReapplyBootPatchImports.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024C8D0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 */

__int64 __fastcall MiPrepareDriverPatchState(__int64 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rcx
  __int64 v8; // rcx

  v2 = *((_DWORD *)a1 + 6);
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(64LL, 8 * ((v2 >> 6) + ((v2 & 0x3F) != 0)), 1296191556, CurrentProcessorColor | 0x80000000);
  if ( !PoolMm )
    return 3221225626LL;
  a1[4] = *((unsigned int *)a1 + 6);
  a1[5] = PoolMm;
  v8 = *a1;
  *((_DWORD *)a1 + 24) = 0;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(v8 + 48)) )
    *((_DWORD *)a1 + 24) |= 2u;
  a1[2] = a2;
  return 0LL;
}
