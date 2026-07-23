/*
 * XREFs of PspIsSetJobIoAttribution @ 0x140ABF184
 * Callers:
 *     PspSetJobIoAttribution @ 0x140ABEEC8 (PspSetJobIoAttribution.c)
 *     PspValidateJobAssignmentDiskIoAttribution @ 0x140B038A4 (PspValidateJobAssignmentDiskIoAttribution.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1409FFC10 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

char __fastcall PspIsSetJobIoAttribution(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  char v4; // bl

  v3 = a1[163];
  v4 = 0;
  while ( v3 )
  {
    if ( *(_DWORD *)(v3 + 1580) )
      return 1;
    v3 = *(_QWORD *)(v3 + 1304);
  }
  if ( !a3
    && (int)PspEnumJobsAndProcessesInJobHierarchy(a1, (int)PspIsSetJobIoAttributionJobPreCallback, 0, 0, (__int64)a1, 5) < 0 )
  {
    return 1;
  }
  return v4;
}
