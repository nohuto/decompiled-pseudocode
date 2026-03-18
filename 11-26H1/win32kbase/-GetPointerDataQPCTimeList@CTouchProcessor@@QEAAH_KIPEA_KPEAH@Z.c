/*
 * XREFs of ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x140051640
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x140052DE8 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140050B68 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x140051C6C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14006C3AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x14014553C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataQPCTimeList(
        PERESOURCE *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4,
        int *a5)
{
  unsigned int v6; // esi
  __int64 v7; // rdi
  char v9; // bl
  PERESOURCE *v10; // r12
  CTouchProcessor *v11; // rcx
  bool v12; // r13
  struct CPointerMsgData *NonConstMsgData; // rax
  int v14; // edx
  int v15; // r8d
  struct CPointerMsgData *v16; // rdi
  const struct CPointerInputFrame *FrameById; // rax
  const struct CPointerInputFrame *v18; // r14
  __int64 v19; // rdi
  int v20; // edx
  unsigned int HistoryCount; // ebp
  int v22; // r8d
  unsigned int v23; // r15d
  CTouchProcessor *v25; // rcx
  unsigned int v26; // esi
  const struct CPointerInputFrame *PreviousFrameByDevice; // rdi
  __int64 v28; // rsi
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int16 v31; // [rsp+30h] [rbp-68h]
  PERESOURCE *v32; // [rsp+48h] [rbp-50h] BYREF
  bool IsLockedShared; // [rsp+50h] [rbp-48h]
  unsigned int v35; // [rsp+B0h] [rbp+18h]

  v35 = a3;
  v6 = a3;
  v7 = a2;
  v9 = 1;
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
      a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      142,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v10 = this + 4;
  v32 = this + 4;
  IsLockedShared = tagDomLock::IsLockedShared(this + 4);
  v12 = IsLockedShared;
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceShared(*v10);
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5540LL);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v11, v7);
  v16 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    v25 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v14 && !v9 )
      goto LABEL_44;
    v31 = 143;
    goto LABEL_43;
  }
  FrameById = (const struct CPointerInputFrame *)CTouchProcessor::FindFrameById(
                                                   (__int64)this,
                                                   *((_DWORD *)NonConstMsgData + 7),
                                                   4);
  v18 = FrameById;
  if ( !FrameById )
  {
    v25 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v14 && !v9 )
      goto LABEL_44;
    v31 = 144;
    goto LABEL_43;
  }
  if ( *((_DWORD *)v16 + 8) >= *((_DWORD *)FrameById + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5559LL);
  v19 = *((_QWORD *)v18 + 30) + 480LL * *((unsigned int *)v16 + 8);
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v19) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5561LL);
  if ( a5 && *a5 && (*(_DWORD *)(v19 + 180) & 0x400000) == 0 )
  {
    *a5 = 0;
    v25 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( !(_BYTE)v14 && !v9 )
      goto LABEL_44;
    v31 = 145;
LABEL_43:
    LOBYTE(v15) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)v25 + 3),
      v14,
      v15,
      *((_QWORD *)v25 + 8),
      5,
      4,
      v31,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
LABEL_44:
    CInpLockGuardShared::~CInpLockGuardShared((CInpLockGuardShared *)&v32);
    return 0LL;
  }
  HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v19);
  if ( v6 > HistoryCount )
  {
    LOBYTE(v20) = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v9 = 0;
    if ( (_BYTE)v20 || v9 )
    {
      LOBYTE(v22) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v22,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        146,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    if ( !IsLockedShared )
      ExReleaseResourceAndLeaveCriticalRegion(*v10);
    return 0LL;
  }
  *a4 = *(_QWORD *)(v19 + 248);
  v23 = 1;
  if ( v6 > 1 )
  {
    v26 = *(_DWORD *)(v19 + 344);
    PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, v18);
    do
    {
      if ( !PreviousFrameByDevice || HistoryCount <= 1 )
        break;
      if ( v26 >= *((_DWORD *)PreviousFrameByDevice + 12) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5606LL);
      v28 = *((_QWORD *)PreviousFrameByDevice + 30) + 480LL * v26;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v28) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5608LL);
      v29 = v23++;
      a4[v29] = *(_QWORD *)(v28 + 248);
      if ( CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v28) != HistoryCount - 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5618LL);
      v30 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v28);
      v26 = *(_DWORD *)(v28 + 344);
      HistoryCount = v30;
      PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, PreviousFrameByDevice);
    }
    while ( v23 < v35 );
    v10 = v32;
    v12 = IsLockedShared;
  }
  LOBYTE(v20) = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v22) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v22) = 0;
  }
  if ( (_BYTE)v20 || (_BYTE)v22 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v20,
      v22,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      147,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  if ( !v12 )
    ExReleaseResourceAndLeaveCriticalRegion(*v10);
  return 1LL;
}
