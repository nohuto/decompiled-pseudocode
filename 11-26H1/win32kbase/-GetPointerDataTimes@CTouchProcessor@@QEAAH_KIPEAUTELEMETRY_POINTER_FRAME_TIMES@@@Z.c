/*
 * XREFs of ?GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x140050530
 * Callers:
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x14004F25C (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_F.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x14004E2A8 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140050B68 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x140051C6C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14006C3AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataTimes(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        struct TELEMETRY_POINTER_FRAME_TIMES *a4)
{
  unsigned int v4; // r14d
  __int64 v5; // r13
  char v7; // di
  _UNKNOWN **v8; // r8
  PERESOURCE *v9; // rsi
  CTouchProcessor *v10; // rcx
  bool IsLockedShared; // r15
  struct CPointerMsgData *NonConstMsgData; // rax
  unsigned int v13; // edx
  struct CPointerMsgData *v14; // r13
  __int64 FrameById; // rax
  __int64 v16; // rcx
  CPointerInfoNode *v17; // r13
  unsigned int HistoryCount; // r14d
  const struct CPointerInputFrame *i; // r9
  _OWORD *v20; // rcx
  _UNKNOWN **v21; // r8
  CTouchProcessor *v23; // rcx
  _UNKNOWN **v24; // r8
  __int16 v25; // [rsp+30h] [rbp-78h]
  unsigned int v26; // [rsp+48h] [rbp-60h]
  CPointerInfoNode *v27; // [rsp+60h] [rbp-48h]
  CPointerInfoNode *v28; // [rsp+60h] [rbp-48h]

  v4 = a3;
  v5 = a2;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u )
  {
    LOBYTE(a2) = 0;
    v7 = 1;
  }
  else
  {
    v7 = 1;
    LOBYTE(a2) = 1;
  }
  v8 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v8) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v8) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)v8 )
  {
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      (_DWORD)v8,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      148,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    v4 = a3;
  }
  v9 = (PERESOURCE *)((char *)this + 32);
  IsLockedShared = tagDomLock::IsLockedShared(v9);
  if ( !IsLockedShared )
    ExEnterCriticalRegionAndAcquireResourceShared(*v9);
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5650LL);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v10, v5);
  v14 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    v24 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( !(_BYTE)v13 && !v7 )
      goto LABEL_48;
    v25 = 149;
    goto LABEL_58;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *((unsigned int *)NonConstMsgData + 7), 4LL);
  v27 = (CPointerInfoNode *)FrameById;
  if ( !FrameById )
  {
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    v24 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( !(_BYTE)v13 && !v7 )
      goto LABEL_48;
    v25 = 150;
    goto LABEL_58;
  }
  if ( *((_DWORD *)v14 + 8) >= *(_DWORD *)(FrameById + 48) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5669LL);
  v16 = 480LL * *((unsigned int *)v14 + 8);
  v17 = v27;
  v28 = (CPointerInfoNode *)(v16 + *((_QWORD *)v27 + 30));
  if ( !(unsigned int)CPointerInfoNode::IsValid(v28) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5671LL);
  if ( (*(_DWORD *)v28 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5672LL);
  HistoryCount = CPointerInfoNode::GetHistoryCount(v28);
  v13 = a3;
  if ( a3 <= HistoryCount )
  {
    *(_OWORD *)a4 = *(_OWORD *)((char *)v17 + 72);
    *((_OWORD *)a4 + 1) = *(_OWORD *)((char *)v17 + 88);
    *((_OWORD *)a4 + 2) = *(_OWORD *)((char *)v17 + 104);
    *((_OWORD *)a4 + 3) = *(_OWORD *)((char *)v17 + 120);
    *((_OWORD *)a4 + 4) = *(_OWORD *)((char *)v17 + 136);
    *((_OWORD *)a4 + 5) = *(_OWORD *)((char *)v17 + 152);
    *((_OWORD *)a4 + 6) = *(_OWORD *)((char *)v17 + 168);
    *((_OWORD *)a4 + 7) = *(_OWORD *)((char *)v17 + 184);
    *((_OWORD *)a4 + 8) = *(_OWORD *)((char *)v17 + 200);
    v26 = 1;
    if ( a3 > 1 )
    {
      for ( i = CTouchProcessor::GetPreviousFrameByDevice(this, v17);
            v26 < a3 && i && HistoryCount > 1;
            i = CTouchProcessor::GetPreviousFrameByDevice(this, i) )
      {
        v20 = (_OWORD *)((char *)a4 + 144 * v26);
        *v20 = *(_OWORD *)((char *)v17 + 72);
        v20[1] = *(_OWORD *)((char *)v17 + 88);
        v20[2] = *(_OWORD *)((char *)v17 + 104);
        v20[3] = *(_OWORD *)((char *)v17 + 120);
        v20[4] = *(_OWORD *)((char *)v17 + 136);
        v20[5] = *(_OWORD *)((char *)v17 + 152);
        v20[6] = *(_OWORD *)((char *)v17 + 168);
        v20[7] = *(_OWORD *)((char *)v17 + 184);
        v20[8] = *(_OWORD *)((char *)v17 + 200);
        ++v26;
        --HistoryCount;
      }
    }
    v21 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v7 = 0;
    if ( (_BYTE)v13 || v7 )
    {
      LOBYTE(v21) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        (_DWORD)v21,
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        5,
        4,
        152,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    if ( !IsLockedShared )
      ExReleaseResourceAndLeaveCriticalRegion(*v9);
    return 1LL;
  }
  v23 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v13) = 0;
  }
  v24 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v7 = 0;
  if ( (_BYTE)v13 || v7 )
  {
    v25 = 151;
LABEL_58:
    LOBYTE(v24) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)v23 + 3),
      v13,
      (_DWORD)v24,
      *((_QWORD *)v23 + 8),
      5,
      4,
      v25,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
LABEL_48:
  if ( !IsLockedShared )
    ExReleaseResourceAndLeaveCriticalRegion(*v9);
  return 0LL;
}
