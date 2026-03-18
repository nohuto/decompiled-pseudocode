/*
 * XREFs of ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x140206CB4
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x140187CD8 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     EtwTraceUIPIInputError @ 0x140060E40 (EtwTraceUIPIInputError.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400B7D64 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1400B96E8 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_LsHHsLLLL @ 0x1400C7810 (WPP_RECORDER_AND_TRACE_SF_LsHHsLLLL.c)
 *     flagString @ 0x1400D0330 (flagString.c)
 *     ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1400FB1D8 (ApiSetEditionIsGpqForegroundAccessibleExplicit.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x140104744 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     messageString @ 0x140108E1C (messageString.c)
 *     GetPointerInputSource @ 0x140109A00 (GetPointerInputSource.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x140151FE4 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ApiSetEditionPostInputMessage @ 0x140196610 (ApiSetEditionPostInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A8AA8 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
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
        int a9)
{
  const struct CPointerInfoNode *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 Queue; // r13
  char v14; // bl
  struct tagTHREADINFO *ThreadInfo; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // xmm0_8
  int v21; // eax
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int64 v26; // xmm6_8
  int v27; // ebx
  struct tagTHREADINFO *v28; // rax
  unsigned int v30; // r14d
  unsigned __int64 v31; // r13
  __int64 v32; // rdx
  bool v33; // al
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r9
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // r14d
  bool v41; // di
  __int64 UserSessionState; // rax
  int v43; // r8d
  int v44; // edx
  int v45; // [rsp+28h] [rbp-C1h]
  int v46; // [rsp+30h] [rbp-B9h]
  int v47; // [rsp+38h] [rbp-B1h]
  int v48; // [rsp+40h] [rbp-A9h]
  char v49; // [rsp+98h] [rbp-51h]
  __int64 v50; // [rsp+A0h] [rbp-49h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-41h] BYREF
  int v52; // [rsp+B0h] [rbp-39h]
  __int128 v53; // [rsp+B8h] [rbp-31h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-21h]
  char v55; // [rsp+138h] [rbp+4Fh]

  v50 = 0LL;
  v10 = a4;
  Queue = CInputDest::GetQueue(a2, 0);
  v14 = 1;
  if ( !Queue )
    goto LABEL_24;
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment(v12, v11) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10309);
  ThreadInfo = CInputDest::GetThreadInfo(a2);
  if ( !ThreadInfo )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10312);
  if ( !a8 || (*(_DWORD *)v10 & 0x800) != 0 || a9 )
    goto LABEL_24;
  v16 = HMValidateHandleNoSecure(*((_QWORD *)v10 + 23), 19);
  if ( !v16 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10323);
  if ( UIPrivilegeIsolation::CheckAccessEx(
         (UIPrivilegeIsolation *)(*(_QWORD *)(v16 + 456) + 952LL),
         (const struct tagUIPI_INFO *)(Queue + 448),
         0LL)
    || (v18 = *(_QWORD *)(*(_QWORD *)(v16 + 368) + 88LL)) != 0
    && (*(_BYTE *)(v18 + 808) & 0x30) == 0x10
    && (v19 = *((_QWORD *)ThreadInfo + 58), v18 == v19)
    && (v20 = *(_QWORD *)(v19 + 864),
        v21 = *(_DWORD *)(v19 + 872),
        v51 = v20,
        v52 = v21,
        (unsigned int)ApiSetEditionIsGpqForegroundAccessibleExplicit(a8, (__int64)ThreadInfo, &v51, 0)) )
  {
LABEL_24:
    v30 = a6;
    v31 = *((unsigned __int16 *)v10 + 86);
    if ( a6 != 595 )
      v31 = *((unsigned __int16 *)v10 + 86) | ((unsigned __int64)(*((_WORD *)v10 + 90) & 0xE1F7) << 16);
    GetPointerInputSource(*((_DWORD *)v10 + 42), a8, a9, &v50);
    v33 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v55 = v33;
    v49 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      flagString(WORD1(v31), v32);
      W32GetUserSessionState(v35, v34);
      messageString(a6);
      WPP_RECORDER_AND_TRACE_SF_LsHHsLLLL(*((_QWORD *)WPP_GLOBAL_Control + 3), v55, v49, v36, v45, v46, v47, v48);
      v10 = a4;
      v30 = a6;
      v14 = 1;
    }
    v37 = *((_DWORD *)v10 + 78);
    v38 = *((_QWORD *)v10 + 31);
    v54 = 0LL;
    v53 = 0LL;
    v40 = ApiSetEditionPostInputMessage(
            (__int64)a2,
            0LL,
            v30,
            v31,
            a5,
            a7,
            v38,
            0LL,
            v37 != 0 ? 8 : 0,
            &v50,
            (__int64)&v53);
    if ( v40 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (v39 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v39 & 8) == 0)
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v14 = 0;
      }
      v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(v39, WPP_GLOBAL_Control);
        LOBYTE(v43) = v41;
        LOBYTE(v44) = v14;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v44,
          v43,
          *(_QWORD *)(UserSessionState + 69144),
          4,
          4,
          276,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      }
    }
    return v40;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v14 = 0;
    }
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control, v17);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(v23 + 69144),
        3,
        4,
        274,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    InputTraceLogging::Pointer::DropInput();
    v26 = *(_QWORD *)(Queue + 448);
    v27 = *(_DWORD *)(Queue + 456);
    v28 = PtiCurrent();
    v51 = v26;
    v52 = v27;
    EtwTraceUIPIInputError((__int64)v28, (__int64)ThreadInfo, Queue, &v51, 8);
    return 0LL;
  }
}
