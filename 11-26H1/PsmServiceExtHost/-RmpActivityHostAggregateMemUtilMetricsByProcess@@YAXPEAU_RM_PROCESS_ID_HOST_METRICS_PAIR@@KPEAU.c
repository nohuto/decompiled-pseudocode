/*
 * XREFs of ?RmpActivityHostAggregateMemUtilMetricsByProcess@@YAXPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@KPEAU_MEMUTIL_PROCESS_METRICS@@G@Z @ 0x180057F2C
 * Callers:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x180057A7C (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 * Callees:
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall RmpActivityHostAggregateMemUtilMetricsByProcess(
        struct _RM_PROCESS_ID_HOST_METRICS_PAIR *a1,
        unsigned int a2,
        struct _MEMUTIL_PROCESS_METRICS *a3,
        __int16 a4)
{
  __int64 v4; // rdi
  char v5; // bl
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // r14
  int v11; // eax
  int v12; // edx
  __int64 v13; // rbx
  char *v14; // rsi
  __int16 v15; // di
  __int16 v16; // ax
  char v17; // di
  __int16 v18; // ax
  __int16 v19; // ax
  __int16 v20; // ax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int16 v23; // ax
  char v24; // di
  __int16 v25; // ax
  __int16 v26; // ax
  __int16 v27; // ax
  __int16 v29; // [rsp+32h] [rbp-CEh]
  __int16 v30; // [rsp+34h] [rbp-CCh]
  __int16 v31; // [rsp+36h] [rbp-CAh]
  int v32; // [rsp+38h] [rbp-C8h]
  int v33; // [rsp+3Ch] [rbp-C4h] BYREF
  int v34; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v35[3]; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+68h] [rbp-98h] BYREF
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v42[16]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  __int64 v45; // [rsp+B0h] [rbp-50h]
  __int16 v46; // [rsp+CEh] [rbp-32h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D0h] [rbp-30h] BYREF
  void *v48; // [rsp+E0h] [rbp-20h]
  int v49; // [rsp+E8h] [rbp-18h]
  int v50; // [rsp+ECh] [rbp-14h]
  __int64 *v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  _DWORD *v53; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  int *v55; // [rsp+110h] [rbp+10h]
  __int64 v56; // [rsp+118h] [rbp+18h]
  int *v57; // [rsp+120h] [rbp+20h]
  __int64 v58; // [rsp+128h] [rbp+28h]
  __int64 *v59; // [rsp+130h] [rbp+30h]
  __int64 v60; // [rsp+138h] [rbp+38h]
  __int64 *v61; // [rsp+140h] [rbp+40h]
  __int64 v62; // [rsp+148h] [rbp+48h]
  __int64 *v63; // [rsp+150h] [rbp+50h]
  __int64 v64; // [rsp+158h] [rbp+58h]

  v4 = a2;
  v5 = a4;
  memset_0(v42, 0, 0x40uLL);
  v8 = v45;
  v9 = v44;
  v10 = v43;
  v29 = v5 & 4;
  v30 = v5 & 8;
  v11 = (v29 != 0 ? 8 : 0) | 1;
  if ( (v5 & 8) == 0 )
    v11 = (v5 & 4) != 0 ? 8 : 0;
  v12 = v11 | 0x40;
  v31 = v5 & 0x20;
  v13 = 0LL;
  if ( !v31 )
    v12 = v11;
  v32 = v12;
  if ( (_DWORD)v4 )
  {
    v36 = v4;
    v14 = (char *)a3 + 4;
    v15 = v46;
    do
    {
      if ( *(_QWORD *)a1 != v13 )
      {
        if ( v13 )
        {
          v16 = *(_WORD *)(v13 + 62);
          v17 = v15 & 0x2C;
          if ( (v17 & 4) != 0 )
          {
            *(_QWORD *)(v13 + 16) = v10;
            v18 = v16 | 4;
          }
          else
          {
            v18 = v16 & 0xFFFB;
          }
          *(_WORD *)(v13 + 62) = v18;
          if ( (v17 & 8) != 0 )
          {
            *(_QWORD *)(v13 + 24) = v9;
            v19 = v18 | 8;
          }
          else
          {
            v19 = v18 & 0xFFF7;
          }
          *(_WORD *)(v13 + 62) = v19;
          if ( (v17 & 0x20) != 0 )
          {
            *(_QWORD *)(v13 + 32) = v8;
            v20 = v19 | 0x20;
          }
          else
          {
            v20 = v19 & 0xFFDF;
          }
          *(_WORD *)(v13 + 62) = v20 & 0xFFEF;
        }
        memset_0(v42, 0, 0x40uLL);
        v12 = v32;
        v13 = *(_QWORD *)a1;
        v15 = a4;
        v8 = v45;
        v9 = v44;
        v10 = v43;
      }
      if ( (unsigned int)dword_1800E1278 > 5 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
      {
        v37 = *(_QWORD *)(v14 + 44);
        v38 = *(_QWORD *)(v14 + 20);
        v39 = *(_QWORD *)(v14 + 12);
        v33 = *(_DWORD *)v14;
        v35[0] = *((_DWORD *)v14 - 1);
        v21 = *(_QWORD *)(v13 + 48);
        v34 = v12;
        v64 = 8LL;
        v62 = 8LL;
        v22 = *(_QWORD *)(v21 + 32);
        v63 = &v37;
        v61 = &v38;
        v59 = &v39;
        v57 = &v33;
        v55 = &v34;
        v53 = v35;
        v51 = &v40;
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = (ULONGLONG)off_1800E1280;
        v40 = v22;
        v60 = 8LL;
        v58 = 4LL;
        v56 = 4LL;
        v54 = 4LL;
        v52 = 8LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        EventDescriptor.Keyword = 1LL;
        UserData.Size = *(unsigned __int16 *)off_1800E1280;
        v48 = &unk_1800D2123;
        UserData.Reserved = 2;
        v49 = 124;
        v50 = 1;
        v35[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
      }
      if ( v29 )
      {
        if ( (*v14 & 8) != 0 )
        {
          v10 += *(_QWORD *)(v14 + 20);
          v43 = v10;
        }
        else
        {
          v15 &= ~4u;
        }
      }
      if ( v30 )
      {
        if ( (*v14 & 1) != 0 )
        {
          v9 += *(_QWORD *)(v14 + 12);
          v44 = v9;
        }
        else
        {
          v15 &= ~8u;
        }
      }
      if ( v31 )
      {
        if ( (*v14 & 0x40) != 0 )
        {
          v8 += *(_QWORD *)(v14 + 44);
          v45 = v8;
        }
        else
        {
          v15 &= ~0x20u;
        }
      }
      v12 = v32;
      a1 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)((char *)a1 + 16);
      v14 += 64;
      --v36;
    }
    while ( v36 );
  }
  else
  {
    LOBYTE(v15) = v46;
  }
  v23 = *(_WORD *)(v13 + 62);
  v24 = v15 & 0x2C;
  if ( (v24 & 4) != 0 )
  {
    *(_QWORD *)(v13 + 16) = v10;
    v25 = v23 | 4;
  }
  else
  {
    v25 = v23 & 0xFFFB;
  }
  *(_WORD *)(v13 + 62) = v25;
  if ( (v24 & 8) != 0 )
  {
    *(_QWORD *)(v13 + 24) = v9;
    v26 = v25 | 8;
  }
  else
  {
    v26 = v25 & 0xFFF7;
  }
  *(_WORD *)(v13 + 62) = v26;
  if ( (v24 & 0x20) != 0 )
  {
    *(_QWORD *)(v13 + 32) = v8;
    v27 = v26 | 0x20;
  }
  else
  {
    v27 = v26 & 0xFFDF;
  }
  *(_WORD *)(v13 + 62) = v27 & 0xFFEF;
}
