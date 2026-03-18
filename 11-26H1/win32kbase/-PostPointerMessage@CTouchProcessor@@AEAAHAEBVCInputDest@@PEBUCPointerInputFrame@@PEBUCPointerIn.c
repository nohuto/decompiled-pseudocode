/*
 * XREFs of ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x14010136C
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x14006964C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x14006D78C (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     EditionPostInputMessage @ 0x14006DB88 (EditionPostInputMessage.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     EtwTraceUIPIInputError @ 0x14006F600 (EtwTraceUIPIInputError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1400D0FF0 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     GetPointerInputSource @ 0x140101880 (GetPointerInputSource.c)
 *     WPP_RECORDER_AND_TRACE_SF_LsHHsLLLL @ 0x1401018E4 (WPP_RECORDER_AND_TRACE_SF_LsHHsLLLL.c)
 *     messageString @ 0x140101BB8 (messageString.c)
 *     flagString @ 0x140101C60 (flagString.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x14010D3F8 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x140124498 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTouchProcessor::PostPointerMessage(
        CTouchProcessor *this,
        const struct CInputDest *a2,
        const struct CPointerInputFrame *a3,
        const struct CPointerInfoNode *a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  unsigned int v9; // r12d
  const struct CPointerInfoNode *v10; // r15
  CInputDest *v11; // r14
  char v12; // bl
  struct tagTHREADINFO *ThreadInfo; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // r13
  __int64 v18; // rdx
  struct tagTHREADINFO *v19; // rsi
  __int64 v20; // rdi
  int v21; // edx
  int v22; // r8d
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // xmm0_8
  int v27; // eax
  bool v28; // di
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // xmm6_8
  int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct tagTHREADINFO *v36; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // r13
  CTouchProcessor *v40; // rcx
  char v41; // al
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  __int64 UserSessionState; // rax
  __int64 v46; // r8
  int v47; // r8d
  int v48; // edx
  int v49; // r9d
  bool v50; // cf
  __int64 v51; // rax
  unsigned int v52; // r15d
  int v53; // r12d
  int (*v54)(void); // rax
  int v55; // ecx
  int v56; // r8d
  bool v57; // di
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  bool v61; // [rsp+98h] [rbp-51h]
  const struct CPointerInfoNode *v62; // [rsp+A0h] [rbp-49h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-41h] BYREF
  int v64; // [rsp+B0h] [rbp-39h]
  __int128 v65; // [rsp+B8h] [rbp-31h] BYREF
  __int64 v66; // [rsp+C8h] [rbp-21h]
  char v67; // [rsp+138h] [rbp+4Fh]
  __int64 v69; // [rsp+140h] [rbp+57h]
  const struct CPointerInfoNode *v71; // [rsp+150h] [rbp+67h] BYREF

  v71 = a4;
  v9 = a8;
  v10 = a4;
  v11 = a2;
  v62 = 0LL;
  v12 = 1;
  if ( !*(_DWORD *)a2 )
    goto LABEL_27;
  if ( *((_DWORD *)a2 + 23) != 2 )
    goto LABEL_27;
  ThreadInfo = CInputDest::GetThreadInfo(a2);
  if ( !ThreadInfo )
    goto LABEL_27;
  v17 = *((_QWORD *)ThreadInfo + 58);
  if ( !v17 )
    goto LABEL_27;
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment(v15, v14, v16) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10292LL);
  v19 = CInputDest::GetThreadInfo(v11);
  if ( !v19 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10295LL);
  if ( !v9 || (*(_DWORD *)v10 & 0x800) != 0 || a9 )
    goto LABEL_27;
  LOBYTE(v18) = 19;
  v20 = HMValidateHandleNoSecure(*((_QWORD *)v10 + 23), v18);
  if ( !v20 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10306LL);
  if ( UIPrivilegeIsolation::CheckAccessEx(
         (UIPrivilegeIsolation *)(*(_QWORD *)(v20 + 456) + 952LL),
         (const struct tagUIPI_INFO *)(v17 + 472),
         0LL)
    || (v24 = *(_QWORD *)(*(_QWORD *)(v20 + 368) + 88LL)) != 0
    && (*(_BYTE *)(v24 + 808) & 0x30) == 0x10
    && (v25 = *((_QWORD *)v19 + 57), v24 == v25)
    && (v26 = *(_QWORD *)(v25 + 864),
        v27 = *(_DWORD *)(v25 + 872),
        v63 = v26,
        v64 = v27,
        (unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(v9, v19, &v63, 0LL)) )
  {
LABEL_27:
    v38 = *((unsigned __int16 *)v10 + 86);
    v63 = v38;
    if ( a6 == 595 )
      v39 = (unsigned int)v38;
    else
      v39 = v38 | ((unsigned __int64)(*((_WORD *)v10 + 90) & 0xE1F7) << 16);
    GetPointerInputSource(*((unsigned int *)v10 + 42), v9, a9, &v62);
    v40 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v41 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v41 = 0;
    }
    v67 = v41;
    LOBYTE(v40) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    v61 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      flagString(WORD1(v39), 0LL);
      UserSessionState = W32GetUserSessionState(v43, v42, v44);
      messageString(a6, a6, v46, *(_QWORD *)(UserSessionState + 69136));
      LOBYTE(v47) = v61;
      LOBYTE(v48) = v67;
      WPP_RECORDER_AND_TRACE_SF_LsHHsLLLL(*((_QWORD *)WPP_GLOBAL_Control + 3), v48, v47, v49);
      v10 = v71;
      v11 = a2;
      v12 = 1;
    }
    v50 = *((_DWORD *)v10 + 78) != 0;
    v66 = 0LL;
    v51 = *((_QWORD *)v10 + 31);
    v52 = 0;
    v69 = v51;
    v53 = v50 ? 8 : 0;
    v65 = 0LL;
    v54 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v40) + 48) + 4400LL);
    if ( v54 )
    {
      if ( v54() >= 0 )
      {
        v71 = v62;
        v52 = EditionPostInputMessage((__int64)v11, 0LL, a6, v39, a5, a7, v69, 0LL, v53, (__int64)&v71, (__int64)&v65);
        if ( v52 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (v55 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v55 & 8) == 0)
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
          {
            v12 = 0;
          }
          v57 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v58 = W32GetUserSessionState(v55, (_DWORD)WPP_GLOBAL_Control, v56);
            LOBYTE(v59) = v57;
            LOBYTE(v60) = v12;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v60,
              v59,
              *(_QWORD *)(v58 + 69136),
              4,
              4,
              276,
              (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
          }
        }
      }
    }
    return v52;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v12 = 0;
    }
    v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v29 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v21, v22);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v31,
        v30,
        *(_QWORD *)(v29 + 69136),
        3,
        4,
        274,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    InputTraceLogging::Pointer::DropInput(a3, (char *)v10 + 160, 6LL, v23);
    v32 = *(_QWORD *)(v17 + 472);
    v33 = *(_DWORD *)(v17 + 480);
    v36 = PtiCurrent(v35, v34);
    v63 = v32;
    v64 = v33;
    EtwTraceUIPIInputError((__int64)v36, (__int64)v19, v17, &v63, 8);
    return 0LL;
  }
}
