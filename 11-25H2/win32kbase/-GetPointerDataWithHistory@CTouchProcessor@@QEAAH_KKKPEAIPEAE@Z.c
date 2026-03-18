/*
 * XREFs of ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1400D1BE0
 * Callers:
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1400D20B0 (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     GetPointerInfoSize @ 0x1400EC9DC (GetPointerInfoSize.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1401086A0 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x14019F2C4 (--0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1401FF0C0 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14020257C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1402029FC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x140204310 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x140205BFC (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataWithHistory(
        CTouchProcessor *this,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        struct tagPOINTER_INFO *a6)
{
  char v9; // di
  int v10; // edx
  int v11; // r8d
  __int64 PointerInfoSize; // r12
  unsigned int v13; // ebx
  CTouchProcessor *v14; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v16; // edx
  struct CPointerMsgData *v17; // rsi
  _QWORD *v18; // rcx
  void *v19; // r8
  __int64 FrameById; // rax
  __int64 v21; // rbp
  CPointerInfoNode *v22; // rsi
  unsigned int v23; // r14d
  unsigned int HistoryCount; // eax
  unsigned int v25; // esi
  unsigned int v26; // r15d
  int v27; // edx
  const struct CPointerInputFrame *PreviousFrameByDevice; // rbp
  int v29; // eax
  CPointerInfoNode *v30; // rsi
  unsigned int v31; // eax
  void *v32; // r8
  __int16 v34; // [rsp+30h] [rbp-78h]
  __int64 v35; // [rsp+50h] [rbp-58h]
  _BYTE v36[80]; // [rsp+58h] [rbp-50h] BYREF
  int v39; // [rsp+C8h] [rbp+20h]

  v9 = 1;
  PointerInfoSize = (unsigned int)GetPointerInfoSize(a3);
  v39 = 1;
  v13 = 0;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v11) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v11) = 0;
  }
  if ( (_BYTE)v10 || (_BYTE)v11 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v11,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      119,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v36, (CTouchProcessor *)((char *)this + 32));
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v14, a2);
  v17 = NonConstMsgData;
  if ( NonConstMsgData )
  {
    FrameById = CTouchProcessor::FindFrameById(this, *((unsigned int *)NonConstMsgData + 7), 4LL);
    v35 = FrameById;
    v21 = FrameById;
    if ( FrameById )
    {
      if ( *((_DWORD *)v17 + 8) >= *(_DWORD *)(FrameById + 48) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5136LL);
      v22 = (CPointerInfoNode *)(*(_QWORD *)(v21 + 240) + 480LL * *((unsigned int *)v17 + 8));
      if ( !(unsigned int)CPointerInfoNode::IsValid(v22) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5138LL);
      if ( (*(_DWORD *)v22 & 2) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5139LL);
      v23 = 1;
      if ( a4 >= (unsigned int)PointerInfoSize )
      {
        v39 = CTouchProcessor::PointerInfoCopyOutHelper(
                this,
                v22,
                *(struct tagHID_POINTER_DEVICE_INFO **)(v21 + 256),
                a3,
                PointerInfoSize,
                a6);
        if ( v39 )
        {
          a4 -= PointerInfoSize;
          a6 = (struct tagPOINTER_INFO *)((char *)a6 + PointerInfoSize);
        }
      }
      HistoryCount = CPointerInfoNode::GetHistoryCount(v22);
      v25 = *((_DWORD *)v22 + 86);
      v26 = HistoryCount;
      PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, (const struct CPointerInputFrame *)v21);
      v29 = v39;
      if ( v39 )
      {
        while ( PreviousFrameByDevice )
        {
          if ( v26 > 1 )
          {
            if ( v25 >= *((_DWORD *)PreviousFrameByDevice + 12) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5168LL);
            v30 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 30) + 480LL * v25);
            if ( !(unsigned int)CPointerInfoNode::IsValid(v30) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5170LL);
            ++v23;
            if ( a4 >= (unsigned int)PointerInfoSize )
            {
              v39 = CTouchProcessor::PointerInfoCopyOutHelper(
                      this,
                      v30,
                      *(struct tagHID_POINTER_DEVICE_INFO **)(v35 + 256),
                      a3,
                      PointerInfoSize,
                      a6);
              if ( v39 )
              {
                a6 = (struct tagPOINTER_INFO *)((char *)a6 + PointerInfoSize);
                a4 -= PointerInfoSize;
              }
            }
            if ( CPointerInfoNode::GetHistoryCount(v30) != v26 - 1 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5189LL);
            v31 = CPointerInfoNode::GetHistoryCount(v30);
            v25 = *((_DWORD *)v30 + 86);
            v26 = v31;
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
            v29 = v39;
            if ( v39 )
              continue;
          }
          if ( !v29 )
            goto LABEL_58;
          break;
        }
        *a5 = v23;
      }
LABEL_58:
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v27) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v27) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v9 = 0;
      if ( (_BYTE)v27 || v9 )
      {
        v32 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
        LOBYTE(v32) = v9;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v27,
          (_DWORD)v32,
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          4,
          122,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      }
      v13 = v39;
    }
    else
    {
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v16) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v9 = 0;
      if ( (_BYTE)v16 || v9 )
      {
        v19 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
        v34 = 121;
        goto LABEL_33;
      }
    }
  }
  else
  {
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v16) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( (_BYTE)v16 || v9 )
    {
      v19 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
      v34 = 120;
LABEL_33:
      LOBYTE(v19) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        v18[3],
        v16,
        (_DWORD)v19,
        v18[8],
        5,
        4,
        v34,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
  }
  CInpLockGuardShared::~CInpLockGuardShared((CInpLockGuardShared *)v36);
  return v13;
}
