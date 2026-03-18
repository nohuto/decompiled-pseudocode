/*
 * XREFs of GetWndScrollBarInfoCrossProcess @ 0x14021B954
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_679956ec8699b4d63e5c901704edddc1___ @ 0x140292578 (W32AttachToProcessAndExecute__lambda_679956ec8699b4d63e5c901704edddc1___.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     GetRect @ 0x140052B80 (GetRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddddddd @ 0x14021049C (WPP_RECORDER_AND_TRACE_SF_qdddddddddddd.c)
 *     GETCLIENTWNDINFO @ 0x14026E78C (GETCLIENTWNDINFO.c)
 *     GetObjectIdString @ 0x1402E1B20 (GetObjectIdString.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsllll @ 0x1402E1D50 (WPP_RECORDER_AND_TRACE_SF_qsllll.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddddddddddd @ 0x1402E2088 (WPP_RECORDER_AND_TRACE_SF_ddddddddddddddd.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

char __fastcall GetWndScrollBarInfoCrossProcess(__int64 a1, unsigned int a2, int *a3)
{
  int *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool v6; // si
  bool v7; // di
  int v8; // ebx
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  char v12; // r13
  char v13; // cl
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  int v19; // r14d
  __int64 v20; // rcx
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v24; // rdx
  volatile void *v25; // rcx
  __int64 CurrentProcessWow64Process; // rax
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // r8
  int v30; // edx
  int v31; // ecx
  char v32; // cl
  int v33; // esi
  int v34; // r15d
  unsigned int DpiForSystem; // eax
  unsigned int v36; // eax
  int v37; // r12d
  int v38; // r13d
  unsigned int v39; // eax
  int v40; // eax
  char *v41; // rax
  int v42; // r14d
  unsigned int v43; // eax
  int DpiDependentMetric; // eax
  int v45; // ecx
  unsigned int v46; // eax
  int v47; // r9d
  _DWORD *v48; // r10
  INT v49; // r11d
  INT v50; // r8d
  int v51; // eax
  __int64 v52; // rdx
  int v53; // ecx
  INT v54; // eax
  INT v55; // r11d
  INT v56; // r12d
  int v57; // eax
  INT v58; // r8d
  INT v59; // eax
  unsigned int v60; // eax
  char v61; // al
  __int64 v62; // rax
  int v63; // r12d
  int v64; // r8d
  int v65; // edx
  __int64 v66; // rcx
  int v67; // r11d
  unsigned int v68; // r10d
  int v69; // ecx
  int v70; // r8d
  int v71; // r9d
  int v72; // eax
  int v73; // edx
  int v74; // eax
  char v75; // cl
  __int64 v76; // rax
  int v77; // edx
  int v78; // ecx
  __int64 v79; // rdx
  bool v80; // bl
  __int64 v81; // rax
  int v82; // r8d
  int v83; // edx
  int v84; // [rsp+20h] [rbp-1D8h]
  int v85; // [rsp+28h] [rbp-1D0h]
  int v86; // [rsp+30h] [rbp-1C8h]
  void *v87; // [rsp+38h] [rbp-1C0h]
  char v88; // [rsp+A8h] [rbp-150h]
  char v89; // [rsp+C0h] [rbp-138h]
  char v90; // [rsp+C0h] [rbp-138h]
  char v91; // [rsp+C0h] [rbp-138h]
  bool v92; // [rsp+C1h] [rbp-137h]
  char v93; // [rsp+C1h] [rbp-137h]
  char v94; // [rsp+C1h] [rbp-137h]
  int v95; // [rsp+C4h] [rbp-134h]
  unsigned int v96; // [rsp+C4h] [rbp-134h]
  int v97; // [rsp+C8h] [rbp-130h]
  INT v98; // [rsp+C8h] [rbp-130h]
  int v99; // [rsp+CCh] [rbp-12Ch]
  int v100; // [rsp+D0h] [rbp-128h]
  int v101; // [rsp+D4h] [rbp-124h]
  int v102; // [rsp+D8h] [rbp-120h]
  int v103; // [rsp+DCh] [rbp-11Ch]
  INT v105; // [rsp+E4h] [rbp-114h]
  char v106; // [rsp+E8h] [rbp-110h]
  __int128 v107; // [rsp+F0h] [rbp-108h] BYREF
  int v108; // [rsp+100h] [rbp-F8h]
  int v109; // [rsp+104h] [rbp-F4h]
  volatile void *Address; // [rsp+108h] [rbp-F0h]
  __int64 v111; // [rsp+110h] [rbp-E8h]
  int *v112; // [rsp+118h] [rbp-E0h]
  INT v113; // [rsp+120h] [rbp-D8h]
  __int128 v114; // [rsp+140h] [rbp-B8h] BYREF
  __int128 v115; // [rsp+150h] [rbp-A8h] BYREF
  int v116; // [rsp+160h] [rbp-98h]
  char v117[16]; // [rsp+170h] [rbp-88h] BYREF
  int v118; // [rsp+180h] [rbp-78h]
  int v119; // [rsp+184h] [rbp-74h]
  int v120; // [rsp+188h] [rbp-70h]
  int v121; // [rsp+18Ch] [rbp-6Ch]
  unsigned int v122; // [rsp+194h] [rbp-64h]
  int v123; // [rsp+198h] [rbp-60h]
  int v124; // [rsp+19Ch] [rbp-5Ch]
  unsigned int v125; // [rsp+1A0h] [rbp-58h]
  unsigned int v126; // [rsp+1A4h] [rbp-54h]

  v3 = a3;
  v112 = a3;
  v4 = a1;
  v111 = a1;
  memset_0(v117, 0, 0x40uLL);
  v114 = 0LL;
  v115 = 0LL;
  v116 = 0;
  if ( *v3 == 60 )
  {
    *(_OWORD *)(v3 + 9) = 0LL;
    *(_QWORD *)(v3 + 13) = 0LL;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v13 = 0;
      v12 = 1;
    }
    else
    {
      v12 = 1;
      v13 = 1;
    }
    v89 = v13;
    v92 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      GetObjectIdString(a2);
      UserSessionState = W32GetUserSessionState(v15, v14);
      v87 = &WPP_050a6281044d36281c2688598113f136_Traceguids;
      LOWORD(v86) = 11;
      LOBYTE(v17) = v92;
      LOBYTE(v18) = v89;
      WPP_RECORDER_AND_TRACE_SF_qsllll(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v18,
        v17,
        *(_QWORD *)(UserSessionState + 69160));
      v3 = v112;
      v4 = v111;
    }
    if ( a2 == -5 )
    {
      v19 = 1;
      v102 = 1;
      v20 = *(_QWORD *)(v4 + 40);
      if ( (*(_BYTE *)(v20 + 30) & 0x20) != 0 )
      {
        v21 = (*(_BYTE *)(v20 + 16) & 2) == 0;
        goto LABEL_25;
      }
    }
    else
    {
      if ( a2 != -6 )
      {
        UserSetLastError(87);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
        {
          v12 = 0;
        }
        v80 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v81 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v79);
          LOBYTE(v82) = v80;
          LOBYTE(v83) = v12;
          WPP_RECORDER_AND_TRACE_SF_d(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v83,
            v82,
            *(_QWORD *)(v81 + 69160),
            2,
            9,
            12,
            (__int64)&WPP_050a6281044d36281c2688598113f136_Traceguids,
            a2);
        }
        return 0;
      }
      v19 = 0;
      v102 = 0;
      v22 = *(_QWORD *)(v4 + 40);
      if ( (*(_BYTE *)(v22 + 30) & 0x10) != 0 )
      {
        v21 = (*(_BYTE *)(v22 + 16) & 4) == 0;
LABEL_25:
        if ( v21 )
          v3[9] |= 0x10000u;
LABEL_27:
        if ( (v3[9] & 0x8000) != 0 )
          return 1;
        v25 = *(volatile void **)(GETCLIENTWNDINFO(v4) + 32);
        Address = v25;
        if ( v25 )
        {
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v25, v24);
          ProbeForRead(Address, 0x24uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
          v114 = *(_OWORD *)Address;
          v115 = *((_OWORD *)Address + 1);
          v116 = *((_DWORD *)Address + 8);
        }
        if ( v19 )
          v109 = ((int)v114 >> 2) & 3;
        else
          v109 = v114 & 3;
        if ( (v3[9] & 0x10000) != 0 )
        {
          v68 = v126;
          v71 = v121;
          v70 = v120;
          v73 = v119;
          v42 = v118;
          v67 = v102;
        }
        else
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
            || (LOBYTE(v24) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            LOBYTE(v24) = 0;
          }
          v93 = v24;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v27 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
          {
            v27 = 0;
          }
          v90 = v27;
          if ( (_BYTE)v24 || v27 )
          {
            v28 = W32GetUserSessionState(*(unsigned int *)(*(_QWORD *)(v4 + 40) + 104LL), v24);
            WPP_RECORDER_AND_TRACE_SF_qdddddddddddd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v93,
              v90,
              *(_QWORD *)(v28 + 69160),
              5u,
              9u,
              0xEu,
              (__int64)&WPP_050a6281044d36281c2688598113f136_Traceguids);
            v3 = v112;
            v4 = v111;
            v19 = v102;
          }
          v107 = 0LL;
          GetRect(v4, (__int64)&v107, 33);
          v29 = *(_QWORD *)(v4 + 40);
          if ( (*(_BYTE *)(v29 + 26) & 0x40) != 0 )
          {
            v30 = *(_DWORD *)(v29 + 96) - *(_DWORD *)(v29 + 88);
            v31 = v107;
            LODWORD(v107) = v30 - DWORD2(v107);
            DWORD2(v107) = v30 - v31;
          }
          if ( v19 )
          {
            v32 = *(_BYTE *)(v29 + 16) & 2;
            if ( (*(_BYTE *)(v29 + 25) & 0x40) != 0 )
            {
              v33 = v107;
              v34 = v107;
              if ( v32 )
              {
                DpiForSystem = GetDpiForSystem();
                v34 -= GetDpiDependentMetric(0, DpiForSystem);
              }
            }
            else
            {
              v33 = DWORD2(v107);
              v34 = DWORD2(v107);
              if ( v32 )
              {
                v36 = GetDpiForSystem();
                v33 += GetDpiDependentMetric(0, v36);
              }
            }
            v37 = HIDWORD(v107);
            v38 = DWORD1(v107);
            v97 = DWORD1(v107);
          }
          else
          {
            v37 = HIDWORD(v107);
            v38 = HIDWORD(v107);
            v97 = HIDWORD(v107);
            if ( (*(_BYTE *)(v29 + 16) & 4) != 0 )
            {
              v39 = GetDpiForSystem();
              v37 += GetDpiDependentMetric(1, v39);
            }
            v33 = DWORD2(v107);
            v34 = v107;
          }
          v40 = DWORD1(v114);
          if ( v19 )
            v40 = DWORD1(v115);
          v99 = v40;
          v41 = (char *)&v114 + 4;
          if ( v19 )
            v41 = (char *)&v115 + 4;
          *(_QWORD *)&v107 = v41;
          if ( v19 )
          {
            v42 = v38;
            v100 = v37;
            v103 = v34;
            v101 = v33;
            v43 = GetDpiForSystem();
            DpiDependentMetric = GetDpiDependentMetric(10, v43);
            v45 = v97;
          }
          else
          {
            v42 = v34;
            v100 = v33;
            v103 = v38;
            v101 = v37;
            v46 = GetDpiForSystem();
            DpiDependentMetric = GetDpiDependentMetric(11, v46);
            v37 = v33;
            v45 = v34;
            v34 = v38;
            LOBYTE(v33) = v101;
          }
          v47 = DpiDependentMetric;
          v95 = DpiDependentMetric;
          v106 = DpiDependentMetric;
          v48 = (_DWORD *)v107;
          v108 = *(_DWORD *)(v107 + 12);
          v49 = *(_DWORD *)(v107 + 8);
          v105 = v49;
          LODWORD(Address) = *(_DWORD *)(v107 + 4);
          v50 = (_DWORD)Address - v99 + 1;
          v113 = v50;
          v51 = (v37 - v45) / 2;
          if ( v51 >= v47 )
            v51 = v47;
          LODWORD(v112) = v51;
          v52 = (unsigned int)(v51 + v45);
          v122 = v51 + v45;
          v53 = v37 - v51;
          v123 = v37 - v51;
          v54 = v47;
          v98 = v47;
          if ( v49 )
          {
            v98 = v47;
            if ( (_DWORD)Address - v99 != -1 )
            {
              v55 = EngMulDiv(v53 - v52, v49, v50);
              if ( v95 / 2 > v55 )
                v55 = v95 / 2;
              v106 = v55;
              v54 = v55;
              v98 = v55;
              v50 = v113;
              v48 = (_DWORD *)v107;
              v52 = v122;
              v49 = v105;
            }
          }
          v56 = v37 - (_DWORD)v112 - v54 - v52;
          v57 = 1;
          if ( v49 )
            v57 = v49;
          v58 = v50 - v57;
          if ( v58 )
          {
            v59 = EngMulDiv(v108 - *v48, v56, v58);
            v52 = v59 + v122;
            v96 = v59 + v122;
            v60 = v59 + v122;
          }
          else
          {
            v60 = v52 - 1;
            v96 = v52 - 1;
          }
          v125 = v98 + v60;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
            || (LOBYTE(v52) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            LOBYTE(v52) = 0;
          }
          v91 = v52;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v61 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
          {
            v61 = 0;
          }
          v94 = v61;
          if ( (_BYTE)v52 || v61 )
          {
            v62 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v52);
            v88 = v56;
            v63 = v100;
            LOBYTE(v64) = v94;
            LOBYTE(v65) = v91;
            WPP_RECORDER_AND_TRACE_SF_ddddddddddddddd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v65,
              v64,
              *(_QWORD *)(v62 + 69160),
              v84,
              v85,
              v86,
              (_DWORD)v87,
              v99,
              (char)Address,
              v105,
              v108,
              v100,
              v34,
              v33,
              v106,
              v122,
              v123,
              v124,
              v125,
              v96,
              v88,
              v122);
          }
          else
          {
            v63 = v100;
          }
          v4 = v111;
          v66 = *(_QWORD *)(v111 + 40);
          v67 = v102;
          v68 = v96;
          if ( (*(_BYTE *)(v66 + 26) & 0x40) == 0 )
          {
            v70 = v103;
            v71 = v101;
            goto LABEL_93;
          }
          v69 = *(_DWORD *)(v66 + 96) - *(_DWORD *)(v66 + 88);
          if ( v102 )
          {
            v70 = v69 - v101;
            v71 = v69 - v34;
LABEL_93:
            v73 = v100;
            goto LABEL_94;
          }
          v72 = v42;
          v42 = v69 - v63;
          v73 = v69 - v72;
          v70 = v103;
          v71 = v101;
        }
LABEL_94:
        v74 = v109;
        if ( (v109 & 1) != 0 )
        {
          v3[10] |= 1u;
          v3[11] |= 1u;
        }
        if ( (v74 & 2) != 0 )
        {
          v3[14] |= 1u;
          v3[13] |= 1u;
        }
        if ( v74 == 3 )
          v3[9] |= 1u;
        v75 = *(_BYTE *)(*(_QWORD *)(v4 + 40) + 22LL);
        if ( (v75 & 0x10) != 0 && (a2 != -5 || (v75 & 0x20) != 0) )
        {
          if ( (v75 & 1) != 0 )
            v3[10] |= 8u;
          if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 22LL) & 2) != 0 )
            v3[11] |= 8u;
          if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 22LL) & 4) != 0 )
            v3[13] |= 8u;
          if ( (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 22LL) & 8) != 0 )
            v3[14] |= 8u;
        }
        if ( (v3[9] & 0x10000) == 0 )
        {
          if ( v67 )
          {
            v3[1] = v70;
            v3[2] = v42;
            v3[3] = v71;
            v3[4] = v73;
          }
          else
          {
            v3[1] = v42;
            v3[2] = v70;
            v3[3] = v73;
            v3[4] = v71;
            v70 = v42;
          }
          v76 = *(_QWORD *)(v4 + 40);
          v77 = *(_DWORD *)(v76 + 92);
          v78 = *(_DWORD *)(v76 + 88);
          v3[1] = v70 + v78;
          v3[3] += v78;
          v3[4] += v77;
          v3[2] += v77;
          v3[5] = v122 - v42;
          v3[6] = v68 - v42;
          v3[7] = v125 - v42;
          if ( v68 == v122 )
            v3[11] |= 0x8000u;
          if ( v125 == v123 )
            v3[13] |= 0x8000u;
        }
        return 1;
      }
    }
    v3[9] |= 0x8000u;
    goto LABEL_27;
  }
  UserSetLastError(87);
  v6 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v8 = *v3;
    v9 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
    LOBYTE(v10) = v7;
    LOBYTE(v11) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v11,
      v10,
      *(_QWORD *)(v9 + 69160),
      2,
      9,
      10,
      (__int64)&WPP_050a6281044d36281c2688598113f136_Traceguids,
      v8);
  }
  return 0;
}
