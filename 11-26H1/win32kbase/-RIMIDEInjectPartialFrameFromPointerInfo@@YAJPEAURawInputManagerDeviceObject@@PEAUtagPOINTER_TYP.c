/*
 * XREFs of ?RIMIDEInjectPartialFrameFromPointerInfo@@YAJPEAURawInputManagerDeviceObject@@PEAUtagPOINTER_TYPE_INFO@@III@Z @ 0x14020653C
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1401BB6B8 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMIDEInjectDeviceInput @ 0x140154A10 (RIMIDEInjectDeviceInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIDEFillContactUsageValues @ 0x1402089B8 (RIMIDEFillContactUsageValues.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x14020A270 (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
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
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r13
  unsigned int v15; // eax
  unsigned int v16; // ebx
  bool v17; // r14
  int v18; // edx
  int v19; // r8d
  __int64 v20; // r9
  __int64 v21; // rax
  char *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int64 v31; // rax
  char v32; // di
  __int64 v33; // rax
  int v34; // edx
  int v35; // r8d
  unsigned int v36; // r10d
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  char v42; // di
  int v43; // edx
  int v44; // r8d
  __int64 v45; // r9
  __int64 v46; // rcx
  char v47; // di
  __int64 v48; // rax
  int v49; // edx
  int v50; // r8d
  unsigned int v51; // edx
  __int64 v52; // rax
  __int64 v53; // rcx
  unsigned int v54; // edx
  __int64 v55; // rcx
  char v56; // di
  int v57; // edx
  int v58; // r8d
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rcx
  char v62; // di
  __int64 v63; // rax
  int v64; // edx
  int v65; // r8d
  __int64 v66; // rax
  __int64 v67; // rcx
  char v68; // di
  __int64 v69; // rax
  int v70; // edx
  int v71; // r8d
  __int64 v72; // rax
  __int64 v73; // rcx
  char v74; // di
  bool v75; // r13
  __int64 v76; // rax
  int v77; // r8d
  int v78; // edx
  int v79; // ecx
  bool v80; // bp
  int v81; // edx
  int v82; // r8d
  __int64 v83; // r9
  bool v84; // bp
  __int64 UserSessionState; // rax
  int v86; // r8d
  int v87; // edx
  __int16 v89; // [rsp+30h] [rbp-128h]
  __int16 v90; // [rsp+30h] [rbp-128h]
  __int16 v91; // [rsp+30h] [rbp-128h]
  __int16 v92; // [rsp+30h] [rbp-128h]
  char v93; // [rsp+40h] [rbp-118h]
  unsigned int v94; // [rsp+50h] [rbp-108h]
  bool v95; // [rsp+54h] [rbp-104h]
  unsigned int v96; // [rsp+58h] [rbp-100h] BYREF
  PVOID Buffer; // [rsp+60h] [rbp-F8h] BYREF
  _OWORD v98[9]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v99; // [rsp+100h] [rbp-58h]
  bool v103; // [rsp+170h] [rbp+18h]
  bool v104; // [rsp+170h] [rbp+18h]
  bool v105; // [rsp+170h] [rbp+18h]
  bool v106; // [rsp+170h] [rbp+18h]
  bool v107; // [rsp+170h] [rbp+18h]

  v5 = a3;
  Buffer = 0LL;
  v96 = 0;
  v7 = 0;
  v8 = 0LL;
  LODWORD(v9) = 0;
  if ( a3 )
  {
    if ( a3 <= 0x100 )
      goto LABEL_6;
    v10 = 1684;
  }
  else
  {
    v10 = 1683;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, v10);
LABEL_6:
  if ( !(unsigned int)BuildValueDeviceUsages(*(_DWORD *)a2, (struct tagINPUT_INJECTION_VALUE **)&Buffer, &v96) )
  {
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    {
      LOBYTE(v7) = 1;
    }
    v80 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_157;
    v83 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v12) + 19368);
    v92 = 50;
    goto LABEL_156;
  }
  v14 = v5 * v96;
  if ( v14 > 0xFFFFFFFF )
  {
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    {
      LOBYTE(v7) = 1;
    }
    v84 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v12);
      LOBYTE(v86) = v84;
      LOBYTE(v87) = v7;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v87,
        v86,
        *(_QWORD *)(UserSessionState + 19368),
        2,
        1,
        37,
        (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
        v5);
    }
    goto LABEL_157;
  }
  v15 = *(_DWORD *)a2;
  v11 = 3LL;
  if ( *(_DWORD *)a2 == 2 )
  {
    v16 = v96 - 2;
LABEL_10:
    v96 = v16;
    goto LABEL_15;
  }
  if ( v15 == 3 )
  {
    v16 = v96 - 1;
    goto LABEL_10;
  }
  if ( v15 != 5 )
  {
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    {
      LOBYTE(v7) = 1;
    }
    v80 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_157;
    v83 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 3, v12) + 19368);
    v92 = 38;
LABEL_156:
    LOBYTE(v82) = v80;
    LOBYTE(v81) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v81,
      v82,
      v83,
      2,
      1,
      v92,
      (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids);
LABEL_157:
    v7 = -1073741811;
    goto LABEL_158;
  }
  v96 -= 5;
LABEL_15:
  v8 = (char *)Win32AllocPoolZInitImpl(256LL, 12LL * (unsigned int)v14, 0x6A6E6952u);
  if ( !v8 )
  {
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    {
      LOBYTE(v9) = 1;
    }
    v7 = -1073741801;
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v93 = 23;
      v20 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v12) + 19368);
      v89 = 39;
LABEL_134:
      LOBYTE(v19) = v17;
      LOBYTE(v18) = v9;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v19,
        v20,
        2,
        1,
        v89,
        (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids,
        v93);
      goto LABEL_158;
    }
    goto LABEL_158;
  }
  v21 = 0LL;
  v94 = 0;
  if ( a3 )
  {
    while ( v7 >= 0 )
    {
      v22 = (char *)a2 + 152 * v21;
      v23 = *((_OWORD *)v22 + 1);
      v98[0] = *(_OWORD *)v22;
      v24 = *((_OWORD *)v22 + 2);
      v98[1] = v23;
      v25 = *((_OWORD *)v22 + 3);
      v98[2] = v24;
      v26 = *((_OWORD *)v22 + 4);
      v98[3] = v25;
      v27 = *((_OWORD *)v22 + 5);
      v98[4] = v26;
      v28 = *((_OWORD *)v22 + 6);
      v98[5] = v27;
      v29 = *((_OWORD *)v22 + 7);
      v98[6] = v28;
      v30 = *((_OWORD *)v22 + 8);
      v31 = *((_QWORD *)v22 + 18);
      v98[7] = v29;
      v98[8] = v30;
      v99 = v31;
      if ( (unsigned int)RIMIDEFillContactUsageValues(*((_QWORD *)a1 + 66), Buffer, v96, v98) )
      {
        v12 = v96;
        v36 = 0;
        if ( v96 )
        {
          v11 = (__int64)Buffer;
          v13 = v94;
          do
          {
            if ( (unsigned int)v9 >= (unsigned int)v14 )
              break;
            ++v36;
            v37 = (unsigned int)v9;
            LODWORD(v9) = v9 + 1;
            v38 = 3 * v37;
            *(_QWORD *)&v8[4 * v38] = *(_QWORD *)v11;
            *(_DWORD *)&v8[4 * v38 + 8] = *(_DWORD *)(v11 + 8);
            *(_WORD *)&v8[4 * v38 + 8] = v94 + 1;
            *(_DWORD *)(v11 + 4) = 0;
            v11 += 12LL;
          }
          while ( v36 < (unsigned int)v12 );
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v32 = 0;
        }
        v95 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v33 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v12);
          LOBYTE(v34) = v32;
          LOBYTE(v35) = v95;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v34,
            v35,
            *(_QWORD *)(v33 + 19368),
            2,
            1,
            40,
            (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids);
        }
        v7 = -1073741811;
      }
      v21 = v94 + 1;
      v94 = v21;
      if ( (unsigned int)v21 >= a3 )
      {
        if ( v7 < 0 )
          goto LABEL_158;
        goto LABEL_40;
      }
    }
    goto LABEL_158;
  }
LABEL_40:
  v13 = (__int64)a2;
  if ( *(_DWORD *)a2 != 2 )
    goto LABEL_60;
  v11 = (unsigned int)(v9 + 1);
  if ( (unsigned int)v11 > (unsigned int)v14 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v42 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v42 = 0;
    }
    v103 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v42 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_59;
    v45 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v12) + 19368);
    v90 = 41;
  }
  else
  {
    v39 = (unsigned int)v9;
    v9 = (unsigned int)v11;
    v11 = (unsigned int)(v11 + 1);
    v40 = 3 * v39;
    *(_DWORD *)&v8[4 * v40] = 5505037;
    *(_DWORD *)&v8[4 * v40 + 4] = a4;
    *(_WORD *)&v8[4 * v40 + 8] = 0;
    if ( (unsigned int)v11 <= (unsigned int)v14 )
    {
      v12 = a5;
      v41 = 3 * v9;
      LODWORD(v14) = v11;
      *(_DWORD *)&v8[4 * v41] = 5636109;
      *(_DWORD *)&v8[4 * v41 + 4] = a5;
      *(_WORD *)&v8[4 * v41 + 8] = 0;
      goto LABEL_61;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v42 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v42 = 0;
    }
    v103 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v42 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_59;
    v45 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v12) + 19368);
    v90 = 42;
  }
  LOBYTE(v43) = v42;
  LOBYTE(v44) = v103;
  WPP_RECORDER_AND_TRACE_SF_(
    *((_QWORD *)WPP_GLOBAL_Control + 3),
    v43,
    v44,
    v45,
    2,
    1,
    v90,
    (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids);
  v13 = (__int64)a2;
LABEL_59:
  v7 = -1073741811;
LABEL_60:
  v12 = a5;
LABEL_61:
  if ( *(_DWORD *)v13 == 3 )
  {
    v11 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v11 > (unsigned int)v14 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v47 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v47 = 0;
      }
      v104 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v48 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, v12);
        LOBYTE(v49) = v47;
        LOBYTE(v50) = v104;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v49,
          v50,
          *(_QWORD *)(v48 + 19368),
          2,
          1,
          43,
          (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids);
        v13 = (__int64)a2;
      }
      v7 = -1073741811;
    }
    else
    {
      LODWORD(v14) = v9 + 1;
      v46 = 3LL * (unsigned int)v9;
      *(_DWORD *)&v8[4 * v46] = 5636109;
      *(_DWORD *)&v8[4 * v46 + 4] = v12;
      *(_WORD *)&v8[4 * v46 + 8] = 0;
    }
  }
  if ( *(_DWORD *)v13 == 5 )
  {
    v51 = v9 + 1;
    if ( (int)v9 + 1 > (unsigned int)v14 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v56 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v56 = 0;
      }
      v105 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v56 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_92;
      v59 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v51, v12) + 19368);
      v91 = 44;
    }
    else
    {
      v52 = (unsigned int)v9;
      v9 = v51;
      v53 = 3 * v52;
      *(_DWORD *)&v8[4 * v53] = 5505037;
      *(_DWORD *)&v8[4 * v53 + 4] = a4;
      *(_WORD *)&v8[4 * v53 + 8] = 0;
      if ( v7 < 0 )
      {
LABEL_93:
        if ( (int)v9 + 1 > (unsigned int)v14 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v62 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v62 = 0;
          }
          v106 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v62 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v63 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (int)v9 + 1, v12);
            LOBYTE(v64) = v62;
            LOBYTE(v65) = v106;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v64,
              v65,
              *(_QWORD *)(v63 + 19368),
              2,
              1,
              46,
              (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids);
          }
          v13 = (__int64)a2;
          v7 = -1073741811;
        }
        else
        {
          v60 = (unsigned int)v9;
          LODWORD(v9) = v9 + 1;
          v61 = 3 * v60;
          *(_DWORD *)&v8[4 * v61] = 65545;
          LODWORD(v60) = (*(_DWORD *)(v13 + 20) >> 4) & 1;
          *(_WORD *)&v8[4 * v61 + 8] = 0;
          *(_DWORD *)&v8[4 * v61 + 4] = v60;
        }
        if ( (int)v9 + 1 > (unsigned int)v14 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v68 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v68 = 0;
          }
          v107 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v68 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v69 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (int)v9 + 1, v12);
            LOBYTE(v70) = v68;
            LOBYTE(v71) = v107;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v70,
              v71,
              *(_QWORD *)(v69 + 19368),
              2,
              1,
              47,
              (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids);
          }
          v13 = (__int64)a2;
          v7 = -1073741811;
        }
        else
        {
          v66 = (unsigned int)v9;
          LODWORD(v9) = v9 + 1;
          v67 = 3 * v66;
          *(_DWORD *)&v8[4 * v67] = 131081;
          LODWORD(v66) = (*(_DWORD *)(v13 + 20) >> 5) & 1;
          *(_WORD *)&v8[4 * v67 + 8] = 0;
          *(_DWORD *)&v8[4 * v67 + 4] = v66;
        }
        v11 = (unsigned int)(v9 + 1);
        v12 = 2LL;
        if ( (unsigned int)v11 > (unsigned int)v14 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v74 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
          {
            v74 = 0;
          }
          v75 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v74 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v76 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v11, 2);
            LOBYTE(v77) = v75;
            LOBYTE(v78) = v74;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v78,
              v77,
              *(_QWORD *)(v76 + 19368),
              2,
              1,
              48,
              (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids);
          }
          v7 = -1073741811;
        }
        else
        {
          v72 = (unsigned int)v9;
          LODWORD(v9) = v9 + 1;
          v73 = 3 * v72;
          *(_DWORD *)&v8[4 * v73] = 196617;
          LODWORD(v72) = (*(_DWORD *)(v13 + 20) >> 6) & 1;
          *(_WORD *)&v8[4 * v73 + 8] = 0;
          *(_DWORD *)&v8[4 * v73 + 4] = v72;
        }
        LODWORD(v14) = v9;
        goto LABEL_124;
      }
      v54 = v51 + 1;
      if ( v54 <= (unsigned int)v14 )
      {
        v55 = 3 * v9;
        LODWORD(v9) = v54;
        *(_DWORD *)&v8[4 * v55] = 5636109;
        *(_DWORD *)&v8[4 * v55 + 4] = a5;
        *(_WORD *)&v8[4 * v55 + 8] = 0;
        goto LABEL_93;
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v56 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v56 = 0;
      }
      v105 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v56 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_92:
        v7 = -1073741811;
        goto LABEL_93;
      }
      v59 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v54, v12) + 19368);
      v91 = 45;
    }
    LOBYTE(v57) = v56;
    LOBYTE(v58) = v105;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v57,
      v58,
      v59,
      2,
      1,
      v91,
      (__int64)&WPP_5940d7f453ab3f2490058f6b99ed3f44_Traceguids);
    v13 = (__int64)a2;
    goto LABEL_92;
  }
LABEL_124:
  if ( v7 >= 0 )
  {
    v7 = RIMIDEInjectDeviceInput((__int64)a1, (__int64)v8, v14, 5u);
    if ( v7 < 0 )
    {
      LOBYTE(v9) = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                && (v79 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v79 & 1) != 0)
                && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v93 = v7;
        v20 = *(_QWORD *)(W32GetUserSessionState(v79, v11, v12) + 19368);
        v89 = 49;
        goto LABEL_134;
      }
    }
  }
LABEL_158:
  if ( Buffer )
    GreDeleteFastMutex((char *)Buffer, v11, v12, v13);
  if ( v8 )
    GreDeleteFastMutex(v8, v11, v12, v13);
  return (unsigned int)v7;
}
