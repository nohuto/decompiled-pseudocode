/*
 * XREFs of PspDoesJobHierarchyPermitUILimits @ 0x140B811F8
 * Callers:
 *     PspSetUILimitJobObject @ 0x1407FF958 (PspSetUILimitJobObject.c)
 *     PspValidateJobAssignmentUILimits @ 0x140B81270 (PspValidateJobAssignmentUILimits.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1409FFC10 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

bool __fastcall PspDoesJobHierarchyPermitUILimits(__int64 *a1, char a2)
{
  __int64 v2; // r8
  char v3; // bl

  v2 = a1[163];
  v3 = 0;
  while ( 1 )
  {
    if ( !v2 )
      return (a2 & 1) != 0
          || (int)PspEnumJobsAndProcessesInJobHierarchy(
                    a1,
                    (int)PspDoesJobHierarchyPermitUILimitsCallback,
                    0,
                    0,
                    (__int64)a1,
                    1) >= 0;
    if ( (*(_DWORD *)(v2 + 1552) & 0x10) != 0 )
      break;
    v2 = *(_QWORD *)(v2 + 1304);
  }
  if ( (a2 & 2) != 0 && (*(_DWORD *)(v2 + 1556) & 0x10) != 0 )
    return (a2 & 1) != 0
        || (int)PspEnumJobsAndProcessesInJobHierarchy(
                  a1,
                  (int)PspDoesJobHierarchyPermitUILimitsCallback,
                  0,
                  0,
                  (__int64)a1,
                  1) >= 0;
  return v3;
}
