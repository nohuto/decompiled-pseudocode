/*
 * XREFs of PspDoesJobHierarchyPermitUILimits @ 0x140B79198
 * Callers:
 *     PspSetUILimitJobObject @ 0x1407F9E58 (PspSetUILimitJobObject.c)
 *     PspValidateJobAssignmentUILimits @ 0x140B79240 (PspValidateJobAssignmentUILimits.c)
 * Callees:
 *     Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline @ 0x140615764 (Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline.c)
 *     PspDoesJobHierarchyPermitUILimits_Old @ 0x1407F7C08 (PspDoesJobHierarchyPermitUILimits_Old.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14095A350 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

bool __fastcall PspDoesJobHierarchyPermitUILimits(__int64 *a1, char a2)
{
  char v4; // bl
  __int64 i; // rcx

  v4 = 0;
  if ( !(unsigned int)Feature_SysSetJobUILimits__private_IsEnabledDeviceUsageNoInline() )
    return PspDoesJobHierarchyPermitUILimits_Old(a1, a2);
  for ( i = a1[163]; ; i = *(_QWORD *)(i + 1304) )
  {
    if ( !i )
      return (a2 & 1) != 0
          || (int)PspEnumJobsAndProcessesInJobHierarchy(
                    a1,
                    (int)PspDoesJobHierarchyPermitUILimitsCallback,
                    0,
                    0,
                    (__int64)a1,
                    1) >= 0;
    if ( (*(_DWORD *)(i + 1552) & 0x10) != 0 )
      break;
  }
  if ( (a2 & 2) != 0 && (*(_DWORD *)(i + 1556) & 0x10) != 0 )
    return (a2 & 1) != 0
        || (int)PspEnumJobsAndProcessesInJobHierarchy(
                  a1,
                  (int)PspDoesJobHierarchyPermitUILimitsCallback,
                  0,
                  0,
                  (__int64)a1,
                  1) >= 0;
  return v4;
}
