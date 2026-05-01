/*
 * XREFs of ?RmpMemoryMonitorLogCurrentMetrics@@YAXPEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180004BF0
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x180005000 (-RmpMemoryMonitorCheckMetricsAndRemediateSingleStep@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMOR.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall RmpMemoryMonitorLogCurrentMetrics(struct _RM_SYSTEM_MEMORY_METRICS *a1)
{
  __int64 v1; // [rsp+38h] [rbp-21h] BYREF
  __int64 v2; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+7h] BYREF
  void *v5; // [rsp+70h] [rbp+17h]
  int v6; // [rsp+78h] [rbp+1Fh]
  int v7; // [rsp+7Ch] [rbp+23h]
  __int64 *v8; // [rsp+80h] [rbp+27h]
  __int64 v9; // [rsp+88h] [rbp+2Fh]
  __int64 *v10; // [rsp+90h] [rbp+37h]
  __int64 v11; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_1800E1278 > 5 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
  {
    v1 = *((_QWORD *)a1 + 7);
    v2 = *((_QWORD *)a1 + 2);
    v10 = &v1;
    v8 = &v2;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1800E1280;
    EventDescriptor.Keyword = 1LL;
    v11 = 8LL;
    v9 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E1280;
    v5 = &unk_1800D3A3F;
    v7 = 1;
    UserData.Reserved = 2;
    v6 = 69;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
}
