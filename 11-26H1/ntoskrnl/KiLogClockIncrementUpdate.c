/*
 * XREFs of KiLogClockIncrementUpdate @ 0x14021EFB8
 * Callers:
 *     KiRestoreClockTickRate @ 0x14040CECC (KiRestoreClockTickRate.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405EFFA4 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 */

char __fastcall KiLogClockIncrementUpdate(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 v6; // rbx
  char result; // al

  v6 = 32LL * *(unsigned int *)(a1 + 38480);
  *(_DWORD *)(a1 + 38480) = ((unsigned __int8)*(_DWORD *)(a1 + 38480) + 1) & 0xF;
  *(_DWORD *)(v6 + a1 + 39128) = a4;
  *(_DWORD *)(v6 + a1 + 39132) = a3;
  *(_QWORD *)(v6 + a1 + 39136) = a2;
  *(LARGE_INTEGER *)(v6 + a1 + 39144) = KeQueryPerformanceCounter(0LL);
  result = a5;
  *(_BYTE *)(v6 + a1 + 39152) = a5;
  return result;
}
