/*
 * XREFs of ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x140053890
 * Callers:
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1400537C4 (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     GetPointerInfoSize @ 0x140050B38 (GetPointerInfoSize.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140050B68 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x140050DAC (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x140051C6C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14006C3AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x14014553C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataWithHistory(
        PERESOURCE *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        struct tagPOINTER_INFO *a6)
{
  char v9; // bl
  int v10; // edx
  int v11; // r8d
  __int64 PointerInfoSize; // r15
  PERESOURCE *v13; // rsi
  CTouchProcessor *v14; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v16; // edx
  struct CPointerMsgData *v17; // rdi
  const struct CPointerInputFrame *FrameById; // rax
  int v19; // edx
  const struct CPointerInputFrame *v20; // r13
  CPointerInfoNode *v21; // rdi
  unsigned int v22; // ebp
  unsigned int HistoryCount; // eax
  unsigned int v24; // edi
  unsigned int v25; // r14d
  int v26; // edx
  const struct CPointerInputFrame *PreviousFrameByDevice; // rsi
  unsigned int v28; // eax
  CPointerInfoNode *v29; // rdi
  unsigned int v30; // eax
  void *v32; // r8
  void *v33; // r8
  void *v34; // r8
  char *v35; // [rsp+50h] [rbp-48h] BYREF
  bool IsLockedShared; // [rsp+58h] [rbp-40h]
  unsigned int v39; // [rsp+B8h] [rbp+20h]

  v9 = 1;
  PointerInfoSize = (unsigned int)GetPointerInfoSize(a3);
  v39 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
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
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v13 = this + 4;
  v35 = (char *)(this + 4);
  IsLockedShared = tagDomLock::IsLockedShared(this + 4);
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceShared(*v13);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v14, a2);
  v17 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v16) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( (_BYTE)v16 || v9 )
    {
      v32 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
      LOBYTE(v32) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        (_DWORD)v32,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        120,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    if ( !IsLockedShared )
      ExReleaseResourceAndLeaveCriticalRegion(*v13);
    return 0LL;
  }
  FrameById = (const struct CPointerInputFrame *)CTouchProcessor::FindFrameById(
                                                   (__int64)this,
                                                   *((_DWORD *)NonConstMsgData + 7),
                                                   4);
  v20 = FrameById;
  if ( !FrameById )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v19) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v19) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( (_BYTE)v19 || v9 )
    {
      v33 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
      LOBYTE(v33) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        (_DWORD)v33,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        121,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    CInpLockGuardShared::~CInpLockGuardShared((CInpLockGuardShared *)&v35);
    return 0LL;
  }
  if ( *((_DWORD *)v17 + 8) >= *((_DWORD *)FrameById + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5119LL);
  v21 = (CPointerInfoNode *)(*((_QWORD *)v20 + 30) + 480LL * *((unsigned int *)v17 + 8));
  if ( !(unsigned int)CPointerInfoNode::IsValid(v21) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5121LL);
  if ( (*(_DWORD *)v21 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5122LL);
  v22 = 1;
  if ( a4 >= (unsigned int)PointerInfoSize )
  {
    v39 = CTouchProcessor::PointerInfoCopyOutHelper(
            (CTouchProcessor *)this,
            v21,
            *((struct tagHID_POINTER_DEVICE_INFO **)v20 + 32),
            a3,
            PointerInfoSize,
            a6);
    if ( v39 )
    {
      a4 -= PointerInfoSize;
      a6 = (struct tagPOINTER_INFO *)((char *)a6 + PointerInfoSize);
    }
  }
  HistoryCount = CPointerInfoNode::GetHistoryCount(v21);
  v24 = *((_DWORD *)v21 + 86);
  v25 = HistoryCount;
  PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, v20);
  v28 = v39;
  if ( v39 )
  {
    while ( PreviousFrameByDevice )
    {
      if ( v25 > 1 )
      {
        if ( v24 >= *((_DWORD *)PreviousFrameByDevice + 12) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5151LL);
        v29 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 30) + 480LL * v24);
        if ( !(unsigned int)CPointerInfoNode::IsValid(v29) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5153LL);
        ++v22;
        if ( a4 >= (unsigned int)PointerInfoSize )
        {
          v39 = CTouchProcessor::PointerInfoCopyOutHelper(
                  (CTouchProcessor *)this,
                  v29,
                  *((struct tagHID_POINTER_DEVICE_INFO **)v20 + 32),
                  a3,
                  PointerInfoSize,
                  a6);
          if ( v39 )
          {
            a6 = (struct tagPOINTER_INFO *)((char *)a6 + PointerInfoSize);
            a4 -= PointerInfoSize;
          }
        }
        if ( CPointerInfoNode::GetHistoryCount(v29) != v25 - 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5172LL);
        v30 = CPointerInfoNode::GetHistoryCount(v29);
        v24 = *((_DWORD *)v29 + 86);
        v25 = v30;
        PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
        v28 = v39;
        if ( v39 )
          continue;
      }
      if ( !v28 )
        goto LABEL_35;
      break;
    }
    *a5 = v22;
  }
LABEL_35:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v26) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v26) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v9 = 0;
  if ( (_BYTE)v26 || v9 )
  {
    v34 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
    LOBYTE(v34) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      (_DWORD)v34,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      122,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
  if ( !IsLockedShared )
    ExReleaseResourceAndLeaveCriticalRegion(this[4]);
  return v39;
}
