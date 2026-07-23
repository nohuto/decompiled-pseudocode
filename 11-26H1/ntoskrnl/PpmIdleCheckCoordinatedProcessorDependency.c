/*
 * XREFs of PpmIdleCheckCoordinatedProcessorDependency @ 0x1406046D4
 * Callers:
 *     PpmIdleCheckCoordinatedDependencies @ 0x140604244 (PpmIdleCheckCoordinatedDependencies.c)
 * Callees:
 *     PpmTestAndLockProcessor @ 0x140605F08 (PpmTestAndLockProcessor.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedProcessorDependency(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // rdi
  __int64 v8; // r8

  v7 = -1LL;
  v8 = PpmTestAndLockProcessor(a1, a4, a3);
  if ( !v8 )
  {
    if ( *(_BYTE *)(PpmPlatformStates + 8)
      && (unsigned int)(a2 + *(_DWORD *)(352 * (*(unsigned int *)(a1 + 34960) + 3LL) + *(_QWORD *)(a1 + 34880) + 280)) > *(_DWORD *)(a1 + 34952) )
    {
      v8 = 2147483663LL;
    }
    else
    {
      if ( KiClockTimerPerCpuTickScheduling )
        v7 = *(_QWORD *)(a1 + 34944);
      v8 = 0LL;
    }
  }
  *a5 = v7;
  return v8;
}
