/*
 * XREFs of ACPIFanFSTCallback @ 0x140016F90
 * Callers:
 *     ACPIFanLoop @ 0x140017774 (ACPIFanLoop.c)
 * Callees:
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     AMLIEvalPkgDataElement @ 0x140015D90 (AMLIEvalPkgDataElement.c)
 *     ACPIFanLoop @ 0x140017774 (ACPIFanLoop.c)
 *     AcpiDiagTraceFanStatusChange @ 0x140017D94 (AcpiDiagTraceFanStatusChange.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1400188A0 (WPP_RECORDER_SF_Dqss.c)
 *     ACPISetDeviceWorker @ 0x14002AAD4 (ACPISetDeviceWorker.c)
 *     WPP_RECORDER_SF_dqss @ 0x140033F50 (WPP_RECORDER_SF_dqss.c)
 *     WPP_RECORDER_SF_qss @ 0x14003C56C (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_DDqss @ 0x140044660 (WPP_RECORDER_SF_DDqss.c)
 */

__int64 __fastcall ACPIFanFSTCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r9
  const char *v6; // rdi
  char v7; // r8
  const char *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edi
  const char *v12; // rdi
  int v13; // edx
  const char *v14; // rcx
  __int64 v15; // rax
  int v16; // r9d
  __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  __int64 v20; // rax
  const char *v21; // rdi
  const char *v22; // r8
  const char *v23; // rdx
  char v24; // r8
  const char *v25; // rdx
  const char *v26; // rcx
  __int64 v27; // rax
  char v28; // r10
  const char *v29; // r8
  const char *v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  char v33; // r8
  int v34; // edx
  __int64 v35; // rcx
  const char *v36; // rax
  int v37; // edx
  const char *v38; // rax
  __int64 v39; // rcx
  int v40; // edx
  const char *v41; // rax
  __int64 v42; // rcx
  char v43; // [rsp+28h] [rbp-58h]
  char v44; // [rsp+28h] [rbp-58h]
  char v45; // [rsp+28h] [rbp-58h]
  char v46; // [rsp+28h] [rbp-58h]
  char v47; // [rsp+28h] [rbp-58h]
  __int64 v48; // [rsp+30h] [rbp-50h]
  char v49; // [rsp+30h] [rbp-50h]
  __int64 v50; // [rsp+48h] [rbp-38h]
  __int128 v51; // [rsp+50h] [rbp-30h] BYREF
  __int128 v52; // [rsp+60h] [rbp-20h]
  __int64 v53; // [rsp+70h] [rbp-10h]
  int v54; // [rsp+C8h] [rbp+48h]
  unsigned int v56; // [rsp+D8h] [rbp+58h]

  v54 = 0x40000000;
  v53 = 0LL;
  v56 = (unsigned int)a2 >> 31;
  v5 = a3;
  v51 = 0LL;
  v52 = 0LL;
  if ( a2 < 0 )
  {
    v6 = byte_140075A82;
    v7 = 0;
    v8 = byte_140075A82;
    if ( a4 )
    {
      v9 = *(_QWORD *)(a4 + 8);
      v7 = a4;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v6 = *(const char **)(a4 + 608);
        if ( (v9 & 0x400000000000LL) != 0 )
          v8 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    v43 = a2;
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_Dqss(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      16,
      15,
      (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
      v43,
      v7,
      (__int64)v6,
      (__int64)v8);
LABEL_8:
    v5 = a3;
LABEL_9:
    v10 = 0x40000000;
    goto LABEL_10;
  }
  if ( *(_WORD *)(a3 + 2) != 4 )
  {
    v12 = byte_140075A82;
    v13 = 0;
    v14 = byte_140075A82;
    if ( a4 )
    {
      v15 = *(_QWORD *)(a4 + 8);
      v13 = a4;
      if ( (v15 & 0x200000000000LL) != 0 )
      {
        v12 = *(const char **)(a4 + 608);
        if ( (v15 & 0x400000000000LL) != 0 )
          v14 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    v16 = 16;
    goto LABEL_20;
  }
  if ( **(_DWORD **)(a3 + 32) < 3u )
  {
    v12 = byte_140075A82;
    v13 = 0;
    v14 = byte_140075A82;
    if ( a4 )
    {
      v17 = *(_QWORD *)(a4 + 8);
      v13 = a4;
      if ( (v17 & 0x200000000000LL) != 0 )
      {
        v12 = *(const char **)(a4 + 608);
        if ( (v17 & 0x400000000000LL) != 0 )
          v14 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    v16 = 17;
LABEL_20:
    v44 = v13;
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_qss(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      16,
      v16,
      (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
      v44,
      (__int64)v12,
      (__int64)v14);
    goto LABEL_8;
  }
  v18 = AMLIEvalPkgDataElement(a3, 1u, (__int64)&v51);
  if ( v18 < 0 )
  {
    v21 = byte_140075A82;
    v28 = 0;
    v29 = byte_140075A82;
    v30 = byte_140075A82;
    if ( a4 )
    {
      v31 = *(_QWORD *)(a4 + 8);
      v28 = a4;
      if ( (v31 & 0x200000000000LL) != 0 )
      {
        v29 = *(const char **)(a4 + 608);
        if ( (v31 & 0x400000000000LL) != 0 )
          v30 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v45 = v18;
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_Dqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v18,
        16,
        20,
        (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
        v45,
        v28,
        (__int64)v29,
        (__int64)v30);
    }
  }
  else
  {
    if ( WORD1(v51) == 1 )
    {
      v19 = v52;
      if ( (_DWORD)v52 == *(_DWORD *)(a4 + 296) )
      {
        LOBYTE(v19) = *(_DWORD *)(a4 + 296);
      }
      else
      {
        *(_DWORD *)(a4 + 296) = v52;
        v54 = 1073741826;
        *(_BYTE *)(a4 + 300) = v19 != 0;
      }
      v20 = *(_QWORD *)(a4 + 8);
      v21 = byte_140075A82;
      v22 = byte_140075A82;
      v23 = byte_140075A82;
      if ( (v20 & 0x200000000000LL) != 0 )
      {
        v22 = *(const char **)(a4 + 608);
        if ( (v20 & 0x400000000000LL) != 0 )
          v23 = *(const char **)(a4 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v50 = (__int64)v23;
        LOBYTE(v23) = 5;
        WPP_RECORDER_SF_DDqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v23,
          16,
          18,
          (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
          v19,
          *(_BYTE *)(a4 + 300),
          a4,
          (__int64)v22,
          v50);
      }
    }
    else
    {
      v21 = byte_140075A82;
      v24 = 0;
      v25 = byte_140075A82;
      v26 = byte_140075A82;
      if ( a4 )
      {
        v27 = *(_QWORD *)(a4 + 8);
        v24 = a4;
        if ( (v27 & 0x200000000000LL) != 0 )
        {
          v25 = *(const char **)(a4 + 608);
          if ( (v27 & 0x400000000000LL) != 0 )
            v26 = *(const char **)(a4 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v48 = (__int64)v25;
        LOBYTE(v25) = 4;
        WPP_RECORDER_SF_qss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v25,
          16,
          19,
          (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
          v24,
          v48,
          (__int64)v26);
      }
    }
    dword_14008ED38 = 0;
    pszDest = 0;
    FreeDataBuffs((__int64)&v51, 1u);
  }
  v51 = 0LL;
  v53 = 0LL;
  v52 = 0LL;
  v32 = AMLIEvalPkgDataElement(a3, 2u, (__int64)&v51);
  v33 = v32;
  if ( v32 < 0 )
  {
    v40 = 0;
    v41 = byte_140075A82;
    if ( a4 )
    {
      v42 = *(_QWORD *)(a4 + 8);
      v40 = a4;
      if ( (v42 & 0x200000000000LL) != 0 )
      {
        v21 = *(const char **)(a4 + 608);
        if ( (v42 & 0x400000000000LL) != 0 )
          v41 = *(const char **)(a4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v49 = v40;
      LOBYTE(v40) = 4;
      WPP_RECORDER_SF_Dqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v40,
        16,
        23,
        (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
        v33,
        v49,
        (__int64)v21,
        (__int64)v41);
    }
  }
  else
  {
    if ( WORD1(v51) == 1 )
    {
      v34 = *(_DWORD *)(a4 + 304);
      if ( (_DWORD)v52 != v34 )
      {
        v54 |= 2u;
        v34 = v52;
        *(_DWORD *)(a4 + 304) = v52;
      }
      v35 = *(_QWORD *)(a4 + 8);
      v36 = byte_140075A82;
      if ( (v35 & 0x200000000000LL) != 0 )
      {
        v21 = *(const char **)(a4 + 608);
        if ( (v35 & 0x400000000000LL) != 0 )
          v36 = *(const char **)(a4 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v46 = v34;
        LOBYTE(v34) = 5;
        WPP_RECORDER_SF_dqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v34,
          16,
          21,
          (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
          v46,
          a4,
          (__int64)v21,
          (__int64)v36);
      }
    }
    else
    {
      v37 = 0;
      v38 = byte_140075A82;
      if ( a4 )
      {
        v39 = *(_QWORD *)(a4 + 8);
        v37 = a4;
        if ( (v39 & 0x200000000000LL) != 0 )
        {
          v21 = *(const char **)(a4 + 608);
          if ( (v39 & 0x400000000000LL) != 0 )
            v38 = *(const char **)(a4 + 616);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v47 = v37;
        LOBYTE(v37) = 4;
        WPP_RECORDER_SF_qss(
          WPP_GLOBAL_Control->DeviceExtension,
          v37,
          16,
          22,
          (__int64)&WPP_667aea33661b3b69513e94c68b16346f_Traceguids,
          v47,
          (__int64)v21,
          (__int64)v38);
      }
    }
    dword_14008ED38 = 0;
    pszDest = 0;
    FreeDataBuffs((__int64)&v51, 1u);
  }
  v10 = v54;
  if ( (v54 & 2) != 0 )
  {
    AcpiDiagTraceFanStatusChange(a4);
  }
  else if ( (*(_BYTE *)(a4 + 320) & 0xF) == 0xF )
  {
    ACPISetDeviceWorker(a4, 1024LL);
  }
  v5 = a3;
LABEL_10:
  if ( !(_BYTE)v56 )
  {
    dword_14008ED38 = 0;
    pszDest = 0;
    FreeDataBuffs(v5, 1u);
  }
  return ACPIFanLoop(a4, v10, 0LL, v5);
}
