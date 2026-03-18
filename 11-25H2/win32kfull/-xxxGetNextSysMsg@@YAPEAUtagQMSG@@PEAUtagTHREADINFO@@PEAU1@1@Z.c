/*
 * XREFs of ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x14023EDC0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1400670A0 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ?WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z @ 0x14011F8C4 (-WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ShouldYieldInputQueue@@YA_NPEAUtagTHREADINFO@@@Z @ 0x14027CD60 (-ShouldYieldInputQueue@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     ?YieldInputQueue@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x14027D1B8 (-YieldInputQueue@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 *     Feature_YieldInputQueue2__private_GetVariant @ 0x140281C8C (Feature_YieldInputQueue2__private_GetVariant.c)
 *     Feature_YieldInputQueue2__private_IsEnabledNoReportingNoInline @ 0x140281CE0 (Feature_YieldInputQueue2__private_IsEnabledNoReportingNoInline.c)
 */

struct tagQMSG *__fastcall xxxGetNextSysMsg(
        struct tagTHREADINFO *a1,
        struct tagQMSG *a2,
        struct tagQMSG *a3,
        __int64 a4)
{
  __int64 v4; // r14
  struct tagQMSG *v5; // rbp
  const struct tagQMSG **v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // r8
  const struct tagQMSG **v18; // rbx
  const struct tagQMSG *v19; // rbx
  __int64 v20; // rax
  int v21; // eax
  volatile signed __int32 *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  const struct tagQMSG **v25; // rax
  const struct tagQMSG *v26; // r13
  __int64 v27; // rax
  const struct tagQMSG **v28; // rax
  int v29; // eax
  bool v30; // r12
  __int64 UserSessionState; // rax
  bool v32; // [rsp+B0h] [rbp+8h]
  int v34; // [rsp+C8h] [rbp+20h]

  v4 = *((_QWORD *)a1 + 59);
  v5 = a3;
  v8 = (const struct tagQMSG **)(v4 + 24);
  if ( (unsigned int)Feature_YieldInputQueue2__private_IsEnabledNoReportingNoInline(a1, a2, a3, a4) )
  {
    if ( (unsigned int)Feature_YieldInputQueue2__private_GetVariant(v10, v9, v11, v12) == 1 )
    {
      if ( *(_DWORD *)(v4 + 40) )
        *(_DWORD *)(*((_QWORD *)a1 + 59) + 412LL) &= ~0x1000u;
      v13 = *((_QWORD *)a1 + 59);
      v14 = *(_DWORD *)(v13 + 412) & 0x1020;
      if ( (*(_DWORD *)(v13 + 412) & 0x20) != 0 )
      {
        PostPendingMouseMove();
        v15 = *((_QWORD *)a1 + 170);
        if ( (v15 & 0x2000) == 0 && (v15 & 0x2000000000LL) == 0 )
          *(_DWORD *)(*((_QWORD *)a1 + 59) + 412LL) |= 0x1000u;
      }
      if ( *(_DWORD *)(v4 + 40) && v14 != 4128 )
        goto LABEL_28;
      if ( v14 == 4128 )
      {
        if ( *v8 )
        {
          InputTraceLogging::Mouse::YieldInputQueue(*v8, *((const struct tagQ **)a1 + 59));
          if ( (*(_DWORD *)(*((_QWORD *)a1 + 61) + 4LL) & 2) == 0 )
          {
            v16 = 7155LL;
LABEL_19:
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, v16);
          }
        }
      }
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)a1 + 59) + 412LL) & 0x20) != 0 )
        PostPendingMouseMove();
      if ( !*(_DWORD *)(v4 + 40) )
        return 0LL;
      if ( ShouldYieldInputQueue(a1) )
      {
        InputTraceLogging::Mouse::YieldInputQueue(*v8, *((const struct tagQ **)a1 + 59));
        WakeSomeoneAfterUnlockingOrUndeferring(*v8);
        if ( (*(_DWORD *)(*((_QWORD *)a1 + 61) + 4LL) & 0x402) != 0 )
          return 0LL;
        v16 = 7178LL;
        goto LABEL_19;
      }
      if ( *(_DWORD *)(v4 + 40) )
        goto LABEL_28;
    }
    return 0LL;
  }
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 59) + 412LL) & 0x20) != 0 )
    PostPendingMouseMove();
  if ( !*(_DWORD *)(v4 + 40) )
    return 0LL;
LABEL_28:
  if ( a2 && (v18 = *(const struct tagQMSG ***)(*((_QWORD *)a1 + 59) + 88LL)) != 0LL )
    v19 = *v18;
  else
    v19 = *v8;
  v20 = *((_QWORD *)a1 + 170);
  if ( (v20 & 0x2000) != 0 || (v20 & 0x2000000000LL) != 0 )
  {
    if ( !v19 )
      return v19;
    while ( 1 )
    {
      v21 = *((_DWORD *)v19 + 25);
      if ( (v21 & 0x20) == 0 && (v21 & 0x8000000) == 0 )
        break;
      if ( (v21 & 0x10) == 0 )
        break;
      v19 = *(const struct tagQMSG **)v19;
      if ( !v19 )
        return 0LL;
    }
  }
  if ( v19 )
  {
    v22 = (volatile signed __int32 *)*((_QWORD *)v19 + 13);
    if ( v22 && v22 != (volatile signed __int32 *)a1 && (_InterlockedCompareExchange(v22 + 132, 0, 0) & 0x10000) != 0 )
    {
      LODWORD(v23) = 0;
      do
      {
        v24 = *((_QWORD *)v19 + 13);
        if ( !v24 || (_InterlockedCompareExchange((volatile signed __int32 *)(v24 + 528), 0, 0) & 0x10000) == 0 )
          break;
        v25 = (const struct tagQMSG **)*((_QWORD *)v19 + 1);
        v26 = *(const struct tagQMSG **)v19;
        if ( v25 )
          *v25 = v26;
        else
          *v8 = v26;
        v27 = *((_QWORD *)v19 + 1);
        if ( *(_QWORD *)v19 )
          *(_QWORD *)(*(_QWORD *)v19 + 8LL) = v27;
        else
          *(_QWORD *)(v4 + 32) = v27;
        if ( v19 == *(const struct tagQMSG **)(v4 + 56) )
          *(_QWORD *)(v4 + 56) = 0LL;
        *((_QWORD *)v19 + 1) = 0LL;
        *(_QWORD *)v19 = 0LL;
        v28 = *(const struct tagQMSG ***)(v4 + 48);
        if ( v28 )
        {
          *v28 = v19;
          *((_QWORD *)v19 + 1) = *(_QWORD *)(v4 + 48);
          *(_QWORD *)(v4 + 48) = v19;
        }
        else
        {
          *(_QWORD *)(v4 + 48) = v19;
          *((_QWORD *)v19 + 1) = 0LL;
        }
        v29 = *((_DWORD *)v19 + 25);
        *(_QWORD *)v19 = 0LL;
        if ( (v29 & 0x2000) == 0 && (v29 & 0x4000) == 0 && (v29 & 0x10000) == 0 )
        {
          v23 = (unsigned int)(v23 + 1);
          v34 = v23;
          v30 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
          v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v30 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23);
            WPP_RECORDER_AND_TRACE_SF_qiqdd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v30,
              v32,
              *(_QWORD *)(UserSessionState + 69160));
            LODWORD(v23) = v34;
          }
          v8 = (const struct tagQMSG **)(v4 + 24);
        }
        v19 = v26;
      }
      while ( v26 );
      *(_DWORD *)(v4 + 40) -= v23;
      if ( !v19 )
        return v19;
      v5 = a3;
    }
    *(_OWORD *)v5 = *(_OWORD *)v19;
    *((_OWORD *)v5 + 1) = *((_OWORD *)v19 + 1);
    *((_OWORD *)v5 + 2) = *((_OWORD *)v19 + 2);
    *((_OWORD *)v5 + 3) = *((_OWORD *)v19 + 3);
    *((_OWORD *)v5 + 4) = *((_OWORD *)v19 + 4);
    *((_OWORD *)v5 + 5) = *((_OWORD *)v19 + 5);
    *((_OWORD *)v5 + 6) = *((_OWORD *)v19 + 6);
    *((_OWORD *)v5 + 7) = *((_OWORD *)v19 + 7);
    *((_OWORD *)v5 + 8) = *((_OWORD *)v19 + 8);
    *((_OWORD *)v5 + 9) = *((_OWORD *)v19 + 9);
    *((_QWORD *)v5 + 20) = *((_QWORD *)v19 + 20);
  }
  return v19;
}
