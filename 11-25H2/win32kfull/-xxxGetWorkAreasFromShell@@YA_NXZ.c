/*
 * XREFs of ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x140211020
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x14022E770 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140131080 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddddddS @ 0x1401E1200 (WPP_RECORDER_AND_TRACE_SF_ddddddddddS.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddddddd @ 0x14021049C (WPP_RECORDER_AND_TRACE_SF_qdddddddddddd.c)
 *     ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x140211BF8 (-xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140217DC8 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ?UpdateCurrent@CTopologyManager@@SA_NXZ @ 0x14021E9D8 (-UpdateCurrent@CTopologyManager@@SA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddd @ 0x1402AF1AC (WPP_RECORDER_AND_TRACE_SF_qdddddddd.c)
 *     ?DwmNotifyWorkAreaChanged@@YAXXZ @ 0x1402AF9AC (-DwmNotifyWorkAreaChanged@@YAXXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

char __fastcall xxxGetWorkAreasFromShell(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _DWORD **v3; // rcx
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // rcx
  char v7; // di
  bool v8; // bl
  bool v9; // si
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rax
  struct _SYNC_DISPLAY_CHANGE_DATA *v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rdx
  bool v20; // r14
  bool v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  bool v26; // al
  int v27; // ebx
  int v28; // edi
  int v29; // esi
  int v30; // r14d
  int v31; // r15d
  int v32; // r12d
  int v33; // r13d
  __int64 v34; // rax
  bool v35; // si
  bool v36; // r14
  int **v37; // rcx
  int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  _BYTE *v43; // rdx
  bool v44; // bl
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  bool v49; // bl
  bool v50; // si
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  char v54; // r15
  __int64 v55; // rax
  _BYTE *v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rsi
  bool v59; // si
  bool v60; // r14
  int v61; // ebx
  __int64 v62; // rax
  int v63; // r8d
  int v64; // edx
  __int64 v65; // r8
  int v66; // r12d
  int v67; // r15d
  bool v68; // si
  bool v69; // r14
  int v70; // ebx
  __int64 v71; // rax
  int v72; // r8d
  int v73; // edx
  __int64 v74; // rcx
  __int64 v75; // rcx
  bool v76; // al
  __int64 v77; // rax
  int *v78; // r8
  __int64 v79; // r8
  char *v80; // rcx
  __int64 v81; // rcx
  bool v82; // bl
  bool v83; // si
  __int64 v84; // rax
  int v85; // edx
  int v86; // r8d
  struct _UNICODE_STRING v87; // xmm0
  __int64 v88; // rcx
  int v89; // eax
  __int64 v90; // rcx
  bool v91; // al
  int v92; // ebx
  int v93; // edi
  int v94; // esi
  int v95; // r14d
  int v96; // r15d
  int v97; // r12d
  int v98; // r13d
  __int64 v99; // rax
  int v100; // r8d
  int v101; // edx
  __int64 v102; // [rsp+28h] [rbp-110h]
  char v103; // [rsp+28h] [rbp-110h]
  int v104; // [rsp+30h] [rbp-108h]
  int v105; // [rsp+38h] [rbp-100h]
  __int16 v106; // [rsp+38h] [rbp-100h]
  int v107; // [rsp+40h] [rbp-F8h]
  char v108; // [rsp+B8h] [rbp-80h]
  char v109; // [rsp+B8h] [rbp-80h]
  bool v110; // [rsp+B8h] [rbp-80h]
  char v111; // [rsp+B9h] [rbp-7Fh]
  char v112; // [rsp+B9h] [rbp-7Fh]
  char v113; // [rsp+BAh] [rbp-7Eh]
  bool v114; // [rsp+BAh] [rbp-7Eh]
  unsigned int v115; // [rsp+BCh] [rbp-7Ch]
  int v116; // [rsp+BCh] [rbp-7Ch]
  int v117; // [rsp+C0h] [rbp-78h]
  int v118; // [rsp+C4h] [rbp-74h]
  char v119; // [rsp+C8h] [rbp-70h]
  __int64 v120; // [rsp+D0h] [rbp-68h]
  int v121; // [rsp+D0h] [rbp-68h]
  __int64 v122; // [rsp+D8h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-50h] BYREF
  unsigned int v124; // [rsp+F8h] [rbp-40h] BYREF
  _BYTE v125[20]; // [rsp+FCh] [rbp-3Ch] BYREF
  unsigned __int16 v126[596]; // [rsp+110h] [rbp-28h] BYREF
  int v127; // [rsp+5B8h] [rbp+480h] BYREF
  char v128[324]; // [rsp+5BCh] [rbp+484h] BYREF
  unsigned __int16 v129[260]; // [rsp+700h] [rbp+5C8h] BYREF
  WCHAR SourceString[32]; // [rsp+908h] [rbp+7D0h] BYREF

  v3 = *(_DWORD ***)(W32GetUserSessionState(a1, a2) + 56968);
  if ( **v3 <= 4u )
    v4 = ***(_DWORD ***)(W32GetUserSessionState(v3, v2) + 56968);
  else
    v4 = 4;
  v115 = v4;
  memset_0(v125, 0, 0x4B0uLL);
  v6 = *(_QWORD *)&WPP_GLOBAL_Control;
  v7 = 1;
  v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v5);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      7,
      15,
      (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
  }
  v124 = 0;
  v13 = W32GetUserSessionState(v6, v5);
  v14 = 0LL;
  v15 = *(_QWORD *)(*(_QWORD *)(v13 + 56968) + 112LL);
  while ( 1 )
  {
    v122 = v15;
    if ( !v15 )
      break;
    v16 = *(unsigned int *)(*(_QWORD *)(v15 + 40) + 24LL);
    if ( (v16 & 1) != 0 )
    {
      if ( (unsigned int)v14 >= v4 )
      {
        v35 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
        v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v35 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v37 = *(int ***)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v14) + 56968);
          v38 = **v37;
          v40 = W32GetUserSessionState(v37, v39);
          LOBYTE(v41) = v36;
          LOBYTE(v42) = v35;
          WPP_RECORDER_AND_TRACE_SF_d(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v42,
            v41,
            *(_QWORD *)(v40 + 69160),
            2,
            7,
            16,
            (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids,
            v38);
        }
        break;
      }
      v17 = 150LL * (unsigned int)v14;
      v120 = v17 * 2;
      *(_DWORD *)&v126[v17 + 130] = *(_DWORD *)v15;
      *(_DWORD *)&v126[v17 + 128] = v15 == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v16, v14) + 56968) + 104LL);
      *(_DWORD *)&v125[v17 * 2 + 16] = *(unsigned __int16 *)(*(_QWORD *)(v15 + 40) + 60LL);
      *(_OWORD *)&v125[v17 * 2] = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 28LL);
      *(_OWORD *)&v126[v17 + 132] = *(_OWORD *)(*(_QWORD *)(v15 + 40) + 44LL);
      memset_0(v128, 0, 0x344uLL);
      v18 = *(_QWORD *)(v15 + 80);
      v127 = 840;
      DestinationString = 0LL;
      if ( !(unsigned int)DrvGetHdevName(v18, SourceString)
        || (RtlInitUnicodeString(&DestinationString, SourceString),
            LODWORD(v102) = 1,
            (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, &v127, v102, 0) < 0)
        || (int)RtlStringCchCopyW((char *)&v126[v17], 128LL, (char *)v129) < 0 )
      {
        v20 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
        v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v22 = *(_QWORD *)(v15 + 80);
          v23 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
          LOBYTE(v24) = v21;
          LOBYTE(v25) = v20;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v25,
            v24,
            *(_QWORD *)(v23 + 69160),
            2,
            7,
            17,
            (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids,
            v22);
        }
      }
      v26 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v108 = v26;
      v111 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v27 = *(_DWORD *)&v125[v17 * 2 + 16];
        v28 = *(_DWORD *)&v126[v17 + 138];
        v29 = *(_DWORD *)&v126[v17 + 136];
        v30 = *(_DWORD *)&v126[v17 + 134];
        v31 = *(_DWORD *)&v126[v17 + 132];
        v32 = *(_DWORD *)&v125[v17 * 2 + 12];
        v33 = *(_DWORD *)&v125[v17 * 2 + 8];
        v117 = *(_DWORD *)&v125[v120 + 4];
        v118 = *(_DWORD *)&v125[v120];
        v119 = v124;
        v34 = W32GetUserSessionState(v120, v19);
        WPP_RECORDER_AND_TRACE_SF_ddddddddddS(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v108,
          v111,
          *(_QWORD *)(v34 + 69160),
          v102,
          v104,
          v105,
          v107,
          v119,
          v118,
          v117,
          v33,
          v32,
          v31,
          v30,
          v29,
          v28,
          v27,
          (const char *)v126 + v120);
        v15 = v122;
        v7 = 1;
      }
      v14 = (struct _SYNC_DISPLAY_CHANGE_DATA *)++v124;
    }
    v15 = *(_QWORD *)(v15 + 56);
    v4 = v115;
  }
  if ( CallShell::xxxDisplayChangedHandler((CallShell *)&v124, v14) )
  {
    v49 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v50 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v49 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v51 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v43);
      LOBYTE(v52) = v50;
      LOBYTE(v53) = v49;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v53,
        v52,
        *(_QWORD *)(v51 + 69160),
        4,
        7,
        20,
        (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
    }
    v54 = 0;
    v55 = 0LL;
    v112 = 0;
    v116 = 0;
    if ( !v124 )
      return v54;
    while ( 1 )
    {
      v56 = &v125[300 * v55];
      v57 = ValidateHmonitorNoRip(*((unsigned int *)v56 + 70), v43);
      *(_QWORD *)&DestinationString.Length = v57;
      v58 = v57;
      if ( !v57 )
      {
        v59 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
        v60 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v59 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v61 = *((_DWORD *)v56 + 70);
          v62 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v43);
          LOBYTE(v63) = v60;
          LOBYTE(v64) = v59;
          WPP_RECORDER_AND_TRACE_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v64,
            v63,
            *(_QWORD *)(v62 + 69160),
            3,
            7,
            21,
            (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids,
            v61);
        }
        goto LABEL_134;
      }
      v65 = *(_QWORD *)(v57 + 40);
      v43 = v56;
      v66 = *((_DWORD *)v56 + 4);
      v67 = *(unsigned __int16 *)(v65 + 60);
      if ( v67 != v66 )
      {
        v68 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
        v69 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v68 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v70 = *((_DWORD *)v56 + 70);
          v71 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v43);
          LOBYTE(v72) = v69;
          LOBYTE(v73) = v68;
          WPP_RECORDER_AND_TRACE_SF_qdd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v73,
            v72,
            *(_QWORD *)(v71 + 69160),
            3,
            7,
            22,
            (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids,
            v70,
            v66,
            v67);
        }
        goto LABEL_134;
      }
      v74 = *(_QWORD *)v56 - *(_QWORD *)(v65 + 28);
      if ( *(_QWORD *)v56 == *(_QWORD *)(v65 + 28) )
        v74 = *((_QWORD *)v56 + 1) - *(_QWORD *)(v65 + 36);
      if ( v74 )
      {
        v90 = *(_QWORD *)&WPP_GLOBAL_Control;
        v91 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
        v110 = v91;
        v114 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v91 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v92 = *(_DWORD *)(v65 + 40);
          v93 = *(_DWORD *)(v65 + 36);
          v94 = *(_DWORD *)(v65 + 32);
          v95 = *(_DWORD *)(v65 + 28);
          v96 = *((_DWORD *)v43 + 3);
          v97 = *((_DWORD *)v43 + 2);
          v98 = *((_DWORD *)v43 + 1);
          v121 = *(_DWORD *)v43;
          *(_QWORD *)&DestinationString.Length = *((unsigned int *)v43 + 70);
          LOBYTE(v90) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          v99 = W32GetUserSessionState(v90, v43);
          LOBYTE(v100) = v114;
          LOBYTE(v101) = v110;
          WPP_RECORDER_AND_TRACE_SF_qdddddddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v101,
            v100,
            *(_QWORD *)(v99 + 69160),
            v102,
            v104,
            v105,
            v107,
            DestinationString.Length,
            v121,
            v98,
            v97,
            v96,
            v95,
            v94,
            v93,
            v92);
        }
        goto LABEL_134;
      }
      v75 = *(_QWORD *)&WPP_GLOBAL_Control;
      v76 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v109 = v76;
      v113 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v76 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v75) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        v77 = W32GetUserSessionState(v75, v56);
        v58 = *(_QWORD *)&DestinationString.Length;
        WPP_RECORDER_AND_TRACE_SF_qdddddddddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v109,
          v113,
          *(_QWORD *)(v77 + 69160),
          4u,
          7u,
          0x18u,
          (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
        v43 = v56;
      }
      DestinationString = 0LL;
      if ( IsRectEmptyInl((const struct tagRECT *)(v43 + 284))
        || !(unsigned int)IntersectRect(&DestinationString, (int *)v43, v78) )
      {
        goto LABEL_120;
      }
      v80 = (char *)(*(_QWORD *)&DestinationString.Length - *(_QWORD *)v79);
      if ( *(_QWORD *)&DestinationString.Length == *(_QWORD *)v79 )
        v80 = (char *)DestinationString.Buffer - *(_QWORD *)(v79 + 8);
      if ( v80 )
      {
LABEL_120:
        v82 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
        v83 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v82 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_134;
        v84 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v43);
        v106 = 25;
        v103 = 2;
      }
      else
      {
        v43 = *(_BYTE **)(v58 + 40);
        v81 = *(_QWORD *)(v43 + 44) - *(_QWORD *)v79;
        if ( !v81 )
          v81 = *(_QWORD *)(v43 + 52) - *(_QWORD *)(v79 + 8);
        if ( v81 )
        {
          v87 = *(struct _UNICODE_STRING *)(v43 + 44);
          *((_DWORD *)v43 + 11) = *(_DWORD *)v79;
          v88 = *(_QWORD *)(v58 + 40);
          v89 = *(_DWORD *)(v79 + 4);
          DestinationString = v87;
          v112 = 1;
          *(_DWORD *)(v88 + 48) = v89;
          *(_DWORD *)(*(_QWORD *)(v58 + 40) + 52LL) = *(_DWORD *)(v79 + 8);
          *(_DWORD *)(*(_QWORD *)(v58 + 40) + 56LL) = *(_DWORD *)(v79 + 12);
          v82 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
          v83 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v82 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_134;
          v84 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v43);
          v106 = 27;
        }
        else
        {
          v82 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
          v83 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( !v82 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_134;
          v84 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v43);
          v106 = 26;
        }
        v103 = 4;
      }
      LOBYTE(v86) = v83;
      LOBYTE(v85) = v82;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v85,
        v86,
        *(_QWORD *)(v84 + 69160),
        v103,
        7,
        v106,
        (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
LABEL_134:
      v55 = (unsigned int)(v116 + 1);
      v116 = v55;
      if ( (unsigned int)v55 >= v124 )
      {
        v54 = v112;
        if ( v112 )
        {
          CTopologyManager::UpdateCurrent();
          DwmNotifyWorkAreaChanged();
        }
        return v54;
      }
    }
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v7 = 0;
  }
  v44 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v45 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v43);
    LOBYTE(v46) = v44;
    LOBYTE(v47) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v47,
      v46,
      *(_QWORD *)(v45 + 69160),
      4,
      7,
      19,
      (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
  }
  return 0;
}
