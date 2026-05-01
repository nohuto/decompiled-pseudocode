/*
 * XREFs of ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180004230
 * Callers:
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180003B84 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180003E90 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x1800047BC (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@_K@Z @ 0x180006178 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DAT.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x1800065D0 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008A39C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18008A7F0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpMemoryMonitorWaitForEvents(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        char a2,
        DWORD a3,
        enum _RM_MEMORY_MONITOR_EVENT *a4)
{
  void *v7; // rcx
  DWORD v8; // edi
  _DWORD *v10; // r14
  void *v11; // rax
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v16; // rcx
  void *v17; // rax
  __int64 v18; // rcx
  void *v19; // rax
  __int64 v20; // rcx
  DWORD v21; // eax
  unsigned int v22; // ebx
  int v23; // ecx
  DWORD v25; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v26[3]; // [rsp+34h] [rbp-CCh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v28; // [rsp+50h] [rbp-B0h]
  __int16 v29; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v30[8]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+98h] [rbp-68h]
  int v34; // [rsp+9Ch] [rbp-64h]
  DWORD *v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  _DWORD *v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  DWORD *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  HANDLE Handles[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v42; // [rsp+E0h] [rbp-20h]
  __int128 v43; // [rsp+F0h] [rbp-10h]

  v7 = (void *)*((_QWORD *)a1 + 1);
  *(_OWORD *)Handles = 0LL;
  v8 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v10 = (_DWORD *)((char *)a1 + 92);
  if ( WaitForSingleObjectEx(v7, 0, 0) )
    *v10 &= ~1u;
  if ( (a2 & 1) != 0 && (*(_BYTE *)v10 & 1) == 0 )
  {
    v8 = 1;
    Handles[0] = *((HANDLE *)a1 + 1);
    v30[0] = 0;
  }
  if ( (a2 & 2) != 0 )
  {
    v11 = (void *)*((_QWORD *)a1 + 2);
    v12 = v8++;
    v30[v12] = 1;
    Handles[v12] = v11;
  }
  if ( (a2 & 4) != 0 )
  {
    v13 = (void *)*((_QWORD *)a1 + 3);
    v14 = v8++;
    v30[v14] = 2;
    Handles[v14] = v13;
  }
  if ( (a2 & 8) != 0 )
  {
    v15 = (void *)*((_QWORD *)a1 + 4);
    v16 = v8++;
    v30[v16] = 3;
    Handles[v16] = v15;
  }
  if ( (a2 & 0x10) != 0 )
  {
    v17 = (void *)*((_QWORD *)a1 + 5);
    v18 = v8++;
    v30[v18] = 4;
    Handles[v18] = v17;
  }
  if ( (a2 & 0x20) != 0 )
  {
    v19 = (void *)*((_QWORD *)a1 + 6);
    v20 = v8++;
    v30[v20] = 5;
    Handles[v20] = v19;
  }
  if ( (unsigned int)dword_1800E1278 > 5 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
  {
    v25 = a3;
    v28 = v30;
    v39 = &v25;
    v29 = v8;
    v38 = 4 * (unsigned int)(unsigned __int16)v8;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = (ULONGLONG)off_1800E1280;
    v35 = (DWORD *)&v29;
    v37 = v30;
    v40 = 4LL;
    v36 = 2LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800E1280;
    v32 = &unk_1800D3973;
    UserData.Reserved = 2;
    v33 = 51;
    v34 = 1;
    v26[0] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  v21 = WaitForMultipleObjectsEx(v8, Handles, 0, a3, 0);
  if ( v21 >= 0x40 )
  {
    v22 = 258;
    if ( v21 != 258 )
    {
      v22 = 0;
      *(_DWORD *)a4 = v30[0];
    }
  }
  else
  {
    v22 = 0;
    v23 = v30[v21];
    *(_DWORD *)a4 = v23;
    if ( !v23 )
      *v10 |= 1u;
  }
  if ( (unsigned int)dword_1800E1278 > 5 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
  {
    v26[0] = *(_DWORD *)a4;
    v25 = v22;
    v37 = v26;
    v38 = 4LL;
    v35 = &v25;
    *(_DWORD *)&EventDescriptor.Level = 517;
    UserData.Ptr = (ULONGLONG)off_1800E1280;
    v36 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800E1280;
    v32 = &unk_1800D3C3E;
    UserData.Reserved = 2;
    v33 = 57;
    v34 = 1;
    v26[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return v22;
}
