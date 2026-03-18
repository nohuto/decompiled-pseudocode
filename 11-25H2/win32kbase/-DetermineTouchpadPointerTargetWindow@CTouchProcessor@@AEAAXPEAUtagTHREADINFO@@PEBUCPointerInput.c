/*
 * XREFs of ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1401FE1EC
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140209AA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14003821C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1400B8074 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1400C462C (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1400D14F0 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F6E78 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1401FDDC8 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x140203D5C (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CTouchProcessor::DetermineTouchpadPointerTargetWindow(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        const struct CPointerInputFrame *a3,
        struct CPointerInfoNode *a4,
        struct tagQ *a5,
        unsigned int a6,
        int a7,
        int *a8,
        struct tagPOINT *a9,
        struct CInputDest *a10)
{
  char v12; // r15
  char v13; // bp
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  int *v17; // rsi
  char v18; // bl
  char v19; // r12
  char v20; // r15
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  struct CPointerInfoNode *v24; // r15
  int *v25; // r12
  char v26; // di
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  char v30; // di
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  char v34; // r15
  char v35; // bp
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  struct tagPOINT *v39; // rsi
  struct tagWND *v40; // rax
  __int64 v41; // rcx
  CInputDest *v42; // rax
  struct CInputDest *v44; // [rsp+48h] [rbp-F0h] BYREF
  int *v45; // [rsp+50h] [rbp-E8h]
  struct CPointerInfoNode *v46; // [rsp+58h] [rbp-E0h]
  struct tagPOINT *v47; // [rsp+60h] [rbp-D8h]
  _BYTE v48[128]; // [rsp+70h] [rbp-C8h] BYREF

  v46 = a4;
  v44 = a2;
  v45 = a8;
  v47 = a9;
  CInputDest::~CInputDest(a10);
  if ( (*((_DWORD *)a3 + 57) & 8) != 0 && !a6 )
  {
    *(_OWORD *)((char *)a5 + 472) = 0LL;
    *(_OWORD *)((char *)a5 + 488) = 0LL;
  }
  if ( (*((_DWORD *)a4 + 45) & 0x2000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v12 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v13 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v13 = 0;
    }
    if ( v12 || v13 )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69144),
        5,
        4,
        289,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    v17 = v45;
    CTouchProcessor::DeterminePointerTargetWindow(this, v44, v46, a5, a7, v45, a9, a10);
    if ( (*((_DWORD *)v46 + 45) & 0x10000) != 0 )
    {
      *((_DWORD *)a5 + 118) = 1;
      if ( *(_DWORD *)a10 )
      {
        *((_QWORD *)a5 + 60) = CInputDest::GetWindowHandle(a10);
        *((_DWORD *)a5 + 122) = *v17;
        *(struct tagPOINT *)((char *)a5 + 492) = *a9;
      }
    }
  }
  else
  {
    v18 = 1;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v19 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v20 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v20 = 0;
    }
    if ( v19 || v20 )
    {
      v21 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v19;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        *(_QWORD *)(v21 + 69144),
        5,
        4,
        290,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    v24 = v46;
    v25 = v45;
    v44 = 0LL;
    if ( (unsigned int)CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)v46 + 2), a7, &v44, v45) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v26 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v18 = 0;
      if ( v26 || v18 )
      {
        v27 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v28) = v18;
        LOBYTE(v29) = v26;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v28,
          *(_QWORD *)(v27 + 69144),
          5,
          4,
          291,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      }
      CTouchProcessor::GetPointerOffset(this, *((_WORD *)v24 + 86), v47);
      CInputDest::operator=((__int64)a10, (__int64)v44);
    }
    else if ( *((_DWORD *)a5 + 118) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v34 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (v35 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v35 = 0;
      }
      if ( v34 || v35 )
      {
        v36 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v37) = v35;
        LOBYTE(v38) = v34;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v38,
          v37,
          *(_QWORD *)(v36 + 69144),
          5,
          4,
          293,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      }
      v39 = v47;
      *v25 = 0;
      *v39 = 0LL;
      v40 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a5 + 60), 1);
      if ( v40 )
      {
        v41 = *((_QWORD *)v40 + 5);
        if ( *(char *)(v41 + 20) >= 0 && *(char *)(v41 + 19) >= 0 )
        {
          *v25 = *((_DWORD *)a5 + 122);
          *v39 = *(struct tagPOINT *)((char *)a5 + 492);
          v42 = CInputDest::CInputDest((CInputDest *)v48, v40);
          CInputDest::operator=(a10, v42);
          CInputDest::~CInputDest((CInputDest *)v48);
        }
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v30 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v18 = 0;
      if ( v30 || v18 )
      {
        v31 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v32) = v18;
        LOBYTE(v33) = v30;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v33,
          v32,
          *(_QWORD *)(v31 + 69144),
          5,
          4,
          292,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      }
      if ( *(_DWORD *)a10 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12462);
    }
  }
}
