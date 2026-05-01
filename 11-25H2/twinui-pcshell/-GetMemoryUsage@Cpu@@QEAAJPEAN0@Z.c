/*
 * XREFs of ?GetMemoryUsage@Cpu@@QEAAJPEAN0@Z @ 0x180356B28
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18034C598 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall Cpu::GetMemoryUsage(Cpu *this, double *a2, double *a3)
{
  NTSTATUS v5; // eax
  unsigned int v6; // r8d
  signed int v7; // eax
  __int64 v8; // rdx
  int v9; // ecx
  double v10; // xmm0_8
  __int64 v11; // rax
  double v12; // xmm0_8
  _OWORD SystemInformation[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v15 = 0LL;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  v5 = NtQuerySystemInformation(SystemLoadGdiDriverInSystemSpaceInformation|0x80, SystemInformation, 0x38u, 0LL);
  if ( v5 )
  {
    v7 = RtlNtStatusToDosError(v5);
    v6 = 0;
    if ( v7 )
    {
      if ( v7 > 0 )
        v6 = (unsigned __int16)v7 | 0x80070000;
      else
        v6 = v7;
    }
  }
  else
  {
    v6 = 0;
  }
  v8 = *(_QWORD *)&SystemInformation[0];
  if ( *(_QWORD *)&SystemInformation[0] )
  {
    v9 = LODWORD(SystemInformation[0]) - DWORD2(SystemInformation[0]);
    if ( (__int64)(*(_QWORD *)&SystemInformation[0] - *((_QWORD *)&SystemInformation[0] + 1)) < 0 )
    {
      v11 = v9 & 1 | ((*(_QWORD *)&SystemInformation[0] - *((_QWORD *)&SystemInformation[0] + 1)) >> 1);
      v10 = (double)(int)v11 + (double)(int)v11;
    }
    else
    {
      v10 = (double)v9;
    }
    *a2 = v10 * 9.313225746154785e-10;
    if ( v8 < 0 )
      v12 = (double)(int)(v8 & 1 | ((unsigned __int64)v8 >> 1)) + (double)(int)(v8 & 1 | ((unsigned __int64)v8 >> 1));
    else
      v12 = (double)(int)v8;
    *a3 = v12 * 9.313225746154785e-10;
  }
  return v6;
}
