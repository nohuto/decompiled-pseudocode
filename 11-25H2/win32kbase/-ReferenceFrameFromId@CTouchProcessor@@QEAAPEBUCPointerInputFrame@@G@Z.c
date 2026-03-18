/*
 * XREFs of ?ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z @ 0x1400D2D58
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1400D22F0 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1400D29C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ApiSetEditionGetThreadPointerHookData @ 0x1400D3718 (ApiSetEditionGetThreadPointerHookData.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F9DE0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1401FF790 (-FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140208EE8 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::ReferenceFrameFromId(
        CTouchProcessor *this,
        unsigned __int16 a2)
{
  unsigned __int16 v2; // r14
  char v4; // bl
  char v5; // r8
  __int64 v6; // rsi
  struct tagTHREADINFO *v7; // rdi
  unsigned __int64 v8; // rdx
  struct tagTHREADPOINTERDATA *ThreadPointerHookData; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  PERESOURCE *v12[8]; // [rsp+40h] [rbp-58h] BYREF

  v2 = a2;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      v5,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      303,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v12,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v6 = 0LL;
  v7 = PtiCurrent();
  ThreadPointerHookData = (struct tagTHREADPOINTERDATA *)ApiSetEditionGetThreadPointerHookData((char *)v7 + 1208, v2);
  if ( (ThreadPointerHookData
     || (ThreadPointerHookData = CTouchProcessor::FindThreadPointerData(
                                   this,
                                   (struct _LIST_ENTRY *)((char *)v7 + 1208),
                                   v2)) != 0LL)
    && (*((_DWORD *)ThreadPointerHookData + 12) & 8) == 0 )
  {
    v8 = *((_QWORD *)ThreadPointerHookData + 3);
    if ( v8 )
    {
      NonConstMsgData = CTouchProcessor::GetNonConstMsgData(ThreadPointerHookData, v8);
      if ( NonConstMsgData )
        v6 = CTouchProcessor::ReferenceFrame(this, *((unsigned int *)NonConstMsgData + 7));
    }
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v8) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v4 = 0;
  if ( (_BYTE)v8 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_WORD)v8,
      v4,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      304,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v12);
  return (const struct CPointerInputFrame *)v6;
}
