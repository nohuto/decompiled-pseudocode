/*
 * XREFs of PpmGetThroughputInfoCallback @ 0x140254A70
 * Callers:
 *     PoGetPerfStateAndParkingInfo @ 0x1404762E8 (PoGetPerfStateAndParkingInfo.c)
 * Callees:
 *     PpmSnapPerformanceAccumulation @ 0x14025568C (PpmSnapPerformanceAccumulation.c)
 */

__int64 __fastcall PpmGetThroughputInfoCallback(struct _KPRCB *a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  unsigned int v6; // ebx
  char v7; // r9
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r8
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h]
  __int128 v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-18h]

  v11 = 0LL;
  v3 = a3;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  LOBYTE(a3) = a1 != KeGetCurrentPrcb();
  v6 = 0;
  if ( (unsigned __int8)PpmSnapPerformanceAccumulation((int)a1, 0, a3, 0, (__int64)&v11, 0LL) )
  {
    v7 = PpmPerformanceCounterShift;
    if ( a1->PowerState.Hypervisor == ProcHypervisorHvCounters )
      v7 = PpmHvPerformanceCounterShift;
    v8 = *((_QWORD *)&v12 + 1);
    *(_QWORD *)(a2 + 8) = (unsigned __int64)v13 >> v7;
    if ( !v8 || v3 == 100LL )
    {
      v9 = v8;
    }
    else if ( is_mul_ok(v8, v3) )
    {
      v9 = v8 * v3 / 0x64;
    }
    else
    {
      v9 = v3 * (v8 / 0x64) + v3 * (v8 % 0x64) / 0x64;
    }
    *(_QWORD *)(a2 + 16) = *((_QWORD *)&v13 + 1) >> v7;
    *(_DWORD *)a2 = (unsigned __int64)v11 >> v7;
    *(_DWORD *)(a2 + 4) = *((_QWORD *)&v11 + 1) >> v7;
    *(_QWORD *)(a2 + 24) = v9 >> v7;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v6;
}
