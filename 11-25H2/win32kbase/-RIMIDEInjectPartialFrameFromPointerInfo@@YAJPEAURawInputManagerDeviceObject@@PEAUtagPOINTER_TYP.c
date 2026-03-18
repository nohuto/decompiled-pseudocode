/*
 * XREFs of ?RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYPE_INFO@@III@Z @ 0x1401E77D8
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1401EA134 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMIDEInjectDeviceInput @ 0x140124E3C (RIMIDEInjectDeviceInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIDEFillContactUsageValues @ 0x1401E9688 (RIMIDEFillContactUsageValues.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1401EB7DC (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 */

__int64 __fastcall RIMIDEInjectPartialFrameFromPointerInfo(
        struct RawInputManagerDeviceObject *a1,
        struct tagPOINTER_TYPE_INFO *a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  __int64 v5; // r12
  int v7; // edi
  char *v8; // rsi
  __int64 v9; // rbp
  int v10; // r8d
  __int64 v11; // rdx
  unsigned __int64 v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  bool v16; // r14
  int v17; // edx
  int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // rax
  char *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 v30; // rax
  __int64 v31; // rdx
  char v32; // di
  __int64 v33; // rax
  int v34; // edx
  int v35; // r8d
  unsigned int v36; // r8d
  unsigned int v37; // r10d
  _DWORD *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  struct tagPOINTER_TYPE_INFO *v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // r8d
  __int64 v47; // rcx
  char v48; // di
  int v49; // edx
  int v50; // r8d
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  char v54; // di
  __int64 v55; // rax
  int v56; // edx
  int v57; // r8d
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  char v63; // di
  int v64; // edx
  int v65; // r8d
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rcx
  char v70; // di
  __int64 v71; // rax
  int v72; // edx
  int v73; // r8d
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rcx
  char v77; // di
  __int64 v78; // rax
  int v79; // edx
  int v80; // r8d
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rcx
  char v84; // di
  bool v85; // r13
  __int64 v86; // rax
  int v87; // r8d
  int v88; // edx
  __int64 v89; // rdx
  __int64 v90; // rcx
  bool v91; // bp
  int v92; // edx
  int v93; // r8d
  __int64 v94; // r9
  bool v95; // bp
  __int64 UserSessionState; // rax
  int v97; // r8d
  int v98; // edx
  __int16 v100; // [rsp+30h] [rbp-128h]
  __int16 v101; // [rsp+30h] [rbp-128h]
  __int16 v102; // [rsp+30h] [rbp-128h]
  __int16 v103; // [rsp+30h] [rbp-128h]
  char v104; // [rsp+40h] [rbp-118h]
  int v105; // [rsp+50h] [rbp-108h]
  bool v106; // [rsp+54h] [rbp-104h]
  unsigned int v107; // [rsp+58h] [rbp-100h] BYREF
  PVOID Buffer; // [rsp+60h] [rbp-F8h] BYREF
  _OWORD v109[9]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v110; // [rsp+100h] [rbp-58h]
  bool v114; // [rsp+170h] [rbp+18h]
  bool v115; // [rsp+170h] [rbp+18h]
  bool v116; // [rsp+170h] [rbp+18h]
  bool v117; // [rsp+170h] [rbp+18h]
  bool v118; // [rsp+170h] [rbp+18h]

  v5 = a3;
  Buffer = 0LL;
  v107 = 0;
  v7 = 0;
  v8 = 0LL;
  LODWORD(v9) = 0;
  if ( a3 )
  {
    if ( a3 <= 0x100 )
      goto LABEL_6;
    v10 = 1695;
  }
  else
  {
    v10 = 1694;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v10);
LABEL_6:
  if ( !(unsigned int)BuildValueDeviceUsages(*(_DWORD *)a2, (struct tagINPUT_INJECTION_VALUE **)&Buffer, &v107) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    {
      LOBYTE(v7) = 1;
    }
    v91 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_157;
    v94 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v11) + 19336);
    v103 = 50;
    goto LABEL_156;
  }
  v12 = v5 * v107;
  if ( v12 > 0xFFFFFFFF )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    {
      LOBYTE(v7) = 1;
    }
    v95 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v11);
      LOBYTE(v97) = v95;
      LOBYTE(v98) = v7;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v98,
        v97,
        *(_QWORD *)(UserSessionState + 19336),
        2,
        1,
        37,
        (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids,
        v5);
    }
    goto LABEL_157;
  }
  v13 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 2 )
  {
    v14 = v107 - 2;
LABEL_10:
    v107 = v14;
    goto LABEL_15;
  }
  if ( v13 == 3 )
  {
    v14 = v107 - 1;
    goto LABEL_10;
  }
  if ( v13 != 5 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    {
      LOBYTE(v7) = 1;
    }
    v91 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_157;
    v94 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, 3LL) + 19336);
    v103 = 38;
LABEL_156:
    LOBYTE(v93) = v91;
    LOBYTE(v92) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v92,
      v93,
      v94,
      2,
      1,
      v103,
      (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids);
LABEL_157:
    v7 = -1073741811;
    goto LABEL_158;
  }
  v107 -= 5;
LABEL_15:
  v8 = (char *)Win32AllocPoolZInitImpl(256LL, 12LL * (unsigned int)v12, 0x6A6E6952u);
  if ( !v8 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    {
      LOBYTE(v9) = 1;
    }
    v7 = -1073741801;
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v104 = 23;
      v19 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v15) + 19336);
      v100 = 39;
LABEL_134:
      LOBYTE(v18) = v16;
      LOBYTE(v17) = v9;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v18,
        v19,
        2,
        1,
        v100,
        (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids,
        v104);
      goto LABEL_158;
    }
    goto LABEL_158;
  }
  v20 = 0LL;
  v105 = 0;
  if ( a3 )
  {
    while ( v7 >= 0 )
    {
      v21 = (char *)a2 + 152 * v20;
      v22 = *((_OWORD *)v21 + 1);
      v109[0] = *(_OWORD *)v21;
      v23 = *((_OWORD *)v21 + 2);
      v109[1] = v22;
      v24 = *((_OWORD *)v21 + 3);
      v109[2] = v23;
      v25 = *((_OWORD *)v21 + 4);
      v109[3] = v24;
      v26 = *((_OWORD *)v21 + 5);
      v109[4] = v25;
      v27 = *((_OWORD *)v21 + 6);
      v109[5] = v26;
      v28 = *((_OWORD *)v21 + 7);
      v109[6] = v27;
      v29 = *((_OWORD *)v21 + 8);
      v30 = *((_QWORD *)v21 + 18);
      v109[7] = v28;
      v109[8] = v29;
      v110 = v30;
      if ( (unsigned int)RIMIDEFillContactUsageValues(*((_QWORD *)a1 + 66), Buffer, v107, v109) )
      {
        v36 = v107;
        v37 = 0;
        if ( v107 )
        {
          v38 = Buffer;
          do
          {
            if ( (unsigned int)v9 >= (unsigned int)v12 )
              break;
            ++v37;
            v39 = (unsigned int)v9;
            LODWORD(v9) = v9 + 1;
            v40 = 3 * v39;
            *(_QWORD *)&v8[4 * v40] = *(_QWORD *)v38;
            *(_DWORD *)&v8[4 * v40 + 8] = v38[2];
            *(_WORD *)&v8[4 * v40 + 8] = v105 + 1;
            v38[1] = 0;
            v38 += 3;
          }
          while ( v37 < v36 );
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v32 = 0;
        }
        v106 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v33 = W32GetUserSessionState(WPP_GLOBAL_Control, v31);
          LOBYTE(v34) = v32;
          LOBYTE(v35) = v106;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v34,
            v35,
            *(_QWORD *)(v33 + 19336),
            2,
            1,
            40,
            (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids);
        }
        v7 = -1073741811;
      }
      v20 = (unsigned int)(v105 + 1);
      v105 = v20;
      if ( (unsigned int)v20 >= a3 )
      {
        if ( v7 < 0 )
          goto LABEL_158;
        goto LABEL_40;
      }
    }
    goto LABEL_158;
  }
LABEL_40:
  v41 = a2;
  if ( *(_DWORD *)a2 != 2 )
    goto LABEL_60;
  v42 = (unsigned int)(v9 + 1);
  if ( (unsigned int)v42 > (unsigned int)v12 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v48 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v48 = 0;
    }
    v114 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v48 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_59;
    v51 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v42) + 19336);
    v101 = 41;
  }
  else
  {
    v43 = (unsigned int)v9;
    v9 = (unsigned int)v42;
    v44 = (unsigned int)(v42 + 1);
    v45 = 3 * v43;
    *(_DWORD *)&v8[4 * v45] = 5505037;
    *(_DWORD *)&v8[4 * v45 + 4] = a4;
    *(_WORD *)&v8[4 * v45 + 8] = 0;
    if ( (unsigned int)v44 <= (unsigned int)v12 )
    {
      v46 = a5;
      v47 = 3 * v9;
      LODWORD(v12) = v44;
      *(_DWORD *)&v8[4 * v47] = 5636109;
      *(_DWORD *)&v8[4 * v47 + 4] = a5;
      *(_WORD *)&v8[4 * v47 + 8] = 0;
      goto LABEL_61;
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v48 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v48 = 0;
    }
    v114 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v48 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_59;
    v51 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v44) + 19336);
    v101 = 42;
  }
  LOBYTE(v49) = v48;
  LOBYTE(v50) = v114;
  WPP_RECORDER_AND_TRACE_SF_(
    *((_QWORD *)WPP_GLOBAL_Control + 3),
    v49,
    v50,
    v51,
    2,
    1,
    v101,
    (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids);
  v41 = a2;
LABEL_59:
  v7 = -1073741811;
LABEL_60:
  v46 = a5;
LABEL_61:
  if ( *(_DWORD *)v41 == 3 )
  {
    v52 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v52 > (unsigned int)v12 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v54 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v54 = 0;
      }
      v115 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v54 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v55 = W32GetUserSessionState(WPP_GLOBAL_Control, v52);
        LOBYTE(v56) = v54;
        LOBYTE(v57) = v115;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v56,
          v57,
          *(_QWORD *)(v55 + 19336),
          2,
          1,
          43,
          (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids);
        v41 = a2;
      }
      v7 = -1073741811;
    }
    else
    {
      LODWORD(v12) = v9 + 1;
      v53 = 3LL * (unsigned int)v9;
      *(_DWORD *)&v8[4 * v53] = 5636109;
      *(_DWORD *)&v8[4 * v53 + 4] = v46;
      *(_WORD *)&v8[4 * v53 + 8] = 0;
    }
  }
  if ( *(_DWORD *)v41 == 5 )
  {
    v58 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v58 > (unsigned int)v12 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v63 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v63 = 0;
      }
      v116 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v63 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_92;
      v66 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v58) + 19336);
      v102 = 44;
    }
    else
    {
      v59 = (unsigned int)v9;
      v9 = (unsigned int)v58;
      v60 = 3 * v59;
      *(_DWORD *)&v8[4 * v60] = 5505037;
      *(_DWORD *)&v8[4 * v60 + 4] = a4;
      *(_WORD *)&v8[4 * v60 + 8] = 0;
      if ( v7 < 0 )
      {
LABEL_93:
        v67 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v67 > (unsigned int)v12 )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v70 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v70 = 0;
          }
          v117 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v70 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v71 = W32GetUserSessionState(WPP_GLOBAL_Control, v67);
            LOBYTE(v72) = v70;
            LOBYTE(v73) = v117;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v72,
              v73,
              *(_QWORD *)(v71 + 19336),
              2,
              1,
              46,
              (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids);
          }
          v41 = a2;
          v7 = -1073741811;
        }
        else
        {
          v68 = (unsigned int)v9;
          LODWORD(v9) = v9 + 1;
          v69 = 3 * v68;
          *(_DWORD *)&v8[4 * v69] = 65545;
          LODWORD(v68) = (*((_DWORD *)v41 + 5) >> 4) & 1;
          *(_WORD *)&v8[4 * v69 + 8] = 0;
          *(_DWORD *)&v8[4 * v69 + 4] = v68;
        }
        v74 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v74 > (unsigned int)v12 )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v77 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v77 = 0;
          }
          v118 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v77 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v78 = W32GetUserSessionState(WPP_GLOBAL_Control, v74);
            LOBYTE(v79) = v77;
            LOBYTE(v80) = v118;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v79,
              v80,
              *(_QWORD *)(v78 + 19336),
              2,
              1,
              47,
              (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids);
          }
          v41 = a2;
          v7 = -1073741811;
        }
        else
        {
          v75 = (unsigned int)v9;
          LODWORD(v9) = v9 + 1;
          v76 = 3 * v75;
          *(_DWORD *)&v8[4 * v76] = 131081;
          LODWORD(v75) = (*((_DWORD *)v41 + 5) >> 5) & 1;
          *(_WORD *)&v8[4 * v76 + 8] = 0;
          *(_DWORD *)&v8[4 * v76 + 4] = v75;
        }
        v81 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v81 > (unsigned int)v12 )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v84 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v84 = 0;
          }
          v85 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v84 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v86 = W32GetUserSessionState(WPP_GLOBAL_Control, v81);
            LOBYTE(v87) = v85;
            LOBYTE(v88) = v84;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v88,
              v87,
              *(_QWORD *)(v86 + 19336),
              2,
              1,
              48,
              (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids);
          }
          v7 = -1073741811;
        }
        else
        {
          v82 = (unsigned int)v9;
          LODWORD(v9) = v9 + 1;
          v83 = 3 * v82;
          *(_DWORD *)&v8[4 * v83] = 196617;
          LODWORD(v82) = (*((_DWORD *)v41 + 5) >> 6) & 1;
          *(_WORD *)&v8[4 * v83 + 8] = 0;
          *(_DWORD *)&v8[4 * v83 + 4] = v82;
        }
        LODWORD(v12) = v9;
        goto LABEL_124;
      }
      v61 = (unsigned int)(v58 + 1);
      if ( (unsigned int)v61 <= (unsigned int)v12 )
      {
        v62 = 3 * v9;
        LODWORD(v9) = v61;
        *(_DWORD *)&v8[4 * v62] = 5636109;
        *(_DWORD *)&v8[4 * v62 + 4] = a5;
        *(_WORD *)&v8[4 * v62 + 8] = 0;
        goto LABEL_93;
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v63 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v63 = 0;
      }
      v116 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v63 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_92:
        v7 = -1073741811;
        goto LABEL_93;
      }
      v66 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v61) + 19336);
      v102 = 45;
    }
    LOBYTE(v64) = v63;
    LOBYTE(v65) = v116;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v64,
      v65,
      v66,
      2,
      1,
      v102,
      (__int64)&WPP_5648251fa1fb356694568c9688803d0d_Traceguids);
    v41 = a2;
    goto LABEL_92;
  }
LABEL_124:
  if ( v7 >= 0 )
  {
    v7 = RIMIDEInjectDeviceInput((__int64)a1, (__int64)v8, v12, 5u);
    if ( v7 < 0 )
    {
      LOBYTE(v9) = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (v90 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v90 & 1) != 0)
                && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v104 = v7;
        v19 = *(_QWORD *)(W32GetUserSessionState(v90, v89) + 19336);
        v100 = 49;
        goto LABEL_134;
      }
    }
  }
LABEL_158:
  if ( Buffer )
    GreDeleteFastMutex((char *)Buffer);
  if ( v8 )
    GreDeleteFastMutex(v8);
  return (unsigned int)v7;
}
