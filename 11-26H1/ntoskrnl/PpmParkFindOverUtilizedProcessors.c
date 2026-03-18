/*
 * XREFs of PpmParkFindOverUtilizedProcessors @ 0x1404A37B0
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x14025C720 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140246720 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
      v10 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock + 64 * v7 + (unsigned __int8)v9);
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
