/*
 * XREFs of PpmParkFindOverUtilizedProcessors @ 0x14049D2C0
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x14025D070 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PpmParkFindOverUtilizedProcessors(__int64 a1, unsigned int a2, unsigned __int16 *a3)
{
  __int64 result; // rax
  unsigned __int16 v7; // bx
  unsigned __int64 i; // rdi
  unsigned __int64 v9; // rdx
  unsigned int v10; // ebp

  result = (__int64)memset_0(a3 + 4, 0, 8LL * *a3);
  *a3 = 1;
  v7 = 0;
  for ( i = *(_QWORD *)(a1 + 24); ; i = *(_QWORD *)(a1 + 8LL * v7 + 24) )
  {
    while ( i )
    {
      _BitScanForward64(&v9, i);
      i &= ~(1LL << v9);
      v10 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v7].Flink
            + (unsigned __int8)v9);
      result = KeGetPrcb(v10);
      if ( *(_DWORD *)(result + 35308) >= a2 )
        result = KeAddProcessorAffinityEx(a3, v10);
    }
    if ( ++v7 >= *(_WORD *)(a1 + 16) )
      break;
    result = v7;
  }
  return result;
}
