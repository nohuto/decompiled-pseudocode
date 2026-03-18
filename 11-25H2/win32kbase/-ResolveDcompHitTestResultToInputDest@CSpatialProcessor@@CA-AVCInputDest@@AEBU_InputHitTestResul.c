/*
 * XREFs of ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14018DE2C
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x140038370 (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006101C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     IsMessageOnlyWindow @ 0x1400B9E00 (IsMessageOnlyWindow.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C5510 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1400D51D8 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x14018E544 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ApiSetEditionUpdateInputTransformFromHitTest @ 0x140196DF8 (ApiSetEditionUpdateInputTransformFromHitTest.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

CInputDest *__fastcall CSpatialProcessor::ResolveDcompHitTestResultToInputDest(
        CInputDest *a1,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4)
{
  void *v4; // rdi
  _QWORD *v6; // r12
  CInputDest *v7; // r13
  char v8; // di
  __int64 v9; // rax
  char v10; // r14
  bool v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  char v16; // r14
  bool v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  char v22; // bl
  bool v23; // r14
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  bool v27; // al
  int v28; // r13d
  __int64 v29; // rax
  bool v30; // bl
  bool v31; // r14
  int v32; // edx
  int v33; // r8d
  __int64 v34; // r9
  char v35; // bl
  bool v36; // r14
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  char v40; // bl
  bool v41; // r14
  __int64 UserSessionState; // rax
  int v43; // r8d
  int v44; // edx
  bool v45; // bl
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  char v50; // [rsp+20h] [rbp-E0h]
  __int16 v51; // [rsp+30h] [rbp-D0h]
  char v52; // [rsp+40h] [rbp-C0h]
  int v54; // [rsp+70h] [rbp-90h]
  _OWORD v56[8]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v57[7]; // [rsp+100h] [rbp+0h] BYREF

  v4 = (void *)a2[1];
  v54 = (int)v4;
  v6 = a2;
  v7 = a1;
  *(_QWORD *)&v56[0] = a4;
  if ( a3 == 6 || !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 133LL);
  memset(v57, 0, sizeof(v57));
  if ( v4 )
  {
    v27 = CSpatialProcessor::ResolveInputSinkToINPUTDEST(v4, a3, (struct tagINPUTDEST *)v57);
    v8 = 1;
    if ( !v27 )
      goto LABEL_65;
    if ( (v57[0] & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 177LL);
    v28 = 0;
    if ( (unsigned int)IsMessageOnlyWindow(*(__int64 *)&v57[5], 0LL) )
    {
      if ( HIDWORD(v57[5]) != 2 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 188LL);
      v29 = HMValidateHandleNoSecure(*v6, 1);
      v28 = v29;
      if ( v29 && *(char *)(*(_QWORD *)(v29 + 40) + 19LL) >= 0 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
          || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v30 = 0;
        }
        v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v30 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_54;
        v34 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, 0LL) + 69144);
        v52 = v57[5];
        v51 = 16;
        v50 = 4;
      }
      else
      {
        memset(&v56[1], 0, 0x70uLL);
        v57[0] = v56[1];
        v57[2] = v56[3];
        v57[1] = v56[2];
        v57[4] = v56[5];
        v57[3] = v56[4];
        v57[6] = v56[7];
        v57[5] = v56[6];
        v30 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
        v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v30 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_54;
        v52 = v28;
        v51 = 15;
        v34 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, 0LL) + 69144);
        v50 = 3;
      }
      LOBYTE(v33) = v31;
      LOBYTE(v32) = v30;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v32,
        v33,
        v34,
        v50,
        2,
        v51,
        (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
        v52);
    }
LABEL_54:
    if ( !LODWORD(v57[0]) )
    {
LABEL_66:
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v40 = 0;
      }
      v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v43) = v41;
        LOBYTE(v44) = v40;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v44,
          v43,
          *(_QWORD *)(UserSessionState + 69144),
          2,
          2,
          18,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
          v54);
      }
      v7 = a1;
LABEL_74:
      if ( !LODWORD(v57[0]) )
        goto LABEL_82;
      goto LABEL_75;
    }
    if ( (v57[0] & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 211LL);
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v35 = 0;
    }
    v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v37 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v38) = v36;
      LOBYTE(v39) = v35;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v39,
        v38,
        *(_QWORD *)(v37 + 69144),
        4,
        2,
        17,
        (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
        v54,
        *(_QWORD *)&v57[5]);
    }
    ApiSetEditionUpdateInputTransformFromHitTest(
      (unsigned int)v57,
      v28,
      v54,
      -(v57[1] & 1),
      (__int64)(v6 + 2),
      (__int64)v56);
    v7 = a1;
LABEL_65:
    if ( LODWORD(v57[0]) )
    {
LABEL_75:
      *(_QWORD *)&v57[6] = v6[11];
      DWORD2(v57[6]) = *((_DWORD *)v6 + 24);
      DWORD1(v57[0]) = *((_DWORD *)v6 + 25);
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v8 = 0;
      }
      v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v46 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v47) = v45;
        LOBYTE(v48) = v8;
        WPP_RECORDER_AND_TRACE_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v48,
          v47,
          *(_QWORD *)(v46 + 69144),
          4,
          2,
          19,
          (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
          v57[6],
          SBYTE8(v57[6]),
          SBYTE4(v57[0]));
      }
      goto LABEL_82;
    }
    goto LABEL_66;
  }
  if ( !*v6 )
  {
    v8 = 1;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v22 = 0;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v25) = v23;
      LOBYTE(v26) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v25,
        *(_QWORD *)(v24 + 69144),
        2,
        2,
        14,
        (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids);
    }
    goto LABEL_74;
  }
  v8 = 1;
  v9 = HMValidateHandleNoSecure(*v6, 1);
  if ( v9 )
  {
    LODWORD(v57[0]) |= 4u;
    DWORD2(v57[5]) |= 1u;
    HIDWORD(v57[5]) = 2;
    *(_QWORD *)&v57[5] = v9;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v10 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = *a2;
      v13 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v14) = v11;
      LOBYTE(v15) = v10;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(v13 + 69144),
        4,
        2,
        12,
        (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
        v12);
    }
    v6 = a2;
  }
  if ( LODWORD(v57[0]) )
    goto LABEL_75;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
  {
    v16 = 0;
  }
  v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = *a2;
    v19 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
    LOBYTE(v20) = v17;
    LOBYTE(v21) = v16;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v20,
      *(_QWORD *)(v19 + 69144),
      2,
      2,
      13,
      (__int64)&WPP_4438f3a2f9f43d777ccb023a4199db82_Traceguids,
      v18);
    v6 = a2;
    goto LABEL_74;
  }
LABEL_82:
  CInputDest::CInputDest(v7, (const struct tagINPUTDEST *)v57);
  return v7;
}
