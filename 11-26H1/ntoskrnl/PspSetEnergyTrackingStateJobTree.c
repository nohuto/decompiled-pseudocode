/*
 * XREFs of PspSetEnergyTrackingStateJobTree @ 0x14095859C
 * Callers:
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireFastResourceExclusive @ 0x140275660 (ExAcquireFastResourceExclusive.c)
 *     ExReleaseFastResourceExclusive @ 0x1404912F0 (ExReleaseFastResourceExclusive.c)
 *     PspIsContextAdmin @ 0x140958640 (PspIsContextAdmin.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14095A350 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspSetEnergyTrackingStateJobTree(char *Object, _DWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9

  if ( (*a2 & 0xFFFFFFF3) != 0 || (~*a2 & a2[1]) != 0 )
    return 3221225485LL;
  if ( !(unsigned __int8)PspIsContextAdmin() )
    return 3221225506LL;
  ExAcquireFastResourceExclusive((struct _KTHREAD *)(Object + 56), 0LL, 1);
  *((_QWORD *)Object + 226) = *(_QWORD *)a2;
  PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)a2, 5);
  ExReleaseFastResourceExclusive((ULONG_PTR)(Object + 56), 0LL, v4, v5);
  return 0LL;
}
