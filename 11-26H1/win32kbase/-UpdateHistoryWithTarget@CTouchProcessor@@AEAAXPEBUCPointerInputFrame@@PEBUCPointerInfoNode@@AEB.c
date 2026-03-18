/*
 * XREFs of ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x14006C440
 * Callers:
 *     ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x14004A560 (-UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x14006A5D4 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x14006A348 (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x14006BE3C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14006C3AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14006D5C8 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateHistoryWithTarget(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        const struct CInputDest *a4,
        int a5,
        const struct tagPOINT *a6,
        int a7,
        int a8,
        int a9)
{
  unsigned int HistoryCount; // ebx
  CTouchProcessor *v13; // rsi
  CTouchProcessor *v14; // r12
  unsigned int v15; // r14d
  CTouchProcessor *v16; // rdi
  bool v17; // zf
  __int64 v18; // rdi
  __int64 v19; // rcx

  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12098LL);
  HistoryCount = CPointerInfoNode::GetHistoryCount(a3);
  if ( HistoryCount <= 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12101LL);
  v13 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  v14 = (CTouchProcessor *)((char *)this + 48);
  v15 = *((_DWORD *)a3 + 86);
  if ( v13 == (CTouchProcessor *)((char *)this + 48) )
  {
LABEL_20:
    v17 = HistoryCount == 1;
  }
  else
  {
    while ( 1 )
    {
      v16 = v13;
      v17 = HistoryCount == 1;
      if ( HistoryCount <= 1 )
        break;
      v13 = *(CTouchProcessor **)v13;
      if ( *((_QWORD *)v16 + 7) == *((_QWORD *)a2 + 8) )
      {
        if ( v15 >= *((_DWORD *)v16 + 10) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12121LL);
        v18 = 480LL * v15 + *((_QWORD *)v16 + 29);
        if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v18) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12123LL);
        if ( *(_WORD *)(v18 + 172) != *((_WORD *)a3 + 86) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12125LL);
        if ( *(_QWORD *)(v18 + 16) != *((_QWORD *)a3 + 2) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12126LL);
        v19 = 2LL;
        if ( (*(_DWORD *)v18 & 2) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12127LL);
        CTouchProcessor::SetPointerInfoNodeTargetInt(
          (CTouchProcessor *)v19,
          (struct CPointerInfoNode *)v18,
          a4,
          a5,
          a6,
          a7,
          0,
          a8,
          a9);
        v15 = *(_DWORD *)(v18 + 344);
        --HistoryCount;
      }
      if ( v13 == v14 )
        goto LABEL_20;
    }
  }
  if ( !v17 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12149LL);
}
