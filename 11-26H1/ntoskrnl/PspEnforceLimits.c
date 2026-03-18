/*
 * XREFs of PspEnforceLimits @ 0x14095A0E0
 * Callers:
 *     PspJobTimeLimitsWork @ 0x1407F8D70 (PspJobTimeLimitsWork.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PspGetNextJob @ 0x14095A1E0 (PspGetNextJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14095A350 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspEnforceLimits(char a1)
{
  void *i; // rcx
  __int64 result; // rax
  void *v4; // rbx
  volatile signed __int32 *v5; // rcx
  _DWORD v6[4]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v7[10]; // [rsp+50h] [rbp-68h] BYREF

  memset_0(v7, 0, 0x48uLL);
  _InterlockedIncrement((volatile signed __int32 *)&PspSiloMonitorLock.Timer.Header.WaitListHead);
  if ( !a1 && PspSiloMonitorLock.Affinity )
  {
    v6[0] = 0;
    ZwUpdateWnfStateData((__int64)&WNF_PS_WAKE_CHARGE_RESOURCE_POLICY, (__int64)v6);
    ObfDereferenceObjectWithTag(PspSiloMonitorLock.Affinity, 0x624A7350u);
    PspSiloMonitorLock.Affinity = 0LL;
  }
  for ( i = 0LL; ; i = v4 )
  {
    result = PspGetNextJob(i);
    v4 = (void *)result;
    if ( !result )
      break;
    if ( !*(_QWORD *)(result + 1304) )
    {
      v5 = (volatile signed __int32 *)(result + 1552);
      if ( !a1 || (*v5 & 0x100000) != 0 )
      {
        _InterlockedAnd(v5, 0xFFEFFFFF);
        memset_0(v7, 0, 0x48uLL);
        v7[2] = (__int64)v4;
        PspEnumJobsAndProcessesInJobHierarchy(v4, (__int64)v7, 6);
      }
    }
  }
  return result;
}
