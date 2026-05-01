/*
 * XREFs of ?RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_STATS@@@Z @ 0x180005DF0
 * Callers:
 *     ?RmpMemoryMonitorCheckMetricsAndRemediate@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAW4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180004D20 (-RmpMemoryMonitorCheckMetricsAndRemediate@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall RmpMemoryMonitorUpdateMemoryUsageMetrics(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        struct _RM_RESOURCE_USAGE_STATS *a2)
{
  int v3; // r8d
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  __int64 v7; // rax
  __m128i v8; // xmm1
  unsigned __int64 v9; // rax
  __int64 v10; // xmm1_8
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  char v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+31h] [rbp-CFh] BYREF
  char v17; // [rsp+32h] [rbp-CEh] BYREF
  char v18; // [rsp+33h] [rbp-CDh] BYREF
  unsigned int v19; // [rsp+34h] [rbp-CCh]
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v25[24]; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+98h] [rbp-68h]
  int v29; // [rsp+9Ch] [rbp-64h]
  char *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  char *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  char *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  char *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  __int64 *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  __int64 *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  __int64 *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  __int64 *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]

  v3 = 4;
  v4 = *((unsigned __int8 *)a2 + 1);
  if ( v4 == 2 )
  {
    v5 = 2;
    goto LABEL_3;
  }
  if ( !*((_BYTE *)a2 + 1) )
    goto LABEL_23;
  v11 = v4 - 1;
  if ( !v11 )
  {
    v5 = 1;
    goto LABEL_3;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    v5 = 3;
    goto LABEL_3;
  }
  if ( v12 != 1 )
  {
LABEL_23:
    v5 = 0;
    goto LABEL_3;
  }
  v5 = 4;
LABEL_3:
  v6 = *(unsigned __int8 *)a2;
  *(_DWORD *)v25 = v5;
  if ( v6 != 2 )
  {
    if ( v6 )
    {
      v13 = v6 - 1;
      if ( !v13 )
      {
        v3 = 1;
        goto LABEL_5;
      }
      v14 = v13 - 2;
      if ( !v14 )
      {
        v3 = 3;
        goto LABEL_5;
      }
      if ( v14 == 1 )
        goto LABEL_5;
    }
    v3 = 0;
    goto LABEL_5;
  }
  v3 = 2;
LABEL_5:
  v7 = *((_QWORD *)a1 + 12);
  *(_DWORD *)&v25[4] = v3;
  v8 = (__m128i)_mm_and_ps(
                  (__m128)_mm_add_epi64(
                            _mm_load_si128((const __m128i *)&_xmm),
                            _mm_loadu_si128((const __m128i *)((char *)a2 + 8))),
                  (__m128)_xmm_fffffffff8000000fffffffff8000000);
  *(__m128i *)&v25[8] = v8;
  v9 = v7 - *(_QWORD *)v25;
  if ( !v9 )
  {
    v9 = *((_QWORD *)a1 + 13) - v8.m128i_i64[0];
    if ( !v9 )
      v9 = *((_QWORD *)a1 + 14) - _mm_srli_si128(v8, 8).m128i_u64[0];
  }
  if ( v9 )
  {
    RtlPublishWnfStateData(WNF_RM_MEMORY_MONITOR_USAGE_METRICS, 0LL, v25, 24LL, 0LL);
    if ( (unsigned int)dword_1800E1278 > 5 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
    {
      v20 = *(_QWORD *)&v25[16];
      v21 = *((_QWORD *)a1 + 14);
      v22 = *(_QWORD *)&v25[8];
      v23 = *((_QWORD *)a1 + 13);
      v15 = v25[4];
      v16 = *((_BYTE *)a1 + 100);
      v17 = v25[0];
      v18 = *((_BYTE *)a1 + 96);
      v44 = &v20;
      v42 = &v21;
      v40 = &v22;
      v38 = &v23;
      v36 = &v15;
      v34 = &v16;
      v32 = &v17;
      v30 = &v18;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_1800E1280;
      v45 = 8LL;
      v43 = 8LL;
      v41 = 8LL;
      v39 = 8LL;
      v37 = 1LL;
      v35 = 1LL;
      v33 = 1LL;
      v31 = 1LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800E1280;
      v27 = &unk_1800D3FB2;
      UserData.Reserved = 2;
      v28 = 199;
      v29 = 1;
      v19 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
    }
    v10 = *(_QWORD *)&v25[16];
    *((_OWORD *)a1 + 6) = *(_OWORD *)v25;
    *((_QWORD *)a1 + 14) = v10;
  }
}
