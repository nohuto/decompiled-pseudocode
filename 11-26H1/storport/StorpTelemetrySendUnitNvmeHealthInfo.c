/*
 * XREFs of StorpTelemetrySendUnitNvmeHealthInfo @ 0x140046910
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1400467C0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x14005ABAC (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer @ 0x1400B6A14 (McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1400BDD10 (StorpTelemetryNvmeGetLogPage.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1400BDE84 (StorpTelemetryNvmeHealthInfo.c)
 */

void __fastcall StorpTelemetrySendUnitNvmeHealthInfo(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  unsigned __int16 v3; // di
  __int16 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 Pool; // rbx
  int LogPage; // eax
  __int64 v9; // rax
  int v10; // eax
  int v11; // r11d
  __int64 v12; // r10
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edx
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // cl
  void *v23; // rbx
  __int64 v24; // r10
  void *v25; // rdx
  void *v26; // rdx
  _BYTE *v27; // r12
  _BYTE *v28; // rdx
  __int64 v29; // rax
  const int *v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  const int *v33; // rsi
  __int64 v34; // [rsp+C0h] [rbp-80h]
  __int64 v35; // [rsp+C8h] [rbp-78h]
  __int64 v36; // [rsp+D0h] [rbp-70h]
  _WORD *v37; // [rsp+E0h] [rbp-60h]
  PVOID P; // [rsp+E8h] [rbp-58h]
  char v40; // [rsp+158h] [rbp+18h]
  char v41; // [rsp+160h] [rbp+20h]
  unsigned __int16 v42; // [rsp+168h] [rbp+28h]

  v1 = a1;
  v34 = 0LL;
  v2 = 0LL;
  v42 = 0;
  v3 = 0;
  v4 = 0;
  v41 = 0;
  v5 = 0LL;
  v37 = 0LL;
  v6 = 0LL;
  v40 = 0;
  v36 = 0LL;
  v35 = 0LL;
  Pool = RaidAllocatePool(256LL, 560LL, 1700028754LL, *(_QWORD *)(a1 + 8));
  P = (PVOID)Pool;
  if ( Pool && (int)StorpTelemetryNvmeGetLogPage(*(PDEVICE_OBJECT *)(v1 + 8), 0x230u) >= 0 )
  {
    v42 = 216;
    v34 = Pool + *(unsigned int *)(Pool + 24) + 8LL;
    v36 = *(_QWORD *)(v34 + 48);
    v35 = *(_QWORD *)(v34 + 56);
    v41 = *(_BYTE *)(v1 + 2124);
    *(_BYTE *)(v1 + 2124) = *(_BYTE *)v34;
  }
  if ( (*(_DWORD *)(v1 + 2120) & 8) == 0 )
  {
    v37 = (_WORD *)RaidAllocatePool(256LL, 560LL, 1700028754LL, *(_QWORD *)(v1 + 8));
    if ( v37 )
    {
      LogPage = StorpTelemetryNvmeGetLogPage(*(PDEVICE_OBJECT *)(v1 + 8), 0x230u);
      if ( LogPage >= 0 )
      {
        v40 = -64;
        v2 = (__int64)v37 + *((unsigned int *)v37 + 6) + 8;
        if ( *(_BYTE *)(v2 + 509) )
        {
          v9 = *(_QWORD *)(v2 + 496) + 0x5B0D4015D7EF503BLL;
          if ( *(_QWORD *)(v2 + 496) == 0xA4F2BFEA2810AFC5uLL )
            v9 = *(_QWORD *)(v2 + 504) + 0x502AEB368390B064LL;
          if ( !v9 )
          {
            v4 = *(_WORD *)(v2 + 494);
            if ( v4 == 2 || v4 == 3 )
            {
              v3 = 494;
              goto LABEL_18;
            }
          }
        }
        else
        {
          v4 = *(_WORD *)(v2 + 510);
          if ( !v4 )
          {
            v3 = 55;
LABEL_18:
            v5 = *(_QWORD *)v2;
            v6 = *(_QWORD *)(v2 + 8);
            goto LABEL_23;
          }
          if ( v4 == 1 )
          {
            v3 = 88;
            goto LABEL_18;
          }
        }
        v3 = v37[14];
        v4 = -1;
        goto LABEL_23;
      }
      if ( LogPage != -1073741670 )
      {
        v10 = *(_DWORD *)(v1 + 2120);
        if ( (v10 & 1) == 0 )
          *(_DWORD *)(v1 + 2120) = v10 | 8;
      }
    }
  }
LABEL_23:
  v11 = v34;
  if ( v34 || v2 )
  {
    v12 = *(_QWORD *)(v1 + 2416);
    v13 = 0LL;
    v14 = 0LL;
    if ( v12 )
    {
      v15 = 0;
      if ( g_RaidNumberProcessors )
      {
        do
        {
          v16 = v15++;
          v17 = dword_1401730D0 * v16;
          v13 += *(_QWORD *)(v17 + v12 + 16);
          v14 += *(_QWORD *)(v17 + v12 + 24);
        }
        while ( v15 < g_RaidNumberProcessors );
        v1 = a1;
      }
      v11 = v34;
    }
    v18 = *(_QWORD *)(v1 + 3336);
    v19 = *(_QWORD *)(v1 + 3344);
    *(_QWORD *)(v1 + 3336) = v13;
    v20 = v13 - v18;
    *(_QWORD *)(v1 + 3344) = v14;
    v21 = v14 - v19;
    if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
      || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      v22 = 0;
    }
    else
    {
      if ( (*(_DWORD *)(v1 + 2120) & 0x20) != 0 )
        g_StorpTraceLoggingCriticalEventEnabled = -1;
      if ( *(_BYTE *)(v1 + 2124) )
        g_StorpTraceLoggingCriticalEventEnabled = -1;
      if ( (*(_BYTE *)(v1 + 506) & 2) != 0 )
        g_StorpTraceLoggingCriticalEventEnabled = -1;
      v22 = g_StorpTraceLoggingCriticalEventEnabled != 0;
    }
    v23 = &unk_140153274;
    v24 = *(_QWORD *)(*(_QWORD *)(v1 + 24) + 5144LL);
    if ( v22 )
    {
      ++g_StorpTraceLoggingCriticalEventsLogged;
      v25 = &unk_140153274;
      if ( v24 )
        LODWORD(v25) = v24;
      StorpTelemetryNvmeHealthCriticalInfo(v1, (_DWORD)v25, v11, v42, v40, v4, v2, v3, v20, v21, v36, v35, v5, v6);
    }
    else
    {
      v26 = &unk_140153274;
      if ( v24 )
        LODWORD(v26) = *(_QWORD *)(*(_QWORD *)(v1 + 24) + 5144LL);
      StorpTelemetryNvmeHealthInfo(v1, (_DWORD)v26, v11, v42, v40, v4, v2, v3, v20, v21, v36, v35, v5, v6);
    }
    v27 = (_BYTE *)(v1 + 2125);
    if ( *(_BYTE *)(v1 + 2125) )
    {
      if ( *(_BYTE *)(v1 + 2124) == v41 )
        goto LABEL_64;
      v28 = (_BYTE *)(v1 + 2125);
    }
    else
    {
      v28 = (_BYTE *)(v1 + 2125);
    }
    v29 = *(_QWORD *)(v1 + 160);
    if ( v29 )
    {
      v30 = (const int *)(v29 + 90);
      v27 = v28;
    }
    else
    {
      v31 = *(_QWORD *)(v1 + 152);
      if ( !v31
        || (v27 = v28,
            v30 = (const int *)(v31 + 41),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 24) + 608LL) + 184LL) & 0x40) == 0) )
      {
        v30 = 0LL;
      }
    }
    if ( (byte_140173444 & 0x40) != 0 )
    {
      v32 = *(_QWORD *)(v1 + 24);
      v33 = &dword_140154ADC;
      if ( v30 )
        v33 = v30;
      if ( *(_QWORD *)(v32 + 5144) )
        v23 = *(void **)(v32 + 5144);
      McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer(
        v42,
        *(unsigned __int8 *)(v1 + 2124),
        *(_BYTE *)(v1 + 506) & 1,
        *(_DWORD *)(v32 + 56),
        *(_BYTE *)(v1 + 104),
        *(_BYTE *)(v1 + 105),
        *(_BYTE *)(v1 + 106),
        v1 + 2104,
        v32 + 5128,
        *(_QWORD *)(v32 + 4784),
        v1 + 168,
        v1 + 177,
        (__int64)v23,
        (__int64)v33,
        *(_BYTE *)(v1 + 506) & 1,
        g_SystemUptime_s,
        *(_BYTE *)(v1 + 2124),
        v42,
        v34,
        v40,
        v4,
        v3,
        v2);
    }
    *v27 = 0;
  }
LABEL_64:
  if ( P )
    ExFreePoolWithTag(P, 0x65546152u);
  if ( v37 )
    ExFreePoolWithTag(v37, 0x65546152u);
}
