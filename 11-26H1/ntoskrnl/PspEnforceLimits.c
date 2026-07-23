/*
 * XREFs of PspEnforceLimits @ 0x1409FF9A0
 * Callers:
 *     PspJobTimeLimitsWork @ 0x1407FE870 (PspJobTimeLimitsWork.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspGetNextJob @ 0x1409FFAA0 (PspGetNextJob.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1409FFC10 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspEnforceLimits(char a1)
{
  void *i; // rcx
  __int64 result; // rax
  void *v4; // rbx
  volatile signed __int32 *v5; // rcx
  _DWORD Buffer[4]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v7[10]; // [rsp+50h] [rbp-68h] BYREF

  memset_0(v7, 0, 0x48uLL);
  _InterlockedIncrement((volatile signed __int32 *)&PspSiloMonitorLock.Timer.Header.WaitListHead);
  if ( !a1 && PspSiloMonitorLock.AffinityVersion )
  {
    Buffer[0] = 0;
    ZwUpdateWnfStateData(&WNF_PS_WAKE_CHARGE_RESOURCE_POLICY, Buffer, 4u, 0LL, 0LL, 0, 0);
    ObfDereferenceObjectWithTag((PVOID)PspSiloMonitorLock.AffinityVersion, 0x624A7350u);
    PspSiloMonitorLock.AffinityVersion = 0LL;
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
