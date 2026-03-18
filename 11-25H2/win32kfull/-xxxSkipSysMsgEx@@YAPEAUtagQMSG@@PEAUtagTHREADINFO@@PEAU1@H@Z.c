/*
 * XREFs of ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x14018B600
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     DelQEntry @ 0x140066E80 (DelQEntry.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x140175320 (-RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD @ 0x1401827CC (WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     Feature_YieldInputQueue2__private_GetVariant @ 0x140281C8C (Feature_YieldInputQueue2__private_GetVariant.c)
 *     Feature_YieldInputQueue2__private_IsEnabledNoReportingNoInline @ 0x140281CE0 (Feature_YieldInputQueue2__private_IsEnabledNoReportingNoInline.c)
 */

struct tagQMSG *__fastcall xxxSkipSysMsgEx(struct tagTHREADINFO *a1, struct tagQMSG *a2, int a3)
{
  int v3; // r12d
  struct tagQMSG *v4; // r13
  struct tagTHREADINFO *v5; // rsi
  __int64 v6; // rbx
  bool v7; // r14
  bool v8; // bp
  int v9; // edi
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rcx
  bool v17; // al
  int v18; // edi
  __int64 v19; // rsi
  __int64 v20; // rbp
  __int64 v21; // r14
  int v22; // r15d
  __int64 v23; // r12
  int v24; // eax
  __int64 v25; // r13
  __int64 v26; // rax
  int v27; // eax
  bool v28; // di
  bool v29; // bp
  bool v30; // di
  __int64 v31; // rax
  __int64 v32; // r14
  unsigned __int8 v33; // di
  __int64 v34; // r15
  bool v35; // bp
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  bool v43; // bl
  __int64 v44; // rax
  int v45; // [rsp+20h] [rbp-108h]
  int v46; // [rsp+28h] [rbp-100h]
  int v47; // [rsp+30h] [rbp-F8h]
  int v48; // [rsp+38h] [rbp-F0h]
  char v49; // [rsp+48h] [rbp-E0h]
  char v50; // [rsp+B0h] [rbp-78h]
  int v51; // [rsp+B4h] [rbp-74h]
  char v52; // [rsp+B8h] [rbp-70h]
  __int64 v53; // [rsp+C0h] [rbp-68h]
  __int64 v54; // [rsp+C8h] [rbp-60h]
  __int64 v55; // [rsp+D0h] [rbp-58h]
  char v59; // [rsp+148h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 59) + 88LL);
  if ( !v6 )
    return 0LL;
  v7 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  v8 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
    && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
  if ( v7 || v8 )
  {
    v9 = *((_DWORD *)a2 + 6);
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v7,
      v8,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      18,
      24,
      (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
      v9);
  }
  InputTraceLogging::Delivery::RemoveMessage(v4, *((const struct tagQ **)v5 + 59));
  if ( *(_QWORD *)(v6 + 16) != *((_QWORD *)v4 + 2)
    || (v15 = *(_DWORD *)(v6 + 24), v15 != *((_DWORD *)v4 + 6))
    || v15 != 512 && (*(_QWORD *)(v6 + 104) != *((_QWORD *)v4 + 13) || *(_DWORD *)(v6 + 48) != *((_DWORD *)v4 + 12)) )
  {
    v16 = *(_QWORD *)&WPP_GLOBAL_Control;
    v17 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v59 = v17;
    v50 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v17 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v18 = *(_DWORD *)(v6 + 48);
      v19 = *(_QWORD *)(v6 + 40);
      v20 = *(_QWORD *)(v6 + 32);
      v21 = *(_QWORD *)(v6 + 16);
      v22 = *(_DWORD *)(v6 + 24);
      v23 = *(_QWORD *)(v6 + 104);
      v51 = *((_DWORD *)v4 + 12);
      v53 = *((_QWORD *)v4 + 5);
      v54 = *((_QWORD *)v4 + 4);
      v55 = *((_QWORD *)v4 + 2);
      v24 = *((_DWORD *)v4 + 6);
      v25 = *((_QWORD *)v4 + 13);
      v52 = v24;
      LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      v26 = W32GetUserSessionState(v16, v11);
      v49 = v25;
      v4 = a2;
      WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v59,
        v50,
        *(_QWORD *)(v26 + 69160),
        v45,
        v46,
        v47,
        v48,
        (char)a2,
        v49,
        v52,
        v55,
        v54,
        v53,
        v51,
        v6,
        v23,
        v22,
        v21,
        v20,
        v19,
        v18);
      v5 = a1;
      v3 = a3;
    }
    v6 = *(_QWORD *)(*((_QWORD *)v5 + 59) + 24LL);
    if ( v6 )
    {
      while ( 1 )
      {
        if ( *(_QWORD *)(v6 + 16) == *((_QWORD *)v4 + 2) )
        {
          v27 = *(_DWORD *)(v6 + 24);
          if ( v27 == *((_DWORD *)v4 + 6)
            && (v27 == 512
             || *(_QWORD *)(v6 + 104) == *((_QWORD *)v4 + 13) && *(_DWORD *)(v6 + 48) == *((_DWORD *)v4 + 12)) )
          {
            break;
          }
        }
        v6 = *(_QWORD *)v6;
        if ( !v6 )
          goto LABEL_34;
      }
      v12 = *(_QWORD *)&WPP_GLOBAL_Control;
      v29 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
      v30 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
         && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
      if ( v29 || v30 )
      {
        v31 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v29,
          v30,
          *(_QWORD *)(v31 + 69160),
          5,
          18,
          26,
          (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
          v6);
      }
      goto LABEL_50;
    }
LABEL_34:
    v28 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    v43 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
       && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
    if ( v28 || v43 )
    {
      v44 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v28,
        v43,
        *(_QWORD *)(v44 + 69160),
        5,
        18,
        27,
        (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids);
    }
    return 0LL;
  }
LABEL_50:
  v32 = *((_QWORD *)v5 + 59);
  v33 = 0;
  v34 = *(_QWORD *)(v32 + 88);
  if ( v6 == v34 )
  {
    v12 = *(_QWORD *)&WPP_GLOBAL_Control;
    v35 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20000) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
      && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v33 = 1;
    }
    if ( v35 || v33 )
    {
      v36 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v11);
      WPP_RECORDER_AND_TRACE_SF_qq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v35,
        v33,
        *(_QWORD *)(v36 + 69160),
        5,
        18,
        28,
        (__int64)&WPP_62b8cb8514ba365a29e38d0f8208fd40_Traceguids,
        v32,
        v34);
    }
    *(_QWORD *)(*((_QWORD *)v5 + 59) + 88LL) = 0LL;
  }
  if ( (unsigned int)Feature_YieldInputQueue2__private_IsEnabledNoReportingNoInline(v12, v11, v13, v14) )
  {
    if ( (unsigned int)Feature_YieldInputQueue2__private_GetVariant(v38, v37, v39, v40) == 3
      && (*(_DWORD *)(v6 + 100) & 0x10000000) != 0 )
    {
      v41 = *((_QWORD *)v5 + 59);
      if ( *(_WORD *)(v41 + 524) )
        ++*(_WORD *)(v41 + 526);
    }
  }
  DelQEntry(*((_QWORD *)v5 + 59) + 24LL, (__int64 *)v6, v3);
  if ( v3 )
  {
    v6 = 0LL;
  }
  else
  {
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)v6 = 0LL;
  }
  EtwTraceInputProcessDelay(v5);
  *(_DWORD *)(*((_QWORD *)v5 + 59) + 432LL) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (*((_DWORD *)v4 + 25) & 0x40000) == 0 )
  {
    UpdateKeyStateForMessage(v5, v4);
    if ( v6 )
      *(_DWORD *)(v6 + 100) |= 0x40000u;
  }
  return (struct tagQMSG *)v6;
}
