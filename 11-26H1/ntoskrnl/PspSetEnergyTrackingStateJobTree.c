/*
 * XREFs of PspSetEnergyTrackingStateJobTree @ 0x140AEEFE0
 * Callers:
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireFastResourceExclusive @ 0x140274BD0 (ExAcquireFastResourceExclusive.c)
 *     ExReleaseFastResourceExclusive @ 0x14048AE40 (ExReleaseFastResourceExclusive.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1409FFC10 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspIsContextAdmin @ 0x140AEF084 (PspIsContextAdmin.c)
 */

__int64 __fastcall PspSetEnergyTrackingStateJobTree(char *Object, _DWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r9

  if ( (*a2 & 0xFFFFFFF3) != 0 )
    return 3221225485LL;
  v4 = (unsigned int)~*a2;
  if ( ((unsigned int)v4 & a2[1]) != 0 )
    return 3221225485LL;
  if ( !(unsigned __int8)PspIsContextAdmin(Object, a2, v4) )
    return 3221225506LL;
  ExAcquireFastResourceExclusive((struct _KTHREAD *)(Object + 56), 0LL, 1);
  *((_QWORD *)Object + 226) = *(_QWORD *)a2;
  PspEnumJobsAndProcessesInJobHierarchy(
    (__int64 *)Object,
    (int)PspSetJobEnergyTrackingStateCallback,
    0,
    (int)PspSetProcessEnergyTrackingStateCallback,
    (__int64)a2,
    5);
  ExReleaseFastResourceExclusive((ULONG_PTR)(Object + 56), 0LL, v5, v6);
  return 0LL;
}
