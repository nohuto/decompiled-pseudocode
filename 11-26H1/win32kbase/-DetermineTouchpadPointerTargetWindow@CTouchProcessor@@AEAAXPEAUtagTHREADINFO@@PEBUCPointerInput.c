/*
 * XREFs of ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1400CA7A4
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x14004E1C8 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x14009C7BC (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1400CAD6C (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1400CB240 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x140189EF4 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
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
  int v12; // r8d
  char v13; // bl
  char v14; // r13
  char v15; // r15
  struct CPointerInfoNode *v16; // r15
  int *v17; // r13
  int v18; // eax
  int v19; // r8d
  __int64 v20; // rdx
  char v21; // di
  char v22; // r15
  char v23; // bp
  int *v24; // rsi
  __int64 UserSessionState; // rax
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  char v34; // di
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  char v38; // r15
  char v39; // bp
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  struct tagPOINT *v43; // rsi
  struct tagWND *v44; // rax
  __int64 v45; // rcx
  CInputDest *v46; // rax
  int v47; // r8d
  struct CInputDest *v49; // [rsp+48h] [rbp-F0h] BYREF
  int *v50; // [rsp+50h] [rbp-E8h]
  struct CPointerInfoNode *v51; // [rsp+58h] [rbp-E0h]
  struct tagPOINT *v52; // [rsp+60h] [rbp-D8h]
  _BYTE v53[128]; // [rsp+70h] [rbp-C8h] BYREF

  v51 = a4;
  v49 = a2;
  v52 = a9;
  v50 = a8;
  CInputDest::~CInputDest(a10);
  LOBYTE(v12) = 8;
  if ( (*((_DWORD *)a3 + 57) & 8) != 0 && !a6 )
  {
    *((_OWORD *)a5 + 31) = 0LL;
    *((_OWORD *)a5 + 32) = 0LL;
  }
  if ( (*((_DWORD *)a4 + 45) & 0x2000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v22 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v23 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v23 = 0;
    }
    if ( v22 || v23 )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v12);
      LOBYTE(v26) = v23;
      LOBYTE(v27) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v26,
        *(_QWORD *)(UserSessionState + 69136),
        5,
        4,
        289,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    v24 = v50;
    CTouchProcessor::DeterminePointerTargetWindow(this, v49, v51, a5, a7, v50, a9, a10);
    if ( (*((_DWORD *)v51 + 45) & 0x10000) != 0 )
    {
      *((_DWORD *)a5 + 124) = 1;
      if ( *(_DWORD *)a10 )
      {
        *((_QWORD *)a5 + 63) = CInputDest::GetWindowHandle(a10);
        *((_DWORD *)a5 + 128) = *v24;
        *(struct tagPOINT *)((char *)a5 + 516) = *a9;
      }
    }
  }
  else
  {
    v13 = 1;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      v14 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v15 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
    {
      v15 = 0;
    }
    if ( v14 || v15 )
    {
      v28 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v12);
      LOBYTE(v29) = v15;
      LOBYTE(v30) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v30,
        v29,
        *(_QWORD *)(v28 + 69136),
        5,
        4,
        290,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    v16 = v51;
    v17 = v50;
    v49 = 0LL;
    v18 = CTouchProcessor::RecheckPointerCapture(this, *((_QWORD *)v51 + 2), a7, &v49, v50);
    v20 = 0LL;
    if ( v18 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v21 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v13 = 0;
      if ( v21 || v13 )
      {
        v31 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v19);
        LOBYTE(v32) = v13;
        LOBYTE(v33) = v21;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v33,
          v32,
          *(_QWORD *)(v31 + 69136),
          5,
          4,
          291,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      }
      CTouchProcessor::GetPointerOffset(this, *((_WORD *)v16 + 86), v52);
      CInputDest::operator=((__int64)a10, (__int64)v49);
    }
    else if ( *((_DWORD *)a5 + 124) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v38 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (v39 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v39 = 0;
      }
      if ( v38 || v39 )
      {
        v40 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v19);
        LOBYTE(v41) = v39;
        LOBYTE(v42) = v38;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v42,
          v41,
          *(_QWORD *)(v40 + 69136),
          5,
          4,
          293,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
        v20 = 0LL;
      }
      v43 = v52;
      *v17 = 0;
      LOBYTE(v20) = 1;
      *v43 = 0LL;
      v44 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a5 + 63), v20);
      if ( v44 )
      {
        v45 = *((_QWORD *)v44 + 5);
        if ( *(char *)(v45 + 20) >= 0 && *(char *)(v45 + 19) >= 0 )
        {
          *v17 = *((_DWORD *)a5 + 128);
          *v43 = *(struct tagPOINT *)((char *)a5 + 516);
          v46 = CInputDest::CInputDest((CInputDest *)v53, v44);
          CInputDest::operator=(a10, v46, v47);
          CInputDest::~CInputDest((CInputDest *)v53);
        }
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        v34 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v13 = 0;
      if ( v34 || v13 )
      {
        v35 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, v19);
        LOBYTE(v36) = v13;
        LOBYTE(v37) = v34;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v37,
          v36,
          *(_QWORD *)(v35 + 69136),
          5,
          4,
          292,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      }
      if ( *(_DWORD *)a10 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12439LL);
    }
  }
}
