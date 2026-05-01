/*
 * XREFs of CrmLogStateMonitorRundown @ 0x18001E23C
 * Callers:
 *     CrmGlobalsRundown @ 0x18001DCB4 (CrmGlobalsRundown.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180020280 (CrmStateMonitorStateSizeGet.c)
 *     CrmLogStateMonitorIsTelemetryState @ 0x180020624 (CrmLogStateMonitorIsTelemetryState.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

int __fastcall CrmLogStateMonitorRundown(const void **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  unsigned int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  unsigned int v11; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v12; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v13; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v17[40]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v18[40]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v19; // [rsp+B8h] [rbp-50h]
  __int64 v20; // [rsp+C0h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D8h] [rbp-30h] BYREF
  void *v22; // [rsp+E8h] [rbp-20h]
  int v23; // [rsp+F0h] [rbp-18h]
  int v24; // [rsp+F4h] [rbp-14h]
  UUID *v25; // [rsp+F8h] [rbp-10h]
  __int64 v26; // [rsp+100h] [rbp-8h]
  unsigned int *v27; // [rsp+108h] [rbp+0h]
  __int64 v28; // [rsp+110h] [rbp+8h]
  int *v29; // [rsp+118h] [rbp+10h]
  __int64 v30; // [rsp+120h] [rbp+18h]
  _BYTE *v31; // [rsp+128h] [rbp+20h]
  int v32; // [rsp+130h] [rbp+28h] BYREF
  int v33; // [rsp+134h] [rbp+2Ch]
  __int64 *v34; // [rsp+138h] [rbp+30h]
  __int64 v35; // [rsp+140h] [rbp+38h]
  int *v36; // [rsp+148h] [rbp+40h]
  __int64 v37; // [rsp+150h] [rbp+48h]
  _BYTE *v38; // [rsp+158h] [rbp+50h]
  int v39; // [rsp+160h] [rbp+58h] BYREF
  int v40; // [rsp+164h] [rbp+5Ch]
  __int64 *v41; // [rsp+168h] [rbp+60h]
  __int64 v42; // [rsp+170h] [rbp+68h]
  __int64 *v43; // [rsp+178h] [rbp+70h]
  __int64 v44; // [rsp+180h] [rbp+78h]

  CempLockAcquireExclusive(a1 + 1);
  memset_0(v17, 0, 0x68uLL);
  v2 = CrmStateMonitorStateSizeGet(*(unsigned int *)a1);
  memcpy_0(v18, a1[5], v2);
  memcpy_0(v17, a1[5], v2);
  v20 = (__int64)a1[6];
  v3 = MEMORY[0x7FFE0008];
  a1[6] = (const void *)MEMORY[0x7FFE0008];
  *((_DWORD *)a1 + 4) = 0;
  v19 = v3;
  RtlReleaseSRWLockExclusive(a1 + 1);
  v4 = CrmStateMonitorStateSizeGet(*(unsigned int *)a1);
  LODWORD(v7) = CrmLogStateMonitorIsTelemetryState((unsigned int)v5, v6, v5, v4);
  if ( (_DWORD)v7 )
  {
    if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 0x400000000008LL) != 0 )
    {
      LODWORD(v7) = qword_1800E1300 & 8;
      if ( (qword_1800E1300 & 0x400000000008LL) == qword_1800E1300 )
      {
        v32 = v9;
        v25 = &Uuid;
        v39 = v9;
        v27 = &v12;
        v12 = v8;
        v29 = &v32;
        v30 = 2LL;
        v31 = v18;
        v15 = v20;
        v34 = &v15;
        v36 = &v39;
        v38 = v17;
        v13 = v19;
        v41 = &v13;
        v43 = &v14;
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = (ULONGLONG)off_1800E12F0;
        v37 = 2LL;
        v26 = 16LL;
        v28 = 4LL;
        v33 = 0;
        v35 = 8LL;
        v40 = 0;
        v42 = 8LL;
        v14 = 0x2000000LL;
        v44 = 8LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        EventDescriptor.Keyword = 0x400000000008LL;
        UserData.Size = *(unsigned __int16 *)off_1800E12F0;
        v22 = &unk_1800CC7E6;
        UserData.Reserved = 2;
        v23 = 116;
        v24 = 1;
        v11 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        LODWORD(v7) = EventWriteTransfer(qword_1800E1308, &EventDescriptor, 0LL, 0LL, 0xBu, &UserData);
      }
    }
  }
  else if ( (unsigned int)dword_1800E12E8 > 5 && (qword_1800E12F8 & 8) != 0 )
  {
    v7 = qword_1800E1300 & 8;
    if ( v7 == qword_1800E1300 )
    {
      v25 = &Uuid;
      v11 = v8;
      v27 = &v11;
      v32 = v9;
      v29 = &v32;
      v39 = v9;
      v31 = v18;
      v14 = v20;
      v34 = &v14;
      v36 = &v39;
      v38 = v17;
      v13 = v19;
      v41 = &v13;
      v26 = 16LL;
      v28 = 4LL;
      v30 = 2LL;
      v33 = 0;
      v35 = 8LL;
      v37 = 2LL;
      v40 = 0;
      v42 = 8LL;
      LODWORD(v7) = tlgWriteTransfer_EventWriteTransfer(&dword_1800E12E8, &unk_1800CC8EB, 0LL, 0LL, 10, &UserData);
    }
  }
  return v7;
}
