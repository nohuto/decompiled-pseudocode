/*
 * XREFs of ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x14020CA8C
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x140205ED0 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14003821C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8574 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x140151FE4 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x14019F190 (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     ?CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z @ 0x1401FCAD0 (-CreateNode@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GKIG@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1401FF184 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z @ 0x1402095AC (-SetNewValidState@CTouchProcessor@@QEAAHIPEAUCInputPointerNode@@@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x14020D188 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x14020DC04 (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall CTouchProcessor::UpdateActivePointer(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        struct CPointerInfoNode *a3,
        struct CInputDest *a4,
        unsigned int *a5,
        unsigned __int16 *a6,
        unsigned int *a7,
        unsigned int a8,
        unsigned __int16 a9)
{
  char *v9; // rsi
  __int16 v11; // r14
  int v12; // r15d
  unsigned int v13; // r12d
  int v14; // r13d
  int v15; // edx
  int v16; // r8d
  char v17; // bl
  struct CInputPointerNode *NodeById; // rax
  __int64 v19; // rdx
  int v20; // r8d
  struct CInputPointerNode *Node; // rdi
  char v22; // di
  bool v23; // bp
  __int64 UserSessionState; // rax
  int v25; // r8d
  int v26; // edx
  int v28; // r14d
  char v29; // di
  bool v30; // bp
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  BOOL valid; // eax
  __int64 v35; // rdx
  int v36; // r8d
  char v37; // di
  bool v38; // bp
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  unsigned __int64 v42; // r9
  int v43; // eax
  _QWORD *Target; // rax
  int v45; // r8d
  unsigned __int16 v46; // cx
  int v47; // edx
  int v48; // [rsp+28h] [rbp-150h]
  int v49; // [rsp+38h] [rbp-140h]
  _BYTE v53[128]; // [rsp+A0h] [rbp-D8h] BYREF

  v9 = (char *)a3 + 160;
  v11 = *((_WORD *)a3 + 80);
  v12 = *((_DWORD *)a3 + 42);
  v13 = *((_DWORD *)a3 + 45);
  v14 = 0;
  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1569);
  v17 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v15) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v15) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v16) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v16) = 0;
  }
  if ( (_BYTE)v15 || (_BYTE)v16 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v16,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      49,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  *a6 = 0;
  *a7 = 0;
  NodeById = CTouchProcessor::FindNodeById(this, v11, 1, 1);
  v20 = 0;
  Node = NodeById;
  if ( !NodeById )
  {
    Node = CTouchProcessor::CreateNode(this, v11, v12, v13, a9);
    v20 = 0;
    v14 = 1;
  }
  if ( !Node )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v22 = 0;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
      LOBYTE(v25) = v23;
      LOBYTE(v26) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v25,
        *(_QWORD *)(UserSessionState + 69144),
        2,
        4,
        50,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      v20 = 0;
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v19) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v19) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v17 = 0;
    if ( (_BYTE)v19 || v17 )
    {
      LOBYTE(v20) = v17;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v20,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        51,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
LABEL_33:
    InputTraceLogging::Pointer::DropInput();
    return 0LL;
  }
  if ( !v14 && (*((_DWORD *)v9 + 5) & 1) == 0 )
  {
    v28 = *((_DWORD *)Node + 15);
    if ( v28 != v12 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v29 = 0;
      }
      v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v31 = W32GetUserSessionState(WPP_GLOBAL_Control, v19);
        LOBYTE(v32) = v30;
        LOBYTE(v33) = v29;
        WPP_RECORDER_AND_TRACE_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v33,
          v32,
          *(_QWORD *)(v31 + 69144),
          2,
          v48,
          52,
          v49,
          v28,
          v12);
        v20 = 0;
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v19) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v19) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v17 = 0;
      if ( (_BYTE)v19 || v17 )
      {
        LOBYTE(v20) = v17;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v19,
          v20,
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          4,
          53,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      }
      goto LABEL_33;
    }
    valid = CTouchProcessor::SetNewValidState(this, v13, Node);
    v36 = 0;
    if ( !valid )
    {
      if ( !gbIgnoreStressedOutStuff )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131075, 1607);
        v36 = 0;
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v37 = 0;
      }
      v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v39 = W32GetUserSessionState(WPP_GLOBAL_Control, v35);
        LOBYTE(v40) = v38;
        LOBYTE(v41) = v37;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v41,
          v40,
          *(_QWORD *)(v39 + 69144),
          2,
          4,
          54,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
        v36 = 0;
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v35) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v35) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v17 = 0;
      if ( (_BYTE)v35 || v17 )
      {
        LOBYTE(v36) = v17;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v35,
          v36,
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          4,
          55,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      }
      goto LABEL_33;
    }
  }
  if ( !*(_OWORD *)((char *)Node + 40) )
    *(_OWORD *)((char *)Node + 40) = *((_OWORD *)v9 + 10);
  v42 = *((_QWORD *)v9 + 11);
  *((_DWORD *)v9 + 45) = -__CFSHR__(*((_DWORD *)a2 + 57), 9);
  v43 = *((unsigned __int16 *)Node + 16);
  *((_DWORD *)v9 + 5) &= ~0x4000000u;
  *((_DWORD *)v9 + 3) = v43;
  CTouchProcessor::UpdateStateIndicator((CTouchProcessor *)this, Node, v13, v42, *(struct tagPOINT *)(v9 + 48));
  Target = (_QWORD *)CTouchProcessor::UpdateInputCaptureAndGetTarget(this, v53, a2, v9, Node, v13, a6, a7, a8);
  CInputDest::operator=(a4, Target);
  CInputDest::~CInputDest((CInputDest *)v53);
  *((_DWORD *)a3 + 119) = *((_DWORD *)Node + 58);
  *a6 |= v14;
  v46 = *a6 | (2 * (*((_DWORD *)Node + 75) & 4));
  *a6 = v46;
  v47 = 2 * (*((_DWORD *)Node + 75) & 1);
  LOWORD(v47) = v46 | (2 * (*((_WORD *)Node + 150) & 1));
  *a6 = v47;
  *a6 = v47 | (2 * (*((_DWORD *)Node + 75) & 2));
  *a5 = *((_DWORD *)Node + 16) & 0x1F0;
  *((_DWORD *)Node + 16) = v13;
  LOBYTE(v47) = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v17 = 0;
  if ( (_BYTE)v47 || v17 )
  {
    LOBYTE(v45) = v17;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v47,
      v45,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      56,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  }
  return *((unsigned __int16 *)Node + 16);
}
