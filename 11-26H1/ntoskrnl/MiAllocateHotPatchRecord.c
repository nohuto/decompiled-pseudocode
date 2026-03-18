/*
 * XREFs of MiAllocateHotPatchRecord @ 0x14086D9B0
 * Callers:
 *     MiLoadHotPatch @ 0x140870D5C (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x1408712F4 (MiLoadHotPatchForUserSid.c)
 *     MmRegisterHotPatches @ 0x140CFBBA4 (MmRegisterHotPatches.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14044ADC0 (MmGetCurrentProcessorColor.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall MiAllocateHotPatchRecord(int a1, int a2, int a3, const void **a4, int a5)
{
  __int64 v5; // rbx
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v12; // rbx

  v5 = *(unsigned __int16 *)a4;
  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(256LL, v5 + 56, 1883794765, CurrentProcessorColor | 0x80000000);
  v12 = PoolMm;
  if ( PoolMm )
  {
    *(_DWORD *)(PoolMm + 36) = a5;
    *(_DWORD *)(PoolMm + 24) = a1;
    *(_DWORD *)(PoolMm + 28) = a2;
    *(_DWORD *)(PoolMm + 32) = a3;
    *(_WORD *)(PoolMm + 40) = *(_WORD *)a4;
    *(_WORD *)(PoolMm + 42) = *(_WORD *)a4;
    *(_QWORD *)(PoolMm + 48) = PoolMm + 56;
    memmove((void *)(PoolMm + 56), a4[1], *(unsigned __int16 *)a4);
  }
  return v12;
}
