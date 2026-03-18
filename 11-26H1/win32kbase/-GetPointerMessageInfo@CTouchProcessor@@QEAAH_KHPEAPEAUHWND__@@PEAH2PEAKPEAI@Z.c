/*
 * XREFs of ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x14004D760
 * Callers:
 *     <none>
 * Callees:
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14004C5B4 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x14004C77C (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x14004CC00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x14004CC60 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x14004CC94 (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     ?GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z @ 0x14004E250 (-GetPointerCaptureData@CTouchProcessor@@AEAAPEAUCPointerCaptureData@@_K@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerMessageInfo(
        PERESOURCE *this,
        int *a2,
        int a3,
        HWND *a4,
        int *a5,
        int *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  int v9; // esi
  int *v10; // rdi
  CInputDest *v12; // rbp
  unsigned int v13; // ebx
  int v14; // r14d
  __int64 v15; // rdx
  int v16; // r8d
  struct CPointerCaptureData *PointerCaptureData; // rax
  struct CInputDest *PointerCaptureInt; // rax
  _QWORD *v19; // rax
  __int64 v20; // r15
  __int64 v21; // rsi
  int v22; // r8d
  CTouchProcessor *v24; // rcx
  __int16 v25; // [rsp+30h] [rbp-88h]
  PERESOURCE *v26[15]; // [rsp+40h] [rbp-78h] BYREF
  int v27; // [rsp+C8h] [rbp+10h] BYREF

  v9 = a3;
  v10 = a2;
  v12 = 0LL;
  v13 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
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
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v27 = 0;
  v14 = 0;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded((CInpLockGuardExclusiveIfNeeded *)v26, this + 4, v10);
  if ( !v10 )
  {
    v24 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v15) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      LOBYTE(v13) = 0;
    if ( !(_BYTE)v15 && !(_BYTE)v13 )
      goto LABEL_54;
    v25 = 99;
    goto LABEL_47;
  }
  if ( (v10[9] & 0x80u) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 10641LL);
  PointerCaptureData = CTouchProcessor::GetPointerCaptureData((CTouchProcessor *)this, (unsigned __int64)v10);
  if ( PointerCaptureData )
  {
    PointerCaptureInt = CTouchProcessor::GetPointerCaptureInt(
                          (CTouchProcessor *)this,
                          (struct CPointerCaptureData *)((char *)PointerCaptureData + (v9 != 0 ? 168LL : 32LL)),
                          &v27);
    v14 = v27;
    v12 = PointerCaptureInt;
  }
  v19 = CTouchProcessor::ReferenceFrame((__int64)this, v10[7]);
  v20 = (__int64)v19;
  if ( !v19 )
  {
    v24 = WPP_GLOBAL_Control;
    LOBYTE(v15) = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      LOBYTE(v13) = 0;
    if ( !(_BYTE)v15 && !(_BYTE)v13 )
      goto LABEL_54;
    v25 = 100;
LABEL_47:
    LOBYTE(v16) = v13;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)v24 + 3),
      v15,
      v16,
      *((_QWORD *)v24 + 8),
      5,
      4,
      v25,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
LABEL_54:
    v13 = 0;
    goto LABEL_37;
  }
  if ( (unsigned int)v10[8] >= *((_DWORD *)v19 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4460LL);
  v21 = *(_QWORD *)(v20 + 240) + 480LL * (unsigned int)v10[8];
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v21) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4462LL);
  if ( *((_WORD *)v10 + 8) != *(_WORD *)(v21 + 172) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4463LL);
  if ( v12 )
  {
    *a4 = CInputDest::GetWindowHandle(v12);
  }
  else
  {
    *a4 = *(HWND *)(v21 + 192);
    v14 = *(_DWORD *)(v21 + 144);
  }
  if ( a5 )
    *a5 = v12 != 0LL;
  if ( a6 )
    *a6 = v14;
  if ( a7 )
    *a7 = *(_DWORD *)(v21 + 168);
  if ( a8 )
    *a8 = *(_DWORD *)(v21 + 180);
  CTouchProcessor::UnreferenceFrame((__int64)this, v20);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v15) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v15) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v22) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v22) = 0;
  }
  if ( (_BYTE)v15 || (_BYTE)v22 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v22,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      101,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
LABEL_37:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v26, v15);
  return v13;
}
