/*
 * XREFs of CrmLogStateMonitorStateSet @ 0x180020310
 * Callers:
 *     CrmStateMonitorNetworkUpdateState @ 0x18001F050 (CrmStateMonitorNetworkUpdateState.c)
 *     CrmStateMonitorWNFCallback @ 0x18001F2A0 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorResourceUsagePoll @ 0x18001F4C8 (CrmStateMonitorResourceUsagePoll.c)
 *     CrmStateMonitorCPUUsageTimerCallback @ 0x18001FA50 (CrmStateMonitorCPUUsageTimerCallback.c)
 *     CrmStateMonitorSystemDiskUsageTimerCallback @ 0x18001FD00 (CrmStateMonitorSystemDiskUsageTimerCallback.c)
 *     CrmStateMonitorStateSet @ 0x1800200C0 (CrmStateMonitorStateSet.c)
 *     CrmIsolatedPollingWorkerNpuUsageTimerCallback @ 0x180021120 (CrmIsolatedPollingWorkerNpuUsageTimerCallback.c)
 *     CrmStateMonitorPostResumeUsageCallback @ 0x18005DE60 (CrmStateMonitorPostResumeUsageCallback.c)
 *     CrmStateMonitorSebCallback @ 0x18005E140 (CrmStateMonitorSebCallback.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180020280 (CrmStateMonitorStateSizeGet.c)
 *     CrmLogStateMonitorIsTelemetryState @ 0x180020624 (CrmLogStateMonitorIsTelemetryState.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

int __fastcall CrmLogStateMonitorStateSet(int *a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int16 v4; // ax
  __int64 v5; // rsi
  unsigned __int16 v6; // r14
  SIZE_T v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  void *v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+7Ch] [rbp-84h]
  UUID *v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  unsigned int *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  int *v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  __int64 v29; // [rsp+B0h] [rbp-50h]
  int v30; // [rsp+B8h] [rbp-48h] BYREF
  int v31; // [rsp+BCh] [rbp-44h]
  __int64 *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  int *v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  __int64 v36; // [rsp+E0h] [rbp-20h]
  int v37; // [rsp+E8h] [rbp-18h] BYREF
  int v38; // [rsp+ECh] [rbp-14h]
  __int64 *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  __int64 *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]

  v2 = *a1;
  v4 = CrmStateMonitorStateSizeGet(*a1);
  v5 = v4;
  v6 = v4;
  v7 = RtlCompareMemory((const void *)(a2 + 40), (const void *)a2, v4);
  LODWORD(v10) = CrmLogStateMonitorIsTelemetryState(v2, v7, v8, v9);
  if ( !(_DWORD)v10 || *(_DWORD *)(a2 + 96) || v11 == v5 )
  {
    if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 8) != 0 )
    {
      v10 = qword_1800E1300 & 8;
      if ( v10 == qword_1800E1300 )
      {
        v30 = v6;
        v23 = &Uuid;
        v31 = 0;
        v25 = &v13;
        v37 = v6;
        v27 = &v30;
        v16 = *(_QWORD *)(a2 + 88);
        v32 = &v16;
        v34 = &v37;
        v15 = *(_QWORD *)(a2 + 80);
        v39 = &v15;
        v38 = 0;
        v24 = 16LL;
        v13 = v2;
        v26 = 4LL;
        v28 = 2LL;
        v29 = a2 + 40;
        v33 = 8LL;
        v35 = 2LL;
        v36 = a2;
        v40 = 8LL;
        LODWORD(v10) = tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CC6F7, 0LL, 0LL, 10, &UserData);
      }
    }
  }
  else if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 0x400000000008LL) != 0 )
  {
    LODWORD(v10) = qword_1800E1300 & 8;
    if ( (qword_1800E1300 & 0x400000000008LL) == qword_1800E1300 )
    {
      EventDescriptor.Keyword = 0x400000000008LL;
      v31 = 0;
      v23 = &Uuid;
      v38 = 0;
      v25 = &v14;
      v27 = &v30;
      v17 = *(_QWORD *)(a2 + 88);
      v32 = &v17;
      v34 = &v37;
      v15 = *(_QWORD *)(a2 + 80);
      v39 = &v15;
      v41 = &v16;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_1800E12F0;
      v30 = v6;
      v37 = v6;
      v24 = 16LL;
      v14 = v2;
      v26 = 4LL;
      v28 = 2LL;
      v29 = a2 + 40;
      v33 = 8LL;
      v35 = 2LL;
      v36 = a2;
      v40 = 8LL;
      v16 = 0x2000000LL;
      v42 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_1800E12F0;
      v20 = &unk_1800CC9CE;
      UserData.Reserved = 2;
      v21 = 112;
      v22 = 1;
      LODWORD(v10) = EventWriteTransfer(qword_1800E1308, &EventDescriptor, 0LL, 0LL, 0xBu, &UserData);
    }
  }
  return v10;
}
