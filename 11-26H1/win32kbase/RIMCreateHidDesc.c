/*
 * XREFs of RIMCreateHidDesc @ 0x1400780EC
 * Callers:
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     RIMHidGetUsageAndPage @ 0x140079148 (RIMHidGetUsageAndPage.c)
 *     RIMHidGetVendorAndProductID @ 0x14007937C (RIMHidGetVendorAndProductID.c)
 *     rimCheckForExplicitRimConflictInProcess @ 0x1400795B0 (rimCheckForExplicitRimConflictInProcess.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x14007966C (rimIsExplicitRimUsagesMatchingUsages.c)
 *     IsProcessHidRawInputSupported @ 0x140079B40 (IsProcessHidRawInputSupported.c)
 *     RIMHidGetCaps @ 0x140079BD4 (RIMHidGetCaps.c)
 *     RIMHidGetPreparsedData @ 0x140079FB0 (RIMHidGetPreparsedData.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMAllocateHidConfigDesc @ 0x1400EFCEC (RIMAllocateHidConfigDesc.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x140130784 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x140130948 (RIMSearchHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1401316BC (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMFreeHidDesc @ 0x1401323EC (RIMFreeHidDesc.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x140132544 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1401690CC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x14016CD20 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDq @ 0x1401830EC (WPP_RECORDER_AND_TRACE_SF_DDq.c)
 *     RIMAllocateHidDesc @ 0x1401AE930 (RIMAllocateHidDesc.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1401BC890 (ApiSetInkProcessorIsInkDevice.c)
 *     RIMIDECreateHIDDesc @ 0x14020749C (RIMIDECreateHIDDesc.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall RIMCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // edx
  int v7; // r8d
  char v8; // si
  bool v9; // r14
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  CTouchProcessor **v13; // rdx
  char v14; // di
  int v15; // r14d
  unsigned __int16 v16; // si
  bool v17; // r15
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  char v21; // di
  bool v22; // r15
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  int v26; // edx
  int v27; // r8d
  bool v29; // di
  int v30; // edx
  int v31; // r8d
  __int64 v32; // rax
  int v33; // edx
  int v34; // r8d
  char *v35; // r15
  int v36; // edx
  int v37; // ecx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // r12d
  bool v41; // r12
  CTouchProcessor *v42; // rdx
  int v43; // ecx
  void *v44; // r12
  __int64 v45; // rax
  int v46; // ecx
  __int64 v47; // rdi
  int v48; // r8d
  CTouchProcessor **v49; // rdx
  bool v50; // r15
  bool v51; // r12
  __int64 v52; // rcx
  bool v53; // bl
  bool v54; // si
  int v55; // edx
  int v56; // r8d
  __int64 v57; // r9
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  __int64 PreparsedData; // rax
  int v65; // edx
  int v66; // r8d
  int v67; // edx
  int v68; // ecx
  int Caps; // r14d
  bool v70; // si
  bool v71; // r14
  int v72; // ecx
  bool v73; // bl
  bool v74; // bl
  bool v75; // di
  __int64 v76; // rax
  int v77; // r8d
  int v78; // edx
  bool v79; // di
  __int64 v80; // rax
  __int64 v81; // rax
  bool v82; // si
  int v83; // edx
  int v84; // r8d
  __int64 v85; // r9
  bool v86; // si
  int v87; // edx
  int v88; // r8d
  __int64 v89; // r9
  __int64 v90; // rax
  int v91; // r8d
  int v92; // edx
  bool v93; // si
  __int64 v94; // rax
  int v95; // edx
  int v96; // r8d
  __int64 v97; // r9
  bool v98; // di
  __int64 v99; // rax
  int v100; // edx
  int v101; // r8d
  bool v102; // bl
  bool v103; // di
  __int64 v104; // rax
  int v105; // r8d
  int v106; // edx
  bool v107; // r15
  bool v108; // r12
  __int64 v109; // rax
  int v110; // r8d
  int v111; // edx
  int v112; // [rsp+20h] [rbp-B9h]
  char v113; // [rsp+20h] [rbp-B9h]
  int v114; // [rsp+28h] [rbp-B1h]
  __int16 v115; // [rsp+30h] [rbp-A9h]
  __int16 v116; // [rsp+30h] [rbp-A9h]
  __int16 v117; // [rsp+30h] [rbp-A9h]
  __int16 v118; // [rsp+30h] [rbp-A9h]
  char v119; // [rsp+40h] [rbp-99h]
  char v120; // [rsp+40h] [rbp-99h]
  char v121; // [rsp+40h] [rbp-99h]
  char v122; // [rsp+40h] [rbp-99h]
  char v123; // [rsp+48h] [rbp-91h]
  char v124; // [rsp+48h] [rbp-91h]
  char v125; // [rsp+48h] [rbp-91h]
  _WORD v126[2]; // [rsp+60h] [rbp-79h] BYREF
  unsigned __int16 v127; // [rsp+64h] [rbp-75h] BYREF
  __int16 v128; // [rsp+68h] [rbp-71h] BYREF
  PVOID Object; // [rsp+70h] [rbp-69h] BYREF
  __int64 v130; // [rsp+78h] [rbp-61h] BYREF
  PVOID v131; // [rsp+80h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-51h] BYREF
  __int64 v133; // [rsp+90h] [rbp-49h]
  __int64 v134; // [rsp+98h] [rbp-41h] BYREF
  int v135; // [rsp+A0h] [rbp-39h]
  _WORD v136[32]; // [rsp+B0h] [rbp-29h] BYREF

  v131 = 0LL;
  Object = 0LL;
  v133 = 0LL;
  memset(v136, 0, sizeof(v136));
  Handle = 0LL;
  v134 = 0LL;
  v135 = 0;
  if ( *(_DWORD *)(a2 + 48) != 2 )
  {
    LODWORD(v130) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 210LL);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v8 = 0;
  }
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v6, v7);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      10,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
  }
  if ( (*(_DWORD *)(a2 + 168) & 0x2000) == 0 )
  {
    v126[0] = 0;
    v127 = 0;
    v128 = 0;
    LOWORD(v130) = 0;
    if ( (int)RIMHidGetUsageAndPage(a2, v126, &v127) < 0 || (int)RIMHidGetVendorAndProductID(a2, &v128, &v130) < 0 )
      return v133;
    v13 = &WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v14 = 0;
    }
    v15 = v126[0];
    v16 = v127;
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = W32GetUserSessionState(
              (_DWORD)WPP_GLOBAL_Control,
              (unsigned int)&WPP_GLOBAL_Control,
              (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v14;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(v18 + 19368),
        4,
        1,
        11,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v16,
        v15);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (LODWORD(v13) = 1, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v21 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v13, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v21;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(v23 + 19368),
        3,
        1,
        12,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v15,
        v16);
    }
    if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(a1, v16, (unsigned __int16)v15) )
    {
      *(_DWORD *)(a2 + 168) = *(_DWORD *)(a2 + 168) & 0xFFFCFFFF | 0x10000;
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 1056) )
        return v133;
      *(_DWORD *)(a2 + 168) = (((int)IsProcessHidRawInputSupported() >= 0) << 17) | *(_DWORD *)(a2 + 168) & 0xFFFDFFFF;
      if ( (unsigned int)rimCheckForExplicitRimConflictInProcess(*(_QWORD *)(a1 + 32), v16, (unsigned __int16)v15) )
      {
        v53 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v79 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v53 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v133;
        v80 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v26, v27);
        v123 = v15;
        LOBYTE(v56) = v79;
        v119 = v16;
        v57 = *(_QWORD *)(v80 + 19368);
        v115 = 13;
        v113 = 4;
        goto LABEL_68;
      }
      if ( v16 != 13 || (_WORD)v15 != 15 )
      {
LABEL_34:
        v29 = 1;
        if ( (*(_DWORD *)(a2 + 168) & 0x10000) != 0 || v16 != 1 )
        {
          if ( v16 == 13 )
          {
            if ( (_WORD)v15 == 14 )
            {
              if ( (*(_DWORD *)(a1 + 84) & 0x18) != 0 )
              {
                PreparsedData = RIMHidGetPreparsedData(a2, (int)&Handle, (int)&v131, (int)&Object, &v134);
                v35 = (char *)PreparsedData;
                if ( PreparsedData )
                {
                  Caps = RIMHidGetCaps(a1, Object, PreparsedData, v136);
                  if ( Caps == 1114112 )
                  {
                    v70 = 0;
                    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
                    {
                      v67 = 1;
                      if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
                        v70 = 1;
                    }
                    v71 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                    if ( v70 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      v90 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v67, v38);
                      LOBYTE(v91) = v71;
                      LOBYTE(v92) = v70;
                      WPP_RECORDER_AND_TRACE_SF_Dd(
                        *((_QWORD *)WPP_GLOBAL_Control + 3),
                        v92,
                        v91,
                        *(_QWORD *)(v90 + 19368),
                        4,
                        1,
                        17,
                        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
                        v136[2],
                        v136[4]);
                    }
                    v133 = RIMAllocateHidConfigDesc(a1, a2, Object, v35, v136, &v134);
                    if ( v133 )
                      goto LABEL_54;
                    v42 = WPP_GLOBAL_Control;
                    v73 = 0;
                    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
                    {
                      v72 = *((_DWORD *)WPP_GLOBAL_Control + 11);
                      if ( (v72 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
                        v73 = 1;
                    }
                    v93 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                    if ( !v73 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      goto LABEL_183;
                    v94 = W32GetUserSessionState(v72, (_DWORD)WPP_GLOBAL_Control, v38);
                    v125 = 14;
                    v122 = 13;
                    LOBYTE(v96) = v93;
                    v97 = *(_QWORD *)(v94 + 19368);
                    v118 = 18;
                    goto LABEL_182;
                  }
                  v42 = WPP_GLOBAL_Control;
                  v29 = 0;
                  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
                  {
                    v68 = *((_DWORD *)WPP_GLOBAL_Control + 11);
                    if ( (v68 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
                      v29 = 1;
                  }
                  v86 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  if ( !v29 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    goto LABEL_183;
                  v124 = Caps;
                  v121 = (char)Object;
                  v89 = *(_QWORD *)(W32GetUserSessionState(v68, (_DWORD)WPP_GLOBAL_Control, v38) + 19368);
                  v117 = 16;
                  goto LABEL_135;
                }
                v29 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                   && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
                   && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
                v82 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( !v29 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_196;
                v120 = a2;
                v85 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v65, v66) + 19368);
                v116 = 15;
LABEL_125:
                LOBYTE(v84) = v82;
                LOBYTE(v83) = v29;
                WPP_RECORDER_AND_TRACE_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v83,
                  v84,
                  v85,
                  3,
                  1,
                  v116,
                  (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
                  v120);
                goto LABEL_196;
              }
              v53 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                 && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
                 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
              v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( !v53 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return v133;
              v81 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 24, v27);
              v123 = 14;
              v119 = 13;
              v115 = 19;
LABEL_115:
              v57 = *(_QWORD *)(v81 + 19368);
              v113 = 3;
LABEL_67:
              LOBYTE(v56) = v54;
LABEL_68:
              LOBYTE(v55) = v53;
              WPP_RECORDER_AND_TRACE_SF_Dd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v55,
                v56,
                v57,
                v113,
                1,
                v115,
                (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
                v119,
                v123);
              return v133;
            }
LABEL_154:
            v29 = 1;
LABEL_37:
            if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v16, (unsigned __int16)v15, &v128)
              && (*(_DWORD *)(a1 + 84) & 4) == 0 )
            {
              v74 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                 && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
                 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
              v75 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v74 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v76 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v30, v31);
                LOBYTE(v77) = v75;
                LOBYTE(v78) = v74;
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v78,
                  v77,
                  *(_QWORD *)(v76 + 19368),
                  3,
                  1,
                  21,
                  (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids);
              }
              return v133;
            }
            v32 = RIMHidGetPreparsedData(a2, (int)&Handle, (int)&v131, (int)&Object, &v134);
            v35 = (char *)v32;
            if ( v32 )
            {
              v40 = RIMHidGetCaps(a1, Object, v32, v136);
              if ( v40 == 1114112 )
              {
                if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                  || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
                  || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
                {
                  v29 = 0;
                }
                v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v58 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v36, v38);
                  LOBYTE(v59) = v41;
                  LOBYTE(v60) = v29;
                  WPP_RECORDER_AND_TRACE_SF_Dd(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v60,
                    v59,
                    *(_QWORD *)(v58 + 19368),
                    4,
                    1,
                    24,
                    (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
                    v136[2],
                    v136[4]);
                }
                v133 = RIMAllocateHidDesc(
                         a1,
                         a2,
                         (_DWORD)v35,
                         (unsigned int)v136,
                         (__int64)&v134,
                         (__int64)Object,
                         (__int64)v131);
                v44 = (void *)v133;
                if ( v133 )
                {
                  v45 = W32GetUserSessionState(v43, (_DWORD)v42, v38);
                  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
                    (RIMLOCKExclusiveIfNeeded *)&v130,
                    (struct RIMLOCK *)(v45 + 104));
                  v47 = RIMSearchHidTLCInfo(v16, (unsigned __int16)v15);
                  if ( v47 )
                  {
                    v49 = &WPP_GLOBAL_Control;
                    v50 = 0;
                    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
                    {
                      v46 = *((_DWORD *)WPP_GLOBAL_Control + 11);
                      LODWORD(v49) = 1;
                      if ( (v46 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
                        v50 = 1;
                    }
                    v51 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                    if ( v50 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      v61 = W32GetUserSessionState(v46, (_DWORD)v49, v48);
                      LOBYTE(v62) = v51;
                      LOBYTE(v63) = v50;
                      WPP_RECORDER_AND_TRACE_SF_DDq(
                        *((_QWORD *)WPP_GLOBAL_Control + 3),
                        v63,
                        v62,
                        *(_QWORD *)(v61 + 19368),
                        v112,
                        v114,
                        26,
                        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
                        v16,
                        v15,
                        v47);
                    }
LABEL_52:
                    v52 = v130;
                    ++*(_DWORD *)(v47 + 20);
                    *(_QWORD *)(a2 + 448) = v47;
                    if ( v52 )
                      RIMUnlockExclusive(v52);
LABEL_54:
                    ObfDereferenceObject(Object);
                    ObfDereferenceObject(v131);
                    ZwClose(Handle);
                    return v133;
                  }
                  v47 = RIMAllocateAndLinkHidTLCInfo(v16, (unsigned __int16)v15);
                  if ( v47 )
                  {
                    v107 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
                        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
                    v108 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                    if ( v107 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      v109 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v100, v101);
                      LOBYTE(v110) = v108;
                      LOBYTE(v111) = v107;
                      WPP_RECORDER_AND_TRACE_SF_qDD(
                        *((_QWORD *)WPP_GLOBAL_Control + 3),
                        v111,
                        v110,
                        *(_QWORD *)(v109 + 19368),
                        4,
                        1,
                        28,
                        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
                        v47,
                        v16,
                        v15);
                    }
                    goto LABEL_52;
                  }
                  v102 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
                      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
                  v103 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  if ( v102 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v104 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v100, v101);
                    LOBYTE(v105) = v103;
                    LOBYTE(v106) = v102;
                    WPP_RECORDER_AND_TRACE_SF_q(
                      *((_QWORD *)WPP_GLOBAL_Control + 3),
                      v106,
                      v105,
                      *(_QWORD *)(v104 + 19368),
                      3,
                      1,
                      27,
                      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
                      a1);
                  }
                  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v130);
                  RIMFreeHidDesc(v44);
                  v133 = 0LL;
LABEL_196:
                  if ( v131 )
                    ObfDereferenceObject(v131);
                  if ( Handle )
                    ZwClose(Handle);
                  if ( Object )
                    ObfDereferenceObject(Object);
                  return v133;
                }
                v73 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
                   && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
                   && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
                v98 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( v73 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v99 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v42, v38);
                  v125 = v15;
                  LOBYTE(v96) = v98;
                  v122 = v16;
                  v97 = *(_QWORD *)(v99 + 19368);
                  v118 = 25;
LABEL_182:
                  LOBYTE(v95) = v73;
                  WPP_RECORDER_AND_TRACE_SF_Dd(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v95,
                    v96,
                    v97,
                    3,
                    1,
                    v118,
                    (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
                    v122,
                    v125);
                }
LABEL_183:
                GreDeleteFastMutex(v35, (__int64)v42, v38, v39);
                goto LABEL_196;
              }
              v42 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (v37 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v37 & 1) == 0)
                || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
              {
                v29 = 0;
              }
              v86 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( !v29 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_183;
              v124 = v40;
              v121 = (char)Object;
              v89 = *(_QWORD *)(W32GetUserSessionState(v37, (_DWORD)WPP_GLOBAL_Control, v38) + 19368);
              v117 = 23;
LABEL_135:
              LOBYTE(v88) = v86;
              LOBYTE(v87) = v29;
              WPP_RECORDER_AND_TRACE_SF_qd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v87,
                v88,
                v89,
                3,
                1,
                v117,
                (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
                v121,
                v124);
              goto LABEL_183;
            }
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
            {
              v29 = 0;
            }
            v82 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( !v29 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_196;
            v120 = a2;
            v116 = 22;
            v85 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v33, v34) + 19368);
            goto LABEL_125;
          }
        }
        else if ( v15 == 1 || v15 == 2 || v15 == 6 || v15 == 7 || v15 == 128 )
        {
          v53 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v53 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v133;
          v123 = v15;
          v57 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v26, v27) + 19368);
          v119 = 1;
          v115 = 14;
          v113 = 4;
          goto LABEL_67;
        }
        if ( v16 != 1 )
          goto LABEL_37;
        if ( (_WORD)v15 == 14 && (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
        {
          v53 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
          v54 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v53 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v133;
          v81 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v26, v27);
          v123 = 14;
          v119 = 1;
          v115 = 20;
          goto LABEL_115;
        }
        goto LABEL_154;
      }
      *(_DWORD *)(a2 + 168) &= ~0x20000u;
    }
    *(_DWORD *)(a2 + 184) |= 0x40u;
    goto LABEL_34;
  }
  if ( *(_QWORD *)a3
    && HidP_GetCollectionDescription(
         *(PHIDP_REPORT_DESCRIPTOR *)a3,
         *(_DWORD *)(a3 + 8),
         PagedPool,
         (PHIDP_DEVICE_DESC)(a3 + 24)) < 0 )
  {
    return 0LL;
  }
  else
  {
    return RIMIDECreateHIDDesc(a1, a2, a3);
  }
}
