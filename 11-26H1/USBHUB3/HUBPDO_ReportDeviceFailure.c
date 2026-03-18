/*
 * XREFs of HUBPDO_ReportDeviceFailure @ 0x14001A9F0
 * Callers:
 *     HUBDSM_MarkingUnknownDeviceAsFailed @ 0x1400233D0 (HUBDSM_MarkingUnknownDeviceAsFailed.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x140002460 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBPDO_GetPortPath @ 0x140018F9C (HUBPDO_GetPortPath.c)
 *     McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh_EtwWriteTransfer @ 0x14001CED0 (McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ddddddDDD @ 0x14001DB2C (WPP_RECORDER_SF_ddddddDDD.c)
 *     _tlgWriteAgg @ 0x1400465A4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     HUBREG_GetVidPidRevForPort @ 0x140088368 (HUBREG_GetVidPidRevForPort.c)
 */

__int64 __fastcall HUBPDO_ReportDeviceFailure(__int64 *a1)
{
  __int64 v1; // r14
  int v3; // esi
  int v4; // r10d
  __int64 v5; // r11
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int16 v8; // r12
  int v9; // r13d
  __int64 v10; // r9
  __int16 v11; // di
  __int16 v12; // r13
  __int16 v13; // r12
  __int64 v14; // rcx
  int VidPidRevForPort; // eax
  int v16; // edx
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  unsigned __int16 v21; // r9
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  __int16 v37; // cx
  const CHAR *v38; // r8
  __int64 v39; // r9
  int v40; // r9d
  const CHAR *v41; // r8
  __int64 v42; // r9
  int v43; // r9d
  const CHAR *v44; // r14
  int v45; // edx
  __int64 *v46; // rax
  void *v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  __int16 v59; // cx
  const CHAR *v60; // r8
  __int64 v61; // r9
  int v62; // r9d
  __int64 v63; // r9
  int v64; // r9d
  int v65; // edx
  __int64 v66; // rax
  int v68; // [rsp+28h] [rbp-160h]
  __int64 v69; // [rsp+30h] [rbp-158h]
  _WORD v70[2]; // [rsp+108h] [rbp-80h] BYREF
  int v71; // [rsp+10Ch] [rbp-7Ch] BYREF
  int v72; // [rsp+110h] [rbp-78h] BYREF
  int v73; // [rsp+114h] [rbp-74h] BYREF
  int v74; // [rsp+118h] [rbp-70h] BYREF
  int v75; // [rsp+11Ch] [rbp-6Ch] BYREF
  int v76; // [rsp+120h] [rbp-68h] BYREF
  int v77; // [rsp+124h] [rbp-64h] BYREF
  int v78; // [rsp+128h] [rbp-60h] BYREF
  int v79; // [rsp+12Ch] [rbp-5Ch] BYREF
  int v80; // [rsp+130h] [rbp-58h] BYREF
  __int64 v81; // [rsp+138h] [rbp-50h] BYREF
  __int64 v82; // [rsp+140h] [rbp-48h] BYREF
  char v83[32]; // [rsp+148h] [rbp-40h] BYREF
  __int64 *v84; // [rsp+168h] [rbp-20h]
  __int64 v85; // [rsp+170h] [rbp-18h]
  int *v86; // [rsp+178h] [rbp-10h]
  __int64 v87; // [rsp+180h] [rbp-8h]
  int *v88; // [rsp+188h] [rbp+0h]
  __int64 v89; // [rsp+190h] [rbp+8h]
  int *v90; // [rsp+198h] [rbp+10h]
  __int64 v91; // [rsp+1A0h] [rbp+18h]
  char *v92; // [rsp+1A8h] [rbp+20h]
  int v93; // [rsp+1B0h] [rbp+28h]
  int v94; // [rsp+1B4h] [rbp+2Ch]
  char *v95; // [rsp+1B8h] [rbp+30h]
  int v96; // [rsp+1C0h] [rbp+38h]
  int v97; // [rsp+1C4h] [rbp+3Ch]
  char *v98; // [rsp+1C8h] [rbp+40h]
  int v99; // [rsp+1D0h] [rbp+48h]
  int v100; // [rsp+1D4h] [rbp+4Ch]
  int *v101; // [rsp+1D8h] [rbp+50h]
  __int64 v102; // [rsp+1E0h] [rbp+58h]
  int *v103; // [rsp+1E8h] [rbp+60h]
  __int64 v104; // [rsp+1F0h] [rbp+68h]
  __int16 *v105; // [rsp+1F8h] [rbp+70h]
  __int64 v106; // [rsp+200h] [rbp+78h]
  int *v107; // [rsp+208h] [rbp+80h]
  __int64 v108; // [rsp+210h] [rbp+88h]
  int *v109; // [rsp+218h] [rbp+90h]
  __int64 v110; // [rsp+220h] [rbp+98h]
  int *v111; // [rsp+228h] [rbp+A0h]
  __int64 v112; // [rsp+230h] [rbp+A8h]
  int *v113; // [rsp+238h] [rbp+B0h]
  __int64 v114; // [rsp+240h] [rbp+B8h]
  int *v115; // [rsp+248h] [rbp+C0h]
  __int64 v116; // [rsp+250h] [rbp+C8h]
  _WORD *v117; // [rsp+258h] [rbp+D0h]
  __int64 v118; // [rsp+260h] [rbp+D8h]
  const CHAR *v119; // [rsp+268h] [rbp+E0h]
  int v120; // [rsp+270h] [rbp+E8h]
  int v121; // [rsp+274h] [rbp+ECh]
  const CHAR *v122; // [rsp+278h] [rbp+F0h]
  int v123; // [rsp+280h] [rbp+F8h]
  int v124; // [rsp+284h] [rbp+FCh]
  const CHAR *v125; // [rsp+288h] [rbp+100h]
  int v126; // [rsp+290h] [rbp+108h]
  int v127; // [rsp+294h] [rbp+10Ch]
  __int64 *v128; // [rsp+298h] [rbp+110h]
  __int64 v129; // [rsp+2A0h] [rbp+118h]
  char pszDest[4]; // [rsp+2A8h] [rbp+120h] BYREF
  char v131; // [rsp+2ACh] [rbp+124h]
  char v132[4]; // [rsp+2B0h] [rbp+128h] BYREF
  char v133; // [rsp+2B4h] [rbp+12Ch]
  char v134[4]; // [rsp+2B8h] [rbp+130h] BYREF
  char v135; // [rsp+2BCh] [rbp+134h]
  __int16 v136; // [rsp+2C0h] [rbp+138h] BYREF
  __int16 v137; // [rsp+2C2h] [rbp+13Ah]
  __int16 v138; // [rsp+2C4h] [rbp+13Ch]
  __int16 v139; // [rsp+2C6h] [rbp+13Eh]
  __int16 v140; // [rsp+2C8h] [rbp+140h]
  unsigned __int16 v141; // [rsp+2CAh] [rbp+142h]

  v1 = *a1;
  LOBYTE(v70[0]) = 0;
  v3 = 0x7FFFFFFF;
  if ( (byte_140070D49 & 2) != 0 )
  {
    v4 = *(_DWORD *)(v1 + 168);
    v5 = v1 + 186;
    v6 = v1 + 176;
    if ( v4 != 2 )
    {
      v5 = 0LL;
      v6 = 0LL;
    }
    v7 = v1 + 181;
    if ( v4 != 2 )
      v7 = 0LL;
    if ( v4 == 1 )
    {
      v8 = *(_WORD *)(v1 + 184);
      v9 = *(_DWORD *)(v1 + 180);
      v73 = *(_DWORD *)(v1 + 176);
      v72 = *(_DWORD *)(v1 + 196);
      v71 = *(_DWORD *)(v1 + 192);
      v74 = *(_DWORD *)(v1 + 188);
    }
    else
    {
      LOBYTE(v8) = 0;
      v73 = 0x7FFFFFFF;
      LOBYTE(v9) = -1;
      v72 = 0;
      v71 = 0;
      v74 = 0;
    }
    v10 = a1[1];
    McTemplateK0pqhhhqqqqqqhhqhqqqqqqqssshhh_EtwWriteTransfer(
      *(unsigned __int8 *)(v10 + 202),
      *(unsigned __int16 *)(v10 + 200),
      (_DWORD)a1 + 1524,
      a1[3],
      *((_DWORD *)a1 + 610),
      *((_WORD *)a1 + 1002),
      *((_WORD *)a1 + 1003),
      *((_WORD *)a1 + 1004),
      *((_DWORD *)a1 + 43),
      *((_DWORD *)a1 + 392),
      *((_DWORD *)a1 + 393),
      *(_WORD *)(v10 + 200),
      *(_BYTE *)(v10 + 202),
      *(_DWORD *)(v10 + 208),
      *(_WORD *)(v10 + 192),
      *(_WORD *)(v10 + 194),
      *(_DWORD *)(v10 + 12),
      *(_WORD *)(v1 + 48),
      v4,
      v74,
      v71,
      v72,
      v73,
      v9,
      v8,
      v6,
      v7,
      v5,
      *(_WORD *)(v1 + 2480),
      *(_WORD *)(v1 + 2482),
      *(_WORD *)(v1 + 2484));
  }
  v11 = *((_WORD *)a1 + 1002);
  v12 = *((_WORD *)a1 + 1003);
  v13 = *((_WORD *)a1 + 1004);
  v14 = a1[2];
  LOWORD(v71) = v11;
  LOWORD(v72) = v12;
  LOWORD(v73) = v13;
  HUBPDO_GetPortPath(v14, &v136);
  if ( (*(_DWORD *)(*a1 + 40) & 0x40000) != 0 && (a1[205] & 0x20) != 0 )
  {
    LOBYTE(v70[0]) = 1;
    if ( !v11 && !v12 && !v13 )
    {
      VidPidRevForPort = HUBREG_GetVidPidRevForPort(a1[1], &v71, &v72, &v73);
      if ( VidPidRevForPort >= 0 )
      {
        v11 = v71;
        v12 = v72;
        v13 = v73;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_ddddddDDD(
            *(_QWORD *)(a1[1] + 1432),
            v16,
            (unsigned __int16)v71,
            v141,
            v68,
            v136,
            v137,
            v138,
            v139,
            v140,
            v141,
            v71,
            v72,
            v73);
          v11 = v71;
          v3 = 0x7FFFFFFF;
        }
        *((_WORD *)a1 + 1002) = v11;
        *((_WORD *)a1 + 1003) = v12;
        *((_WORD *)a1 + 1004) = v13;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v69) = VidPidRevForPort;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1[1] + 1432),
            2u,
            2u,
            0x8Au,
            (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
            v69);
        }
        v11 = v71;
        v12 = v72;
        v13 = v73;
      }
    }
  }
  v17 = *a1;
  if ( *(_BYTE *)(*a1 + 240) )
  {
    v24 = RtlStringCchPrintfA(pszDest, 5uLL, "%04X", *(unsigned __int16 *)(v17 + 2480));
    if ( v24 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v69) = v24;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x93u,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v69);
    }
    v25 = RtlStringCchPrintfA(v132, 5uLL, "%04X", *(unsigned __int16 *)(*a1 + 2482));
    if ( v25 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v69) = v25;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x94u,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v69);
    }
    v20 = RtlStringCchPrintfA(v134, 5uLL, "%04X", *(unsigned __int16 *)(*a1 + 2484));
    if ( v20 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 149;
      goto LABEL_56;
    }
  }
  else if ( *(_DWORD *)(v17 + 168) == 1 )
  {
    v22 = RtlStringCchPrintfA(pszDest, 5uLL, "%04X", *(unsigned __int16 *)(v17 + 176));
    if ( v22 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v69) = v22;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x8Cu,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v69);
    }
    v23 = RtlStringCchPrintfA(v132, 5uLL, "%04X", *(unsigned __int16 *)(*a1 + 180));
    if ( v23 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v69) = v23;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x8Du,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v69);
    }
    v20 = RtlStringCchPrintfA(v134, 5uLL, "%04X", *(unsigned __int16 *)(*a1 + 184));
    if ( v20 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 142;
      goto LABEL_56;
    }
  }
  else
  {
    if ( *(_DWORD *)(v17 + 168) == 2 )
    {
      *(_DWORD *)pszDest = *(_DWORD *)(v17 + 176);
      v131 = *(_BYTE *)(v17 + 180);
      *(_DWORD *)v132 = *(_DWORD *)(v17 + 181);
      v133 = *(_BYTE *)(v17 + 185);
      *(_DWORD *)v134 = *(_DWORD *)(v17 + 186);
      v135 = *(_BYTE *)(v17 + 190);
      goto LABEL_57;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v69) = *(_DWORD *)(v17 + 168);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x8Fu,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v69);
    }
    v18 = RtlStringCchPrintfA(pszDest, 5uLL, "%04X", 0xFFFF);
    if ( v18 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v69) = v18;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x90u,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v69);
    }
    v19 = RtlStringCchPrintfA(v132, 5uLL, "%04X", 0xFFFF);
    if ( v19 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v69) = v19;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x91u,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v69);
    }
    v20 = RtlStringCchPrintfA(v134, 5uLL, "%04X", 0xFFFF);
    if ( v20 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 146;
LABEL_56:
      LODWORD(v69) = v20;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        v21,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v69);
    }
  }
LABEL_57:
  if ( LOBYTE(v70[0]) )
  {
    if ( (unsigned int)dword_14006D2D0 > 5
      && (qword_14006D2E0 & 0x400000000002LL) != 0
      && (qword_14006D2E8 & 0x400000000002LL) == qword_14006D2E8 )
    {
      v81 = 1LL;
      v85 = 8LL;
      v84 = &v81;
      LOWORD(v73) = v11;
      v86 = &v73;
      v26 = -1LL;
      v87 = 2LL;
      v88 = &v72;
      v90 = &v71;
      v27 = -1LL;
      LOWORD(v72) = v12;
      v89 = 2LL;
      LOWORD(v71) = v13;
      v91 = 2LL;
      do
        ++v27;
      while ( pszDest[v27] );
      v94 = 0;
      v92 = pszDest;
      v93 = v27 + 1;
      v28 = -1LL;
      do
        ++v28;
      while ( v132[v28] );
      v97 = 0;
      v95 = v132;
      v96 = v28 + 1;
      v29 = -1LL;
      do
        ++v29;
      while ( v134[v29] );
      v100 = 0;
      v99 = v29 + 1;
      v74 = *((_DWORD *)a1 + 610);
      v101 = &v74;
      v30 = a1[1];
      v98 = v134;
      v102 = 4LL;
      v31 = *(_DWORD *)(v30 + 208);
      v103 = &v75;
      v105 = &v136;
      v32 = *(_DWORD *)(v1 + 168);
      v75 = v31;
      v104 = 4LL;
      v106 = 12LL;
      if ( v32 == 1 )
        v33 = *(_DWORD *)(v1 + 188);
      else
        v33 = 0;
      v76 = v33;
      v107 = &v76;
      v108 = 4LL;
      if ( v32 == 1 )
        v34 = *(_DWORD *)(v1 + 192);
      else
        v34 = 0;
      v77 = v34;
      v109 = &v77;
      v110 = 4LL;
      if ( v32 == 1 )
        v35 = *(_DWORD *)(v1 + 196);
      else
        v35 = 0;
      v78 = v35;
      v111 = &v78;
      v112 = 4LL;
      if ( v32 == 1 )
        v36 = *(_DWORD *)(v1 + 176);
      else
        v36 = 0x7FFFFFFF;
      v79 = v36;
      v113 = &v79;
      v114 = 4LL;
      if ( v32 == 1 )
        v3 = *(_DWORD *)(v1 + 180);
      v80 = v3;
      v115 = &v80;
      v116 = 4LL;
      if ( v32 == 1 )
        v37 = *(_WORD *)(v1 + 184);
      else
        v37 = 0;
      v70[0] = v37;
      v118 = 2LL;
      v38 = (const CHAR *)(v1 + 176);
      v117 = v70;
      if ( v32 != 2 )
        v38 = 0LL;
      if ( v38 )
      {
        v39 = -1LL;
        do
          ++v39;
        while ( v38[v39] );
        v40 = v39 + 1;
      }
      else
      {
        v38 = File;
        v40 = 1;
      }
      v119 = v38;
      v41 = (const CHAR *)(v1 + 181);
      v120 = v40;
      if ( v32 != 2 )
        v41 = 0LL;
      v121 = 0;
      if ( v41 )
      {
        v42 = -1LL;
        do
          ++v42;
        while ( v41[v42] );
        v43 = v42 + 1;
      }
      else
      {
        v41 = File;
        v43 = 1;
      }
      v44 = (const CHAR *)(v1 + 186);
      v122 = v41;
      v123 = v43;
      v124 = 0;
      if ( v32 != 2 )
        v44 = 0LL;
      if ( v44 )
      {
        do
          ++v26;
        while ( v44[v26] );
        v45 = v26 + 1;
      }
      else
      {
        v44 = File;
        v45 = 1;
      }
      v126 = v45;
      v46 = &v82;
      v47 = &unk_140068A04;
      v82 = 16779264LL;
LABEL_152:
      v128 = v46;
      v125 = v44;
      v127 = 0;
      v129 = 8LL;
      tlgWriteAgg((unsigned int)File, (_DWORD)v47, (_DWORD)v41, 22, (__int64)v83);
    }
  }
  else if ( (unsigned int)dword_14006D2D0 > 5
         && (qword_14006D2E0 & 0x200000000002LL) != 0
         && (qword_14006D2E8 & 0x200000000002LL) == qword_14006D2E8 )
  {
    v82 = 1LL;
    v85 = 8LL;
    v84 = &v82;
    LOWORD(v73) = v11;
    v86 = &v73;
    v48 = -1LL;
    v87 = 2LL;
    v88 = &v72;
    v90 = &v71;
    v49 = -1LL;
    LOWORD(v72) = v12;
    v89 = 2LL;
    LOWORD(v71) = v13;
    v91 = 2LL;
    do
      ++v49;
    while ( pszDest[v49] );
    v94 = 0;
    v92 = pszDest;
    v93 = v49 + 1;
    v50 = -1LL;
    do
      ++v50;
    while ( v132[v50] );
    v97 = 0;
    v95 = v132;
    v96 = v50 + 1;
    v51 = -1LL;
    do
      ++v51;
    while ( v134[v51] );
    v100 = 0;
    v99 = v51 + 1;
    v80 = *((_DWORD *)a1 + 610);
    v101 = &v80;
    v52 = a1[1];
    v98 = v134;
    v102 = 4LL;
    v53 = *(_DWORD *)(v52 + 208);
    v103 = &v79;
    v105 = &v136;
    v54 = *(_DWORD *)(v1 + 168);
    v79 = v53;
    v104 = 4LL;
    v106 = 12LL;
    if ( v54 == 1 )
      v55 = *(_DWORD *)(v1 + 188);
    else
      v55 = 0;
    v78 = v55;
    v107 = &v78;
    v108 = 4LL;
    if ( v54 == 1 )
      v56 = *(_DWORD *)(v1 + 192);
    else
      v56 = 0;
    v77 = v56;
    v109 = &v77;
    v110 = 4LL;
    if ( v54 == 1 )
      v57 = *(_DWORD *)(v1 + 196);
    else
      v57 = 0;
    v76 = v57;
    v111 = &v76;
    v112 = 4LL;
    if ( v54 == 1 )
      v58 = *(_DWORD *)(v1 + 176);
    else
      v58 = 0x7FFFFFFF;
    v75 = v58;
    v113 = &v75;
    v114 = 4LL;
    if ( v54 == 1 )
      v3 = *(_DWORD *)(v1 + 180);
    v74 = v3;
    v115 = &v74;
    v116 = 4LL;
    if ( v54 == 1 )
      v59 = *(_WORD *)(v1 + 184);
    else
      v59 = 0;
    v70[0] = v59;
    v118 = 2LL;
    v60 = (const CHAR *)(v1 + 176);
    v117 = v70;
    if ( v54 != 2 )
      v60 = 0LL;
    if ( v60 )
    {
      v61 = -1LL;
      do
        ++v61;
      while ( v60[v61] );
      v62 = v61 + 1;
    }
    else
    {
      v60 = File;
      v62 = 1;
    }
    v119 = v60;
    v41 = (const CHAR *)(v1 + 181);
    v120 = v62;
    if ( v54 != 2 )
      v41 = 0LL;
    v121 = 0;
    if ( v41 )
    {
      v63 = -1LL;
      do
        ++v63;
      while ( v41[v63] );
      v64 = v63 + 1;
    }
    else
    {
      v41 = File;
      v64 = 1;
    }
    v44 = (const CHAR *)(v1 + 186);
    v122 = v41;
    v123 = v64;
    v124 = 0;
    if ( v54 != 2 )
      v44 = 0LL;
    if ( v44 )
    {
      do
        ++v48;
      while ( v44[v48] );
      v65 = v48 + 1;
    }
    else
    {
      v44 = File;
      v65 = 1;
    }
    v126 = v65;
    v46 = &v81;
    v47 = &unk_1400688A9;
    v81 = 16779264LL;
    goto LABEL_152;
  }
  v66 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1[2]);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 696))(
           WdfDriverGlobals,
           v66,
           1LL);
}
