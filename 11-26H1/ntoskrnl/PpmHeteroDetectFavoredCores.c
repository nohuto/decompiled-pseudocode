/*
 * XREFs of PpmHeteroDetectFavoredCores @ 0x140B0A44C
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 */

char __fastcall PpmHeteroDetectFavoredCores(__int64 a1)
{
  char v2; // si
  __int64 v3; // rdi
  unsigned __int64 i; // rbp
  unsigned __int64 v5; // rdx
  unsigned int v6; // r12d
  __int64 v7; // r15
  __int64 Prcb; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx

  if ( (unsigned __int8)PpmHeteroPerformanceClasses <= (unsigned __int8)PpmMaxCoreClasses )
    return 0;
  v2 = 1;
  LOWORD(v3) = 0;
  *(_DWORD *)(a1 + 4) = 1;
  for ( i = qword_140E0B498[0]; ; i = qword_140E0B498[v3] )
  {
    while ( i )
    {
      _BitScanForward64(&v5, i);
      v6 = 0;
      i &= ~(1LL << v5);
      v7 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v3].Flink
           + (unsigned __int8)v5);
      if ( *(_DWORD *)(a1 + 4) )
      {
        do
        {
          Prcb = KeGetPrcb(v7);
          v9 = v6 + *(_DWORD *)(a1 + 4) * (_DWORD)v7;
          *(_BYTE *)(a1 + 4 * v9 + 49) = *(_BYTE *)(*(_QWORD *)(Prcb + 35264) + 302LL);
          *(_BYTE *)(a1 + 4 * v9 + 48) = PpmMaxCoreClasses - *(_BYTE *)(*(_QWORD *)(a1 + 16) + v7) - 1;
          v10 = v6++;
          *(_WORD *)(*(_QWORD *)(a1 + 24) + 2 * v10) = 257;
        }
        while ( v6 < *(_DWORD *)(a1 + 4) );
      }
    }
    v3 = (unsigned __int16)(v3 + 1);
    if ( (unsigned int)v3 >= LOWORD(PpmPerfStatesRegistered[0]) )
      break;
  }
  return v2;
}
