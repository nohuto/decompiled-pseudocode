/*
 * XREFs of RIMCreateHidDesc @ 0x1401DF458
 * Callers:
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     RIMIDECreateHIDDesc @ 0x14002A1AC (RIMIDECreateHIDDesc.c)
 *     RIMSearchHidTLCInfo @ 0x14002A7D0 (RIMSearchHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x14002A8F4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     IsProcessHidRawInputSupported @ 0x14002A95C (IsProcessHidRawInputSupported.c)
 *     rimCheckForExplicitRimConflictInProcess @ 0x14002A994 (rimCheckForExplicitRimConflictInProcess.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x14002AA58 (rimIsExplicitRimUsagesMatchingUsages.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400B4C14 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1400E6C70 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     RIMHidGetUsageAndPage @ 0x140117F14 (RIMHidGetUsageAndPage.c)
 *     RIMHidGetVendorAndProductID @ 0x14011C4D0 (RIMHidGetVendorAndProductID.c)
 *     RIMAllocateHidConfigDesc @ 0x14012A498 (RIMAllocateHidConfigDesc.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1401305CC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x14013B930 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     InkProcessorIsInkDevice @ 0x14013F548 (InkProcessorIsInkDevice.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDq @ 0x14014B4A8 (WPP_RECORDER_AND_TRACE_SF_DDq.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAllocateHidDesc @ 0x1401DE298 (RIMAllocateHidDesc.c)
 *     RIMFreeHidDesc @ 0x1401E0854 (RIMFreeHidDesc.c)
 *     RIMHidGetCaps @ 0x1401E0AB8 (RIMHidGetCaps.c)
 *     RIMHidGetPreparsedData @ 0x1401E0E5C (RIMHidGetPreparsedData.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1401E68A4 (RIMAllocateAndLinkHidTLCInfo.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

void **__fastcall RIMCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  char v7; // si
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rdx
  char v13; // di
  int v14; // r14d
  unsigned __int16 v15; // si
  bool v16; // r12
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  char v20; // di
  bool v21; // r12
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rcx
  bool v27; // bl
  bool v28; // di
  __int64 v29; // rax
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r9
  bool v33; // di
  bool v34; // si
  __int64 v35; // rax
  __int64 PreparsedData; // rax
  __int64 v37; // rdx
  char *v38; // r12
  bool v39; // si
  int v40; // edx
  int v41; // r8d
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  int Caps; // r14d
  bool v46; // si
  int v47; // edx
  int v48; // r8d
  __int64 v49; // r9
  bool v50; // si
  bool v51; // r14
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  __int64 v55; // rcx
  bool v56; // bl
  bool v57; // si
  __int64 v58; // rax
  int v59; // edx
  int v60; // r8d
  __int64 v61; // r9
  int (*v62)(void); // rax
  __int64 v63; // rdx
  char v64; // bl
  bool v65; // di
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rcx
  int v73; // r13d
  bool v74; // r13
  __int64 v75; // rax
  int v76; // r8d
  int v77; // edx
  __int64 v78; // rdx
  __int64 v79; // rcx
  bool v80; // di
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 *v84; // rdi
  __int64 v85; // rdx
  char v86; // r15
  char v87; // r12
  __int64 v88; // rax
  __int64 v89; // rdx
  char v90; // bl
  bool v91; // di
  __int64 v92; // rax
  int v93; // r8d
  int v94; // edx
  char v95; // r15
  bool v96; // r12
  __int64 v97; // rax
  int v98; // r8d
  int v99; // edx
  char v101; // [rsp+20h] [rbp-B9h]
  PVOID v102; // [rsp+20h] [rbp-B9h]
  __int64 v103; // [rsp+28h] [rbp-B1h]
  __int16 v104; // [rsp+30h] [rbp-A9h]
  __int16 v105; // [rsp+30h] [rbp-A9h]
  __int16 v106; // [rsp+30h] [rbp-A9h]
  __int16 v107; // [rsp+30h] [rbp-A9h]
  char v108; // [rsp+40h] [rbp-99h]
  char v109; // [rsp+40h] [rbp-99h]
  char v110; // [rsp+40h] [rbp-99h]
  char v111; // [rsp+40h] [rbp-99h]
  char v112; // [rsp+48h] [rbp-91h]
  char v113; // [rsp+48h] [rbp-91h]
  char v114; // [rsp+48h] [rbp-91h]
  _WORD v115[2]; // [rsp+60h] [rbp-79h] BYREF
  unsigned __int16 v116; // [rsp+64h] [rbp-75h] BYREF
  __int16 v117; // [rsp+68h] [rbp-71h] BYREF
  PVOID v118; // [rsp+70h] [rbp-69h]
  int v119; // [rsp+78h] [rbp-61h] BYREF
  PVOID Object; // [rsp+80h] [rbp-59h]
  PVOID Buffer; // [rsp+88h] [rbp-51h]
  HANDLE Handle; // [rsp+90h] [rbp-49h]
  __int64 v123; // [rsp+98h] [rbp-41h] BYREF
  int v124; // [rsp+A0h] [rbp-39h]
  unsigned __int16 v125[32]; // [rsp+B0h] [rbp-29h] BYREF

  Object = 0LL;
  v118 = 0LL;
  Buffer = 0LL;
  memset(v125, 0, sizeof(v125));
  Handle = 0LL;
  v123 = 0LL;
  v124 = 0;
  if ( *(_DWORD *)(a2 + 48) != 2 )
  {
    v119 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 210);
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v6);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      10,
      (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids);
  }
  if ( (*(_DWORD *)(a2 + 168) & 0x2000) == 0 )
  {
    v115[0] = 0;
    v116 = 0;
    v117 = 0;
    LOWORD(v119) = 0;
    if ( (int)RIMHidGetUsageAndPage(a2, v115, &v116) < 0 || (int)RIMHidGetVendorAndProductID(a2, &v117, &v119) < 0 )
      return (void **)Buffer;
    v12 = (__int64)&WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v13 = 0;
    }
    v14 = v115[0];
    v15 = v116;
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v13;
      WPP_RECORDER_AND_TRACE_SF_dD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        *(_QWORD *)(v17 + 19336),
        4,
        1,
        11,
        (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
        v15,
        v14);
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (v12 = 1LL, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
      || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v20 = 0;
    }
    v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
      LOBYTE(v23) = v21;
      LOBYTE(v24) = v20;
      WPP_RECORDER_AND_TRACE_SF_dD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v24,
        v23,
        *(_QWORD *)(v22 + 19336),
        3,
        1,
        12,
        (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
        v14,
        v15);
    }
    if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(a1, v15, v14) )
    {
      *(_DWORD *)(a2 + 168) = *(_DWORD *)(a2 + 168) & 0xFFFCFFFF | 0x10000;
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 1056) )
        return (void **)Buffer;
      *(_DWORD *)(a2 + 168) = (((int)IsProcessHidRawInputSupported() >= 0) << 17) | *(_DWORD *)(a2 + 168) & 0xFFFDFFFF;
      if ( (unsigned int)rimCheckForExplicitRimConflictInProcess(*(_QWORD *)(a1 + 32), v15, v14) )
      {
        v27 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
        v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v27 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (void **)Buffer;
        v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
        v112 = v14;
        LOBYTE(v31) = v28;
        v108 = v15;
        v32 = *(_QWORD *)(v29 + 19336);
        v104 = 13;
        v101 = 4;
        goto LABEL_39;
      }
      if ( v15 != 13 || (_WORD)v14 != 15 )
      {
LABEL_44:
        v33 = 1;
        if ( (*(_DWORD *)(a2 + 168) & 0x10000) != 0 || v15 != 1 )
        {
          if ( v15 == 13 )
          {
            if ( (_WORD)v14 == 14 )
            {
              if ( (*(_DWORD *)(a1 + 84) & 0x18) == 0 )
              {
                v27 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                   && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
                   && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
                v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( !v27 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  return (void **)Buffer;
                v35 = W32GetUserSessionState(WPP_GLOBAL_Control, 24LL);
                v112 = 14;
                v108 = 13;
                v104 = 19;
LABEL_71:
                v32 = *(_QWORD *)(v35 + 19336);
                v101 = 3;
LABEL_59:
                LOBYTE(v31) = v34;
LABEL_39:
                LOBYTE(v30) = v27;
                WPP_RECORDER_AND_TRACE_SF_dD(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v30,
                  v31,
                  v32,
                  v101,
                  1,
                  v104,
                  (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
                  v108,
                  v112);
                return (void **)Buffer;
              }
              PreparsedData = RIMHidGetPreparsedData((struct RIMDEV *)a2, &v123);
              v38 = (char *)PreparsedData;
              if ( !PreparsedData )
              {
                v33 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                   && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
                   && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
                v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( !v33 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_182;
                v109 = a2;
                v42 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v37) + 19336);
                v105 = 15;
                goto LABEL_81;
              }
              Caps = RIMHidGetCaps(a1, v118, PreparsedData, v125);
              if ( Caps != 1114112 )
              {
                v33 = 0;
                if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
                {
                  v44 = *((unsigned int *)WPP_GLOBAL_Control + 11);
                  if ( (v44 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
                    v33 = 1;
                }
                v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( !v33 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_164;
                v113 = Caps;
                v110 = (char)v118;
                v49 = *(_QWORD *)(W32GetUserSessionState(v44, WPP_GLOBAL_Control) + 19336);
                v106 = 16;
                goto LABEL_91;
              }
              v50 = 0;
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
              {
                v43 = 1LL;
                if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
                  v50 = 1;
              }
              v51 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v50 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v52 = W32GetUserSessionState(WPP_GLOBAL_Control, v43);
                LOBYTE(v53) = v51;
                LOBYTE(v54) = v50;
                WPP_RECORDER_AND_TRACE_SF_dD(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v54,
                  v53,
                  *(_QWORD *)(v52 + 19336),
                  4,
                  1,
                  17,
                  (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
                  v125[2],
                  v125[4]);
              }
              Buffer = (PVOID)RIMAllocateHidConfigDesc(
                                a1,
                                a2,
                                (__int64)v118,
                                (__int64)v38,
                                (__int16 *)v125,
                                (__int64)&v123);
              if ( !Buffer )
              {
                v56 = 0;
                if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
                {
                  v55 = *((unsigned int *)WPP_GLOBAL_Control + 11);
                  if ( (v55 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
                    v56 = 1;
                }
                v57 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( !v56 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_164;
                v58 = W32GetUserSessionState(v55, WPP_GLOBAL_Control);
                v114 = 14;
                v111 = 13;
                LOBYTE(v60) = v57;
                v61 = *(_QWORD *)(v58 + 19336);
                v107 = 18;
                goto LABEL_163;
              }
LABEL_196:
              ObfDereferenceObject(v118);
              ObfDereferenceObject(Object);
              ZwClose(Handle);
              return (void **)Buffer;
            }
            goto LABEL_120;
          }
        }
        else if ( v14 == 1 || v14 == 2 || v14 == 6 || (v26 = (unsigned int)(v14 - 7), v14 == 7) || v14 == 128 )
        {
          v27 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
          v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v27 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return (void **)Buffer;
          v112 = v14;
          v32 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v25) + 19336);
          v108 = 1;
          v104 = 14;
          v101 = 4;
          goto LABEL_59;
        }
        if ( v15 != 1 )
          goto LABEL_121;
        if ( (_WORD)v14 == 14 )
        {
          v26 = 16LL;
          if ( (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
          {
            v27 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
            v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( !v27 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return (void **)Buffer;
            v35 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
            v112 = 14;
            v108 = 1;
            v104 = 20;
            goto LABEL_71;
          }
        }
LABEL_120:
        v33 = 1;
LABEL_121:
        v62 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v26, v25) + 48) + 4688LL);
        if ( v62
          && v62() >= 0
          && (unsigned int)InkProcessorIsInkDevice(v15, (unsigned __int16)v14, (__int64)&v117)
          && (*(_DWORD *)(a1 + 84) & 4) == 0 )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v64 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v64 = 0;
          }
          v65 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v64 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v66 = W32GetUserSessionState(WPP_GLOBAL_Control, v63);
            LOBYTE(v67) = v65;
            LOBYTE(v68) = v64;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v68,
              v67,
              *(_QWORD *)(v66 + 19336),
              3,
              1,
              21,
              (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids);
          }
          return (void **)Buffer;
        }
        v69 = RIMHidGetPreparsedData((struct RIMDEV *)a2, &v123);
        v38 = (char *)v69;
        if ( !v69 )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
          {
            v33 = 0;
          }
          v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v33 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_182;
          v109 = a2;
          v105 = 22;
          v42 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v70) + 19336);
LABEL_81:
          LOBYTE(v41) = v39;
          LOBYTE(v40) = v33;
          WPP_RECORDER_AND_TRACE_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v40,
            v41,
            v42,
            3,
            1,
            v105,
            (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
            v109);
LABEL_182:
          if ( Object )
            ObfDereferenceObject(Object);
          if ( Handle )
            ZwClose(Handle);
          if ( v118 )
            ObfDereferenceObject(v118);
          return (void **)Buffer;
        }
        v73 = RIMHidGetCaps(a1, v118, v69, v125);
        if ( v73 != 1114112 )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (v72 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v72 & 1) == 0)
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
          {
            v33 = 0;
          }
          v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v33 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_164;
          v113 = v73;
          v110 = (char)v118;
          v49 = *(_QWORD *)(W32GetUserSessionState(v72, WPP_GLOBAL_Control) + 19336);
          v106 = 23;
LABEL_91:
          LOBYTE(v48) = v46;
          LOBYTE(v47) = v33;
          WPP_RECORDER_AND_TRACE_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v47,
            v48,
            v49,
            3,
            1,
            v106,
            (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
            v110,
            v113);
LABEL_164:
          GreDeleteFastMutex(v38);
          goto LABEL_182;
        }
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v33 = 0;
        }
        v74 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v75 = W32GetUserSessionState(WPP_GLOBAL_Control, v71);
          LOBYTE(v76) = v74;
          LOBYTE(v77) = v33;
          WPP_RECORDER_AND_TRACE_SF_dD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v77,
            v76,
            *(_QWORD *)(v75 + 19336),
            4,
            1,
            24,
            (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
            v125[2],
            v125[4]);
        }
        Buffer = (PVOID)RIMAllocateHidDesc(
                          a1,
                          a2,
                          (struct _HIDP_PREPARSED_DATA *)v38,
                          v125,
                          (__int64)&v123,
                          (__int64)v118,
                          (__int64)Object);
        if ( !Buffer )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v56 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v56 = 0;
          }
          v80 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v56 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_164;
          v81 = W32GetUserSessionState(WPP_GLOBAL_Control, v78);
          v114 = v14;
          LOBYTE(v60) = v80;
          v111 = v15;
          v61 = *(_QWORD *)(v81 + 19336);
          v107 = 25;
LABEL_163:
          LOBYTE(v59) = v56;
          WPP_RECORDER_AND_TRACE_SF_dD(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v59,
            v60,
            v61,
            3,
            1,
            v107,
            (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
            v111,
            v114);
          goto LABEL_164;
        }
        v82 = W32GetUserSessionState(v79, v78);
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
          (RIMLOCKExclusiveIfNeeded *)&v119,
          (struct RIMLOCK *)(v82 + 104));
        v84 = RIMSearchHidTLCInfo(v15, (unsigned __int16)v14);
        if ( v84 )
        {
          v85 = (__int64)&WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (v83 = *((unsigned int *)WPP_GLOBAL_Control + 11), v85 = 1LL, (v83 & 1) == 0)
            || (v86 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v86 = 0;
          }
          v87 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v86 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v88 = W32GetUserSessionState(v83, v85);
            WPP_RECORDER_AND_TRACE_SF_DDq(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v86,
              v87,
              *(_QWORD *)(v88 + 19336),
              (__int64)v102,
              v103,
              0x1Au,
              (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids);
          }
        }
        else
        {
          v84 = (__int64 *)RIMAllocateAndLinkHidTLCInfo(v15, (unsigned __int16)v14);
          if ( !v84 )
          {
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v90 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v90 = 0;
            }
            v91 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v90 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v92 = W32GetUserSessionState(WPP_GLOBAL_Control, v89);
              LOBYTE(v93) = v91;
              LOBYTE(v94) = v90;
              WPP_RECORDER_AND_TRACE_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v94,
                v93,
                *(_QWORD *)(v92 + 19336),
                3,
                1,
                27,
                (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
                a1);
            }
            RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v119);
            RIMFreeHidDesc(Buffer);
            Buffer = 0LL;
            goto LABEL_182;
          }
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (v89 = 1LL, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0)
            || (v95 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v95 = 0;
          }
          v96 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v95 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v97 = W32GetUserSessionState(WPP_GLOBAL_Control, v89);
            LOBYTE(v98) = v96;
            LOBYTE(v99) = v95;
            WPP_RECORDER_AND_TRACE_SF_qDD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v99,
              v98,
              *(_QWORD *)(v97 + 19336),
              4,
              1,
              28,
              (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
              (char)v84,
              v15,
              v14);
          }
        }
        ++*((_DWORD *)v84 + 5);
        *(_QWORD *)(a2 + 448) = v84;
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v119);
        goto LABEL_196;
      }
      *(_DWORD *)(a2 + 168) &= ~0x20000u;
    }
    *(_DWORD *)(a2 + 184) |= 0x40u;
    goto LABEL_44;
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
