/*
 * XREFs of ?RmpSystemQueryCompressionProcessPrivateWorkingSet@@YAJPEA_K@Z @ 0x180004A5C
 * Callers:
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x1800047BC (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RmpSystemQueryCompressionProcessPrivateWorkingSet(unsigned __int64 *a1)
{
  NTSTATUS result; // eax
  _DWORD SystemInformation[2]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD *v4; // [rsp+28h] [rbp-48h]
  __int64 v5; // [rsp+30h] [rbp-40h]
  _OWORD v6[3]; // [rsp+38h] [rbp-38h] BYREF

  v5 = 48LL;
  SystemInformation[0] = 1;
  SystemInformation[1] = 22;
  memset(v6, 0, sizeof(v6));
  LODWORD(v6[0]) = 4;
  v4 = v6;
  result = NtQuerySystemInformation(
             SystemVerifierFaultsInformation|SystemLocksInformation,
             SystemInformation,
             0x18u,
             0LL);
  if ( result >= 0 )
  {
    *a1 = *((_QWORD *)&v6[0] + 1);
    return 0;
  }
  return result;
}
