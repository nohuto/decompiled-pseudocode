/*
 * XREFs of StorpTelemetrySendAdapterNvmeHealthInfo @ 0x1400C071C
 * Callers:
 *     StorpAdapterHealthWorkItemRoutine @ 0x1400B7090 (StorpAdapterHealthWorkItemRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer @ 0x1400B6A14 (McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer.c)
 *     StorpTelemetryAdapterNvmeHealthCriticalInfo @ 0x1400B9DC8 (StorpTelemetryAdapterNvmeHealthCriticalInfo.c)
 *     StorpTelemetryAdapterNvmeHealthInfo @ 0x1400BA040 (StorpTelemetryAdapterNvmeHealthInfo.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1400BDD10 (StorpTelemetryNvmeGetLogPage.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetrySendAdapterNvmeHealthInfo(__int64 a1)
{
  int *v2; // r13
  __int64 v3; // rdi
  int v4; // eax
  unsigned __int16 v5; // r12
  __int16 v6; // si
  __int64 v7; // r14
  __int64 v8; // r15
  int *Pool; // rax
  NTSTATUS LogPage; // eax
  int v11; // eax
  __int64 v12; // r9
  int *v13; // rax
  NTSTATUS v14; // eax
  char v15; // dl
  __int64 v16; // rax
  int v17; // eax
  unsigned __int16 v18; // r14
  __int64 v19; // rcx
  __int16 v20; // ax
  char v21; // al
  unsigned __int8 v22; // al
  char v23; // al
  unsigned __int8 v24; // al
  char v25; // al
  unsigned __int8 v26; // al
  unsigned __int8 v27; // al
  _WORD *v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  unsigned __int8 *v31; // rcx
  __int16 v32; // ax
  __int64 v33; // [rsp+50h] [rbp-F8h]
  __int64 v34; // [rsp+50h] [rbp-F8h]
  char v35; // [rsp+C8h] [rbp-80h]
  char v36; // [rsp+C9h] [rbp-7Fh]
  unsigned __int16 v37; // [rsp+CCh] [rbp-7Ch]
  __int64 v38; // [rsp+D0h] [rbp-78h]
  __int64 v39; // [rsp+D8h] [rbp-70h]
  unsigned int *P; // [rsp+E0h] [rbp-68h]
  __int128 v41; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v42; // [rsp+F8h] [rbp-50h] BYREF
  char v43; // [rsp+100h] [rbp-48h]
  char v44[13]; // [rsp+108h] [rbp-40h] BYREF
  int v45; // [rsp+115h] [rbp-33h]
  __int128 v46; // [rsp+120h] [rbp-28h] BYREF
  __int128 v47; // [rsp+130h] [rbp-18h]
  __int64 v48; // [rsp+140h] [rbp-8h]
  char v49; // [rsp+148h] [rbp+0h]
  _OWORD v50[2]; // [rsp+150h] [rbp+8h] BYREF
  __int64 v51; // [rsp+170h] [rbp+28h]
  __int16 v52; // [rsp+178h] [rbp+30h]

  *(_QWORD *)&v41 = 0xA4F2BFEA2810AFC5uLL;
  P = 0LL;
  v2 = 0LL;
  v39 = 0LL;
  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 5408);
  v5 = 0;
  v37 = 0;
  v6 = 0;
  v36 = 0;
  v7 = 0LL;
  *((_QWORD *)&v41 + 1) = 0xAFD514C97C6F4F9CuLL;
  v8 = 0LL;
  v35 = 0;
  v42 = 0LL;
  v38 = 0LL;
  if ( (v4 & 8) == 0 )
  {
    Pool = (int *)RaidAllocatePool(256LL, 560LL, 1700028754LL, *(_QWORD *)(a1 + 8));
    P = (unsigned int *)Pool;
    if ( Pool )
    {
      LogPage = StorpTelemetryNvmeGetLogPage(*(PDEVICE_OBJECT *)(a1 + 8), 2, 0x200u, Pool, 0x230u);
      if ( LogPage < 0 )
      {
        if ( LogPage != -1073741670 )
        {
          v11 = *(_DWORD *)(a1 + 5408);
          if ( (v11 & 2) == 0 )
            *(_DWORD *)(a1 + 5408) = v11 | 8;
        }
      }
      else
      {
        v37 = 216;
        v39 = (__int64)P + P[6] + 8;
        v42 = *(_QWORD *)(v39 + 48);
        v38 = *(_QWORD *)(v39 + 56);
        v36 = *(_BYTE *)(a1 + 5380);
        *(_BYTE *)(a1 + 5380) = *(_BYTE *)v39;
      }
    }
  }
  v12 = 1LL;
  if ( (*(_DWORD *)(a1 + 5408) & 4) != 0 )
  {
    v15 = 0;
    goto LABEL_32;
  }
  v13 = (int *)RaidAllocatePool(256LL, 560LL, 1700028754LL, *(_QWORD *)(a1 + 8));
  v2 = v13;
  if ( !v13 )
  {
LABEL_30:
    v15 = 0;
    goto LABEL_31;
  }
  v14 = StorpTelemetryNvmeGetLogPage(*(PDEVICE_OBJECT *)(a1 + 8), 192, 0x200u, v13, 0x230u);
  if ( v14 < 0 )
  {
    if ( v14 != -1073741670 )
    {
      v17 = *(_DWORD *)(a1 + 5408);
      v15 = 0;
      if ( (v17 & 2) == 0 )
        *(_DWORD *)(a1 + 5408) = v17 | 4;
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  v15 = -64;
  v35 = -64;
  v3 = (__int64)v2 + (unsigned int)v2[6] + 8;
  if ( *(_BYTE *)(v3 + 509) )
  {
    v16 = *(_QWORD *)(v3 + 496) - v41;
    if ( !v16 )
      v16 = *(_QWORD *)(v3 + 504) - *((_QWORD *)&v41 + 1);
    if ( v16 )
    {
      v12 = 1LL;
      goto LABEL_25;
    }
    v6 = *(_WORD *)(v3 + 494);
    if ( v6 != 2 )
    {
      v12 = 1LL;
      if ( v6 == 3 )
      {
        v5 = 494;
        goto LABEL_14;
      }
      goto LABEL_25;
    }
    v7 = *(_QWORD *)v3;
    v5 = 494;
    v8 = *(_QWORD *)(v3 + 8);
LABEL_31:
    v12 = 1LL;
    goto LABEL_32;
  }
  v6 = *(_WORD *)(v3 + 510);
  v12 = 1LL;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v5 = 88;
      goto LABEL_14;
    }
LABEL_25:
    v5 = *((_WORD *)v2 + 14);
    v6 = -1;
    goto LABEL_32;
  }
  v5 = 55;
LABEL_14:
  v7 = *(_QWORD *)v3;
  v8 = *(_QWORD *)(v3 + 8);
LABEL_32:
  if ( v39 || v3 )
  {
    if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
      || g_StorpTraceLoggingAdapterCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      goto LABEL_41;
    }
    if ( *(_BYTE *)(a1 + 5380) )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( g_StorpTraceLoggingCriticalEventEnabled )
    {
      v33 = v7;
      LOBYTE(v12) = v15;
      v18 = v37;
      ++g_StorpTraceLoggingAdapterCriticalEventsLogged;
      StorpTelemetryAdapterNvmeHealthCriticalInfo(a1, v39, v37, v12, v6, v3, v5, v42, v38, v33, v8);
    }
    else
    {
LABEL_41:
      LOBYTE(v12) = v15;
      v34 = v7;
      v18 = v37;
      StorpTelemetryAdapterNvmeHealthInfo(a1, v39, v37, v12, v6, v3, v5, v42, v38, v34, v8);
    }
    if ( !*(_BYTE *)(a1 + 5381) || *(_BYTE *)(a1 + 5380) != v36 )
    {
      v19 = *(_QWORD *)(a1 + 6064);
      strcpy(v44, "PCI vendor: ");
      v45 = 0;
      v48 = 0LL;
      v49 = 0;
      v42 = 0LL;
      v43 = 0;
      v51 = 0LL;
      v52 = 0;
      v41 = 0LL;
      v46 = 0LL;
      v47 = 0LL;
      memset(v50, 0, sizeof(v50));
      if ( v19 )
      {
        v20 = *(_WORD *)v19 >> 12;
        if ( (unsigned __int8)v20 > 9u )
          v21 = v20 + 55;
        else
          v21 = v20 + 48;
        v44[12] = v21;
        v22 = *(_BYTE *)(v19 + 1) & 0xF;
        if ( v22 > 9u )
          v23 = v22 + 55;
        else
          v23 = v22 + 48;
        LOBYTE(v45) = v23;
        v24 = (*(_BYTE *)v19 >> 4) & 0xF;
        if ( v24 > 9u )
          v25 = v24 + 55;
        else
          v25 = v24 + 48;
        BYTE1(v45) = v25;
        v26 = *(_BYTE *)v19 & 0xF;
        if ( v26 > 9u )
          v27 = v26 + 55;
        else
          v27 = v26 + 48;
        v28 = v50;
        HIWORD(v45) = v27;
        v29 = 20LL;
        v46 = *(_OWORD *)(v19 + 24);
        v47 = *(_OWORD *)(v19 + 40);
        v48 = *(_QWORD *)(v19 + 56);
        v30 = *(_QWORD *)(v19 + 64);
        v31 = (unsigned __int8 *)(v19 + 4);
        v42 = v30;
        do
        {
          v32 = *v31++;
          *v28++ = v32;
          --v29;
        }
        while ( v29 );
      }
      if ( (byte_140173444 & 0x40) != 0 )
        McTemplateK0quuujjzsszstxqqbr14uhqbr18_EtwWriteTransfer(
          v18,
          *(unsigned __int8 *)(a1 + 5380),
          *(unsigned __int8 *)(a1 + 104) >> 7,
          *(_DWORD *)(a1 + 56),
          255,
          255,
          255,
          (__int64)&v41,
          a1 + 5128,
          *(const wchar_t **)(a1 + 4784),
          v44,
          (const char *)&v46,
          (const wchar_t *)v50,
          (const char *)&v42,
          *(_BYTE *)(a1 + 104) >> 7,
          g_SystemUptime_s,
          *(_BYTE *)(a1 + 5380),
          v18,
          v39,
          v35,
          v6,
          v5,
          v3);
      *(_BYTE *)(a1 + 5381) = 0;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x65546152u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x65546152u);
}
