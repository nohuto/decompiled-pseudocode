/*
 * XREFs of PspIsSetJobIoAttribution @ 0x1409583C4
 * Callers:
 *     PspSetJobIoAttribution @ 0x140958108 (PspSetJobIoAttribution.c)
 *     PspValidateJobAssignmentDiskIoAttribution @ 0x140B01B74 (PspValidateJobAssignmentDiskIoAttribution.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14095A350 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

char __fastcall PspIsSetJobIoAttribution(_QWORD *a1, __int64 a2, char a3)
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
  if ( !a3 && (int)PspEnumJobsAndProcessesInJobHierarchy(a1, (__int64)a1, 5) < 0 )
    return 1;
  return v4;
}
