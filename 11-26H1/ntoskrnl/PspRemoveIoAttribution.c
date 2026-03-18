/*
 * XREFs of PspRemoveIoAttribution @ 0x140AFC3A8
 * Callers:
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 *     PspSetJobIoAttribution @ 0x140958108 (PspSetJobIoAttribution.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14021D5D4 (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x1404636E0 (IoStopDiskIoAttributionForContext.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14095A350 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspRemoveIoAttribution(struct _EX_RUNDOWN_REF **Object)
{
  struct _EX_RUNDOWN_REF **v1; // rdi
  __int64 v4[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  v1 = 0LL;
  if ( *((_DWORD *)Object + 395) )
  {
    IoStopDiskIoAttributionForContext(Object[198]);
    IoDiskIoAttributionDereference((__int64)Object[198]);
    Object[198] = 0LL;
    v1 = Object;
  }
  v5 = 0LL;
  v4[0] = 0LL;
  v4[1] = (__int64)v1;
  return PspEnumJobsAndProcessesInJobHierarchy(
           (__int64 *)Object,
           (int)PspSetJobIoAttributionJobPreCallback,
           0,
           (int)PspSetJobIoAttributionProcessCallback,
           (__int64)v4,
           5);
}
