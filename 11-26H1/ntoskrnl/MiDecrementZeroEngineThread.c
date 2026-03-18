/*
 * XREFs of MiDecrementZeroEngineThread @ 0x1403E8DCC
 * Callers:
 *     MiSelectBestZeroingProcessor @ 0x1403E8AC4 (MiSelectBestZeroingProcessor.c)
 *     MiActivateBetterZeroEngine @ 0x1404E7EA4 (MiActivateBetterZeroEngine.c)
 *     MiZeroThreadStopZeroing @ 0x1404F5FB8 (MiZeroThreadStopZeroing.c)
 *     MiRemoveThreadFromEngineLists @ 0x1405093AC (MiRemoveThreadFromEngineLists.c)
 *     MiReduceZeroingThreads @ 0x14051EB08 (MiReduceZeroingThreads.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MiPeriodicZeroingSufficient @ 0x14050A1D4 (MiPeriodicZeroingSufficient.c)
 *     MiUpdateBackgroundZeroingActive @ 0x14051FD0C (MiUpdateBackgroundZeroingActive.c)
 */

__int64 __fastcall MiDecrementZeroEngineThread(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r10
  __int64 v3; // rbx
  __int64 v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rdx

  v1 = *(_DWORD *)(a1 + 128);
  if ( (v1 & 2) != 0 )
    return 0LL;
  if ( (v1 & 0x20) != 0 )
    *(_DWORD *)(a1 + 128) &= ~0x20u;
  *(_DWORD *)(a1 + 128) |= 2u;
  v2 = *(_QWORD *)(a1 + 80);
  v3 = *(_QWORD *)(v2 + 136);
  --*(_DWORD *)(v2 + 12);
  if ( (unsigned __int8)MiUpdateBackgroundZeroingActive(v3) )
    return 0LL;
  v5 = _InterlockedExchange64((volatile __int64 *)(v4 + 152), 0LL);
  v6 = _InterlockedExchange64((volatile __int64 *)(v4 + 160), 0LL);
  *(_QWORD *)(v4 + 144) += v5;
  *(_QWORD *)(v4 + 48) += v6;
  if ( *(_BYTE *)(v3 + 161) )
  {
    if ( (unsigned int)MiPeriodicZeroingSufficient(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 16LL) + 56320LL
                                                                                            * *(unsigned int *)(v3 + 56)) )
      KeSetEvent((PRKEVENT)v3, 0, 0);
  }
  return 1LL;
}
