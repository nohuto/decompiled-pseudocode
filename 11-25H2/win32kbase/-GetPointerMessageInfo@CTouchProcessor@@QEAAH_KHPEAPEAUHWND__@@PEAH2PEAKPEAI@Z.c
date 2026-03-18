/*
 * XREFs of ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1402037E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1400B8074 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1400D1578 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D29C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9DE0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140208EE8 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14020C628 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerMessageInfo(
        PERESOURCE *this,
        void *a2,
        int a3,
        HWND *a4,
        int *a5,
        int *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  int v9; // r14d
  void *v10; // rsi
  unsigned int v12; // ebx
  char v13; // di
  CTouchProcessor *v14; // rcx
  int v15; // edx
  struct CPointerMsgData *NonConstMsgData; // rbp
  int v17; // r8d
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rsi
  CInputDest *v22; // rcx
  HWND WindowHandle; // rax
  int v24; // r8d
  int v25; // edx
  int v26; // r8d
  __int16 v28; // [rsp+30h] [rbp-88h]
  int v29; // [rsp+40h] [rbp-78h] BYREF
  CInputDest *v30; // [rsp+48h] [rbp-70h] BYREF
  PERESOURCE *v31[8]; // [rsp+50h] [rbp-68h] BYREF

  v9 = a3;
  v10 = a2;
  v12 = 0;
  v13 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      98,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  v30 = 0LL;
  v29 = 0;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v31, this + 4, v10);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v14, (__int64)v10);
  if ( NonConstMsgData )
  {
    CTouchProcessor::GetPointerCapture((CTouchProcessor *)this, (unsigned __int64)v10, v9, &v30, &v29);
    v19 = CTouchProcessor::ReferenceFrame(this, *((unsigned int *)NonConstMsgData + 7));
    v20 = v19;
    if ( v19 )
    {
      if ( *((_DWORD *)NonConstMsgData + 8) >= *(_DWORD *)(v19 + 48) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4477);
      v21 = *(_QWORD *)(v20 + 240) + 480LL * *((unsigned int *)NonConstMsgData + 8);
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v21) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4479);
      if ( *((_WORD *)NonConstMsgData + 8) != *(_WORD *)(v21 + 172) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4480);
      v22 = v30;
      if ( v30 )
      {
        WindowHandle = CInputDest::GetWindowHandle(v30);
        v24 = v29;
        *a4 = WindowHandle;
      }
      else
      {
        *a4 = *(HWND *)(v21 + 192);
        v24 = *(_DWORD *)(v21 + 144);
      }
      if ( a5 )
        *a5 = v22 != 0LL;
      if ( a6 )
        *a6 = v24;
      if ( a7 )
        *a7 = *(_DWORD *)(v21 + 168);
      if ( a8 )
        *a8 = *(_DWORD *)(v21 + 180);
      CTouchProcessor::UnreferenceFrame(this, v20);
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v25) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v25) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v26) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        LOBYTE(v26) = 0;
      }
      if ( (_BYTE)v25 || (_BYTE)v26 )
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v25,
          v26,
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          4,
          101,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      v12 = 1;
    }
    else
    {
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v15) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v15) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v13 = 0;
      if ( (_BYTE)v15 || v13 )
      {
        v28 = 100;
        goto LABEL_33;
      }
    }
  }
  else
  {
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v15) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v13 = 0;
    if ( (_BYTE)v15 || v13 )
    {
      v28 = 99;
LABEL_33:
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        v18[3],
        v15,
        v17,
        v18[8],
        5,
        4,
        v28,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v31);
  return v12;
}
