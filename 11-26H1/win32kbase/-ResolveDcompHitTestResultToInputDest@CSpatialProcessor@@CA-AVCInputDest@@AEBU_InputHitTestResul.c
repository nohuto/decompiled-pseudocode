/*
 * XREFs of ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14007122C
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x140070610 (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006F7DC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     IsMessageOnlyWindow @ 0x14006F8D0 (IsMessageOnlyWindow.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14006F90C (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140071C0C (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     _HMPheFromObjectWorker @ 0x140071E30 (_HMPheFromObjectWorker.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMUnlockObject @ 0x14009B9C0 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_OWORD *__fastcall CSpatialProcessor::ResolveDcompHitTestResultToInputDest(
        _OWORD *a1,
        __int64 *a2,
        unsigned int a3,
        __int64 a4)
{
  void *v4; // rsi
  __int64 *v6; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rsi
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rbx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  unsigned int v20; // ecx
  __int64 v21; // rbx
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r12
  __int64 v27; // rbx
  char v28; // si
  bool v29; // r12
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  char v34; // si
  bool v35; // r14
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  __int64 v39; // rsi
  _OWORD *result; // rax
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int64 v47; // r13
  __int64 v48; // rdx
  __int64 *v49; // r12
  int v50; // ecx
  CTouchProcessor *v51; // rcx
  char v52; // bl
  bool v53; // si
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  unsigned int v57; // ebx
  int (*v58)(void); // rax
  __int64 v59; // rcx
  void (__fastcall *v60)(_OWORD *, __int64, void *, _QWORD, __int64 *, _QWORD *); // r10
  __int64 v61; // rax
  bool v62; // bl
  bool v63; // si
  int v64; // edx
  int v65; // r8d
  __int64 v66; // r9
  char v67; // bl
  bool v68; // si
  __int64 v69; // rax
  int v70; // r8d
  int v71; // edx
  char v72; // bl
  bool v73; // si
  __int64 UserSessionState; // rax
  int v75; // r8d
  int v76; // edx
  __int64 CurrentProcessWow64Process; // rax
  char v78; // si
  bool v79; // r12
  __int64 v80; // rbx
  __int64 v81; // rax
  int v82; // r8d
  int v83; // edx
  char v84; // [rsp+20h] [rbp-E0h]
  __int16 v85; // [rsp+30h] [rbp-D0h]
  char v86; // [rsp+40h] [rbp-C0h]
  void *v88; // [rsp+70h] [rbp-90h]
  __int64 v89; // [rsp+70h] [rbp-90h]
  _QWORD v90[15]; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v91[7]; // [rsp+F0h] [rbp-10h] BYREF

  v4 = (void *)a2[1];
  v90[0] = a4;
  v6 = a2;
  v88 = v4;
  if ( a3 == 6 || !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 133LL);
  memset(v91, 0, sizeof(v91));
  if ( v4 )
  {
    if ( !CSpatialProcessor::ResolveInputSinkToINPUTDEST(v4, a3, (struct tagINPUTDEST *)v91) )
      goto LABEL_58;
    if ( (v91[0] & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 177LL);
    v47 = 0LL;
    if ( (unsigned int)IsMessageOnlyWindow(*(__int64 *)&v91[5]) )
    {
      if ( HIDWORD(v91[5]) != 2 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 188LL);
      v49 = a2;
      LOBYTE(v48) = 1;
      v61 = HMValidateHandleNoSecure(*a2, v48);
      v47 = v61;
      if ( v61 && *(char *)(*(_QWORD *)(v61 + 40) + 19LL) >= 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v62 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v62 = 0;
        }
        v63 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v62 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_44;
        v66 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v10) + 69136);
        v86 = v91[5];
        v85 = 16;
        v84 = 4;
      }
      else
      {
        memset(&v90[1], 0, 0x70uLL);
        v91[0] = *(_OWORD *)&v90[1];
        v91[2] = *(_OWORD *)&v90[5];
        v91[1] = *(_OWORD *)&v90[3];
        v91[4] = *(_OWORD *)&v90[9];
        v91[3] = *(_OWORD *)&v90[7];
        v91[6] = *(_OWORD *)&v90[13];
        v91[5] = *(_OWORD *)&v90[11];
        v62 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v63 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v62 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_44;
        v86 = v47;
        v85 = 15;
        v66 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v10) + 69136);
        v84 = 3;
      }
      LOBYTE(v65) = v63;
      LOBYTE(v64) = v62;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v64,
        v65,
        v66,
        v84,
        2,
        v85,
        (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids,
        v86);
    }
    else
    {
      v49 = a2;
    }
LABEL_44:
    v50 = v91[0];
    if ( !LODWORD(v91[0]) )
    {
LABEL_78:
      LODWORD(v8) = (_DWORD)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v72 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v72 = 0;
      }
      v73 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v72 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(v50, (_DWORD)WPP_GLOBAL_Control, v10);
        LOBYTE(v75) = v73;
        LOBYTE(v76) = v72;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v76,
          v75,
          *(_QWORD *)(UserSessionState + 69136),
          2,
          2,
          18,
          (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids,
          (char)v88);
        v50 = v91[0];
      }
      v6 = a2;
LABEL_76:
      v27 = *(_QWORD *)&v91[5];
      HIDWORD(v91[5]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v91[5], 12));
      if ( !v50 )
        goto LABEL_25;
      goto LABEL_19;
    }
    if ( (v91[0] & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 211LL);
    v51 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v52 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v52 = 0;
    }
    v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v52 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v54 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v10);
      LOBYTE(v55) = v53;
      LOBYTE(v56) = v52;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v56,
        v55,
        *(_QWORD *)(v54 + 69136),
        4,
        2,
        17,
        (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids,
        (char)v88,
        *(_QWORD *)&v91[5]);
    }
    v57 = -(v91[1] & 1);
    v58 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v51) + 48) + 5024LL);
    if ( v58 )
    {
      if ( v58() >= 0 )
      {
        v60 = *(void (__fastcall **)(_OWORD *, __int64, void *, _QWORD, __int64 *, _QWORD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v59) + 48)
                                                                                            + 5032LL);
        if ( v60 )
          v60(v91, v47, v88, v57, v49 + 2, v90);
      }
    }
    v6 = a2;
LABEL_58:
    v50 = v91[0];
    if ( LODWORD(v91[0]) )
    {
      v27 = *(_QWORD *)&v91[5];
LABEL_19:
      *(_QWORD *)&v91[6] = v6[11];
      DWORD2(v91[6]) = *((_DWORD *)v6 + 24);
      DWORD1(v91[0]) = *((_DWORD *)v6 + 25);
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v34 = 0;
      }
      v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v36 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v8, v10);
        LOBYTE(v37) = v35;
        LOBYTE(v38) = v34;
        WPP_RECORDER_AND_TRACE_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v38,
          v37,
          *(_QWORD *)(v36 + 69136),
          4,
          2,
          19,
          (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids,
          v91[6],
          SBYTE8(v91[6]),
          SBYTE4(v91[0]));
        v27 = *(_QWORD *)&v91[5];
      }
      goto LABEL_25;
    }
    goto LABEL_78;
  }
  v11 = *v6;
  if ( !*v6 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v67 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v67 = 0;
    }
    v68 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v67 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v69 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v8, v10);
      LOBYTE(v70) = v68;
      LOBYTE(v71) = v67;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v71,
        v70,
        *(_QWORD *)(v69 + 69136),
        2,
        2,
        14,
        (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids);
    }
    v50 = v91[0];
    goto LABEL_76;
  }
  PsGetCurrentThreadWin32Thread(v9, v8);
  v15 = *(_QWORD *)(W32GetUserSessionState(v13, v12, v14) + 19904);
  if ( (unsigned __int64)(unsigned __int16)v11 >= *(_QWORD *)(v15 + 8) )
    goto LABEL_17;
  v16 = W32GetUserSessionState(v15, v8, v10);
  v20 = *(_DWORD *)(W32GetUserSessionState(v18, v17, v19) + 19928) * (unsigned __int16)v11;
  v21 = v20 + *(_QWORD *)(v16 + 19920);
  v24 = W32GetUserSessionState(v20, v22, v23);
  v25 = *(_QWORD *)(v24 + 19864);
  v89 = v25;
  v26 = 5LL * (unsigned int)((v21 - *(_QWORD *)(v24 + 19920)) >> 5);
  LOWORD(v11) = WORD1(v11) & 0x7FFF;
  if ( (WORD1(v11) & 0x7FFF) == *(_WORD *)(v21 + 26) || (_WORD)v11 == 0x7FFF )
  {
    LODWORD(v8) = 0;
  }
  else
  {
    if ( (_WORD)v11 )
      goto LABEL_17;
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v25, v8);
    LODWORD(v8) = 0;
    if ( !CurrentProcessWow64Process )
      goto LABEL_17;
    v25 = v89;
  }
  if ( (*(_BYTE *)(v21 + 25) & 1) != 0 || *(_BYTE *)(v21 + 24) != 1 || (v27 = *(_QWORD *)(v25 + 8 * v26)) == 0 )
  {
LABEL_17:
    v27 = *(_QWORD *)&v91[5];
    goto LABEL_18;
  }
  LODWORD(v91[0]) |= 4u;
  v10 = 2;
  DWORD2(v91[5]) |= 1u;
  HIDWORD(v91[5]) = 2;
  *(_QWORD *)&v91[5] = v27;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v28 = 0;
  }
  v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v30 = *v6;
    v31 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, 2);
    LOBYTE(v32) = v29;
    LOBYTE(v33) = v28;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v33,
      v32,
      *(_QWORD *)(v31 + 69136),
      4,
      2,
      12,
      (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids,
      v30);
    goto LABEL_17;
  }
LABEL_18:
  if ( LODWORD(v91[0]) )
    goto LABEL_19;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (LODWORD(v8) = 2, (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0)
    || (v78 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v78 = 0;
  }
  v79 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v78 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v80 = *v6;
    v81 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v8, v10);
    LOBYTE(v82) = v79;
    LOBYTE(v83) = v78;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v83,
      v82,
      *(_QWORD *)(v81 + 69136),
      2,
      2,
      13,
      (__int64)&WPP_03e5ed7ceaa633972c5818eb5aba76a5_Traceguids,
      v80);
    v50 = v91[0];
    goto LABEL_76;
  }
LABEL_25:
  memset(a1, 0, 0x70uLL);
  *((_BYTE *)a1 + 112) = 0;
  if ( HIDWORD(v91[5]) )
  {
    if ( !v27 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 95LL);
      v27 = *(_QWORD *)&v91[5];
    }
    v39 = *((_QWORD *)a1 + 10);
    *((_QWORD *)a1 + 10) = v27;
    if ( !v39 || v39 != v27 )
    {
      if ( v27 )
      {
        if ( (*(_BYTE *)(HMPheFromObjectWorker(v27) + 25) & 1) != 0 )
          UserSetLastError(87LL);
        _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
      }
      if ( v39 )
        HMUnlockObject(v39);
    }
  }
  result = a1;
  v41 = v91[1];
  *a1 = v91[0];
  v42 = v91[2];
  a1[1] = v41;
  v43 = v91[3];
  a1[2] = v42;
  v44 = v91[4];
  a1[3] = v43;
  v45 = v91[5];
  a1[4] = v44;
  v46 = v91[6];
  a1[5] = v45;
  a1[6] = v46;
  return result;
}
