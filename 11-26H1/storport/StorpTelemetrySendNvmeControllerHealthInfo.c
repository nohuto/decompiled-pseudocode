/*
 * XREFs of StorpTelemetrySendNvmeControllerHealthInfo @ 0x1400C1A44
 * Callers:
 *     StorpNvmeAdapterHealthWorkItemRoutine @ 0x1400B9860 (StorpNvmeAdapterHealthWorkItemRoutine.c)
 * Callees:
 *     McTemplateK0qjzshussssqtxqqbr14uhqbr18_EtwWriteTransfer @ 0x1400B4738 (McTemplateK0qjzshussssqtxqqbr14uhqbr18_EtwWriteTransfer.c)
 *     StorpTelemetryNvmeControllerHealthCriticalInfo @ 0x1400BD7B0 (StorpTelemetryNvmeControllerHealthCriticalInfo.c)
 *     StorpTelemetryNvmeControllerHealthInfo @ 0x1400BDA60 (StorpTelemetryNvmeControllerHealthInfo.c)
 *     NvmeControllerGetCloudSSDLog @ 0x1400CDD20 (NvmeControllerGetCloudSSDLog.c)
 *     NvmeControllerGetHealthInfoLog @ 0x1400CE460 (NvmeControllerGetHealthInfoLog.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetrySendNvmeControllerHealthInfo(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // r12
  unsigned __int16 v4; // r14
  __int16 v5; // si
  __int64 v6; // rbx
  __int64 v7; // r15
  _DWORD *v8; // rax
  int HealthInfoLog; // eax
  __int64 v10; // rax
  int v11; // eax
  int CloudSSDLog; // eax
  __int64 v13; // rax
  char v14; // dl
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int16 v18; // ax
  char v19; // al
  unsigned __int8 v20; // al
  char v21; // al
  unsigned __int8 v22; // al
  char v23; // al
  unsigned __int8 v24; // al
  unsigned __int8 v25; // al
  unsigned __int16 v26; // r15
  __int64 v27; // rbx
  const char *v28; // r10
  __int64 v29; // r11
  __int64 v30; // [rsp+70h] [rbp-D8h]
  __int64 v31; // [rsp+70h] [rbp-D8h]
  int v32; // [rsp+80h] [rbp-C8h]
  char v33; // [rsp+C8h] [rbp-80h]
  char v34; // [rsp+C9h] [rbp-7Fh]
  unsigned __int16 v35; // [rsp+CCh] [rbp-7Ch]
  __int64 v36; // [rsp+E0h] [rbp-68h]
  __int64 v37; // [rsp+E8h] [rbp-60h]
  char v38[13]; // [rsp+F0h] [rbp-58h] BYREF
  int v39; // [rsp+FDh] [rbp-4Bh]
  __int64 v40; // [rsp+108h] [rbp-40h] BYREF
  char v41; // [rsp+110h] [rbp-38h]
  __int128 v42; // [rsp+118h] [rbp-30h] BYREF
  __int128 v43; // [rsp+128h] [rbp-20h]
  __int64 v44; // [rsp+138h] [rbp-10h]
  char v45; // [rsp+140h] [rbp-8h]

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  strcpy(v38, "PCI vendor: ");
  v35 = 0;
  v34 = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v33 = 0;
  v37 = 0LL;
  v36 = 0LL;
  v39 = 0;
  v44 = 0LL;
  v45 = 0;
  v40 = 0LL;
  v41 = 0;
  v42 = 0LL;
  v43 = 0LL;
  if ( !a1 )
    return;
  v8 = *(_DWORD **)(a1 + 1288);
  if ( v8 )
  {
    if ( *v8 )
      return;
  }
  if ( (*(_QWORD *)(a1 + 968) & 1) == 0 || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL) + 68LL) != 1 )
    return;
  if ( (*(_DWORD *)(a1 + 936) & 4) == 0 )
  {
    HealthInfoLog = NvmeControllerGetHealthInfoLog(a1);
    if ( HealthInfoLog < 0 )
    {
      if ( HealthInfoLog == -1073741670 )
        goto LABEL_13;
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 1264);
      if ( v10 )
      {
        v2 = *(_QWORD *)(a1 + 1264);
        v37 = *(_QWORD *)(v10 + 48);
        v36 = *(_QWORD *)(v10 + 56);
        v34 = *(_BYTE *)(a1 + 946);
        v35 = 512;
        *(_BYTE *)(a1 + 946) = *(_BYTE *)v10;
        goto LABEL_13;
      }
    }
    v11 = *(_DWORD *)(a1 + 936);
    if ( (v11 & 1) == 0 )
      *(_DWORD *)(a1 + 936) = v11 | 4;
  }
LABEL_13:
  if ( (*(_DWORD *)(a1 + 936) & 2) != 0 )
    goto LABEL_32;
  CloudSSDLog = NvmeControllerGetCloudSSDLog(a1);
  if ( CloudSSDLog < 0 )
  {
    if ( CloudSSDLog != -1073741670 )
    {
LABEL_30:
      v16 = *(_DWORD *)(a1 + 936);
      v14 = 0;
      if ( (v16 & 1) == 0 )
        *(_DWORD *)(a1 + 936) = v16 | 2;
      goto LABEL_33;
    }
LABEL_32:
    v14 = 0;
    goto LABEL_33;
  }
  v13 = *(_QWORD *)(a1 + 1272);
  if ( !v13 )
    goto LABEL_30;
  v14 = -64;
  v3 = *(_QWORD *)(a1 + 1272);
  v33 = -64;
  if ( *(_BYTE *)(v13 + 509) )
  {
    v15 = *(_QWORD *)(v13 + 496) + 0x5B0D4015D7EF503BLL;
    if ( *(_QWORD *)(v13 + 496) == 0xA4F2BFEA2810AFC5uLL )
      v15 = *(_QWORD *)(v13 + 504) + 0x502AEB368390B064LL;
    if ( !v15 )
    {
      v5 = *(_WORD *)(v13 + 494);
      if ( v5 == 2 || v5 == 3 )
      {
        v4 = 494;
        goto LABEL_27;
      }
    }
LABEL_28:
    v5 = -1;
    v4 = 512;
    goto LABEL_33;
  }
  v5 = *(_WORD *)(v13 + 510);
  if ( !v5 )
  {
    v4 = 55;
LABEL_27:
    v6 = *(_QWORD *)v13;
    v7 = *(_QWORD *)(v13 + 8);
    goto LABEL_33;
  }
  if ( v5 != 1 )
    goto LABEL_28;
  v6 = *(_QWORD *)v13;
  v4 = 88;
  v7 = *(_QWORD *)(v13 + 8);
LABEL_33:
  if ( v2 || v3 )
  {
    v17 = *(_QWORD *)(a1 + 592);
    if ( v17 )
    {
      v18 = *(_WORD *)v17 >> 12;
      if ( (unsigned __int8)v18 > 9u )
        v19 = v18 + 55;
      else
        v19 = v18 + 48;
      v38[12] = v19;
      v20 = *(_BYTE *)(v17 + 1) & 0xF;
      if ( v20 > 9u )
        v21 = v20 + 55;
      else
        v21 = v20 + 48;
      LOBYTE(v39) = v21;
      v22 = (*(_BYTE *)v17 >> 4) & 0xF;
      if ( v22 > 9u )
        v23 = v22 + 55;
      else
        v23 = v22 + 48;
      BYTE1(v39) = v23;
      v24 = *(_BYTE *)v17 & 0xF;
      if ( v24 > 9u )
        v25 = v24 + 55;
      else
        v25 = v24 + 48;
      HIWORD(v39) = v25;
      v42 = *(_OWORD *)(v17 + 24);
      v43 = *(_OWORD *)(v17 + 40);
      v44 = *(_QWORD *)(v17 + 56);
      v40 = *(_QWORD *)(v17 + 64);
    }
    if ( *(_BYTE *)(a1 + 947) && *(_BYTE *)(a1 + 946) == v34 )
    {
      v26 = v35;
    }
    else if ( (g_StorpTraceLoggingCriticalEventEnabledSetByRegistry != 1 || g_StorpTraceLoggingCriticalEventEnabled)
           && g_StorpTraceLoggingAdapterCriticalEventsLogged < (unsigned int)g_StorpTraceLoggingCriticalEventMaximum
           && *(_BYTE *)(a1 + 946) )
    {
      v30 = v7;
      v26 = v35;
      ++g_StorpTraceLoggingAdapterCriticalEventsLogged;
      StorpTelemetryNvmeControllerHealthCriticalInfo(
        a1,
        (__int64)v38,
        (__int64)&v42,
        &v40,
        v2,
        v35,
        v14,
        v5,
        v3,
        v4,
        v37,
        v36,
        v6,
        v30);
    }
    else
    {
      v31 = v7;
      v26 = v35;
      StorpTelemetryNvmeControllerHealthInfo(
        a1,
        (__int64)v38,
        (__int64)&v42,
        &v40,
        v2,
        v35,
        v14,
        v5,
        v3,
        v4,
        v37,
        v36,
        v6,
        v31);
    }
    if ( byte_140173449 < 0 )
    {
      v27 = *(_QWORD *)(a1 + 128);
      v28 = (const char *)&dword_140154ADC;
      v29 = *(_QWORD *)(v27 + 144);
      if ( *(_QWORD *)(a1 + 752) )
        v28 = *(const char **)(a1 + 752);
      McTemplateK0qjzshussssqtxqqbr14uhqbr18_EtwWriteTransfer(
        v26,
        *(unsigned __int8 *)(a1 + 946),
        v27 + 1048,
        *(_DWORD *)(v27 + 56),
        v27 + 1048,
        *(const wchar_t **)(v27 + 1032),
        *(const char **)(a1 + 792),
        *(_WORD *)(a1 + 4),
        *(_BYTE *)(a1 + 744),
        v28,
        v38,
        (const char *)&v42,
        (const char *)&v40,
        (v29 & 1) != 0 ? 20 : 17,
        (v29 & 0x2000) != 0,
        v32,
        *(_BYTE *)(a1 + 946),
        v26,
        v2,
        v33,
        v5,
        v4,
        v3);
    }
    *(_DWORD *)(a1 + 936) |= 1u;
    *(_BYTE *)(a1 + 947) = 0;
  }
}
