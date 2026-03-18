/*
 * XREFs of ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIG@Z @ 0x14010C4A8
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x14010BAD8 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x14004E2F4 (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14009C7BC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x14010CBE8 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x14010D3F8 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x14010D6C0 (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAI@Z @ 0x14010DBCC (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x1401BEF5C (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall CTouchProcessor::UpdateActivePointer(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3,
        struct CInputDest *a4,
        unsigned int *a5,
        unsigned __int16 *a6,
        unsigned int *a7,
        unsigned __int16 a8)
{
  char *v8; // r14
  unsigned __int16 v9; // bp
  unsigned int v11; // r15d
  int v12; // r12d
  int v14; // edx
  int v15; // r8d
  char v16; // bl
  int v17; // edx
  __int64 v18; // r9
  CTouchProcessor *i; // rax
  struct CInputPointerNode *Node; // rdi
  int v21; // r8d
  char v22; // di
  bool v23; // si
  __int64 UserSessionState; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // r8
  int v29; // ebp
  char v30; // di
  bool v31; // si
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  unsigned int v35; // ebp
  BOOL valid; // eax
  int v37; // edx
  int v38; // r8d
  char v39; // di
  bool v40; // si
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  __int64 v44; // rcx
  unsigned __int64 v45; // r9
  int v46; // eax
  _QWORD *Target; // rax
  int v48; // r8d
  int v49; // r8d
  unsigned __int16 v50; // r12
  unsigned __int16 v51; // cx
  int v52; // edx
  int v53; // [rsp+28h] [rbp-150h]
  int v54; // [rsp+38h] [rbp-140h]
  unsigned int v55; // [rsp+54h] [rbp-124h]
  _BYTE v58[80]; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v59; // [rsp+F0h] [rbp-88h] BYREF
  int v60; // [rsp+FCh] [rbp-7Ch]

  v8 = (char *)a3 + 160;
  v9 = *((_WORD *)a3 + 80);
  v11 = *((_DWORD *)a3 + 42);
  v12 = 0;
  v55 = *((_DWORD *)a3 + 45);
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1557LL);
  v16 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v14) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v15) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v15) = 0;
  }
  if ( (_BYTE)v14 || (_BYTE)v15 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v14,
      v15,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      49,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  *a6 = 0;
  *a7 = 0;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8594LL);
  for ( i = (CTouchProcessor *)this[10]; i != (CTouchProcessor *)(this + 10); i = *(CTouchProcessor **)i )
  {
    Node = (CTouchProcessor *)((char *)i - 16);
    if ( *((_WORD *)i + 9) == v9 )
      goto LABEL_20;
  }
  Node = CTouchProcessor::CreateNode((CTouchProcessor *)this, v9, v11, v55, a8);
  v12 = 1;
LABEL_20:
  v21 = 0;
  if ( !Node )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v22 = 0;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v17, 0);
      LOBYTE(v25) = v23;
      LOBYTE(v26) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v25,
        *(_QWORD *)(UserSessionState + 69136),
        2,
        4,
        50,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      v21 = 0;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v17) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v17) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v16 = 0;
    if ( (_BYTE)v17 || v16 )
    {
      LOBYTE(v21) = v16;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v21,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        51,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    v27 = 2LL;
LABEL_39:
    InputTraceLogging::Pointer::DropInput(a2, v8, v27, v18);
    return 0LL;
  }
  if ( v12 || (*((_DWORD *)a3 + 45) & 1) != 0 )
  {
    v35 = v55;
  }
  else
  {
    v29 = *((_DWORD *)Node + 15);
    if ( v29 != v11 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v30 = 0;
      }
      v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v32 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v17, 0);
        LOBYTE(v33) = v31;
        LOBYTE(v34) = v30;
        WPP_RECORDER_AND_TRACE_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v34,
          v33,
          *(_QWORD *)(v32 + 69136),
          2,
          v53,
          52,
          v54,
          v29,
          v11);
        v21 = 0;
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v17) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v17) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v16 = 0;
      if ( (_BYTE)v17 || v16 )
      {
        LOBYTE(v21) = v16;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v17,
          v21,
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          4,
          53,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      }
      v27 = 3LL;
      goto LABEL_39;
    }
    v35 = v55;
    valid = CTouchProcessor::SetNewValidState(this, v55, Node);
    v38 = 0;
    if ( !valid )
    {
      if ( !gbIgnoreStressedOutStuff )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131075LL, 1595LL);
        v38 = 0;
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v39 = 0;
      }
      v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v41 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v37, 0);
        LOBYTE(v42) = v40;
        LOBYTE(v43) = v39;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v43,
          v42,
          *(_QWORD *)(v41 + 69136),
          2,
          4,
          54,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
        v38 = 0;
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v37) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v37) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v16 = 0;
      if ( (_BYTE)v37 || v16 )
      {
        LOBYTE(v38) = v16;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v37,
          v38,
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          4,
          55,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      }
      v27 = 4LL;
      goto LABEL_39;
    }
  }
  v44 = *((_QWORD *)Node + 5);
  if ( !v44 )
    v44 = *((_QWORD *)Node + 6);
  if ( !v44 )
    *(_OWORD *)((char *)Node + 40) = *((_OWORD *)v8 + 10);
  v45 = *((_QWORD *)a3 + 31);
  *((_DWORD *)v8 + 45) = -__CFSHR__(*((_DWORD *)a2 + 57), 9);
  v46 = *((unsigned __int16 *)Node + 16);
  *((_DWORD *)a3 + 45) &= ~0x4000000u;
  *((_DWORD *)a3 + 43) = v46;
  CTouchProcessor::UpdateStateIndicator((CTouchProcessor *)this, Node, v35, v45, *(struct tagPOINT *)((char *)a3 + 208));
  Target = (_QWORD *)CTouchProcessor::UpdateInputCaptureAndGetTarget(this, v58, a2, v8, Node, v35, a6, a7);
  CInputDest::operator=(a4, Target, v48);
  v49 = 0;
  if ( v60 )
  {
    HMAssignmentUnlock(&v59);
    v49 = 0;
  }
  *((_DWORD *)a3 + 119) = *((_DWORD *)Node + 58);
  v50 = *a6 | v12;
  *a6 = v50;
  v51 = v50 | (2 * (*((_DWORD *)Node + 75) & 4));
  *a6 = v51;
  v52 = 2 * (*((_DWORD *)Node + 75) & 1);
  LOWORD(v52) = v51 | (2 * (*((_WORD *)Node + 150) & 1));
  *a6 = v52;
  *a6 = v52 | (2 * (*((_DWORD *)Node + 75) & 2));
  *a5 = *((_DWORD *)Node + 16) & 0x1F0;
  *((_DWORD *)Node + 16) = v35;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v52) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v52) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v16 = 0;
  if ( (_BYTE)v52 || v16 )
  {
    LOBYTE(v49) = v16;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v52,
      v49,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      56,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
  return *((unsigned __int16 *)Node + 16);
}
