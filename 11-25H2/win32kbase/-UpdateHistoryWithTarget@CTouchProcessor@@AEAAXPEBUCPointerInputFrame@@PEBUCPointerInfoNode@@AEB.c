/*
 * XREFs of ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1400C59D8
 * Callers:
 *     ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1400C4F80 (-UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1400C56E8 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C4964 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1400C5818 (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1401887DC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14020257C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
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
  unsigned int HistoryCount; // edi
  unsigned int v13; // r15d
  char *v14; // r12
  char *v15; // rsi
  char *v16; // rbp
  bool v17; // zf
  __int64 v18; // rbx
  CTouchProcessor *v19; // rcx

  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12121LL);
  HistoryCount = CPointerInfoNode::GetHistoryCount(a3);
  if ( HistoryCount <= 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12124LL);
  v13 = *((_DWORD *)a3 + 86);
  v14 = (char *)this + 48;
  v15 = (char *)*((_QWORD *)a2 + 1);
  while ( v15 != v14 )
  {
    v16 = v15;
    v17 = HistoryCount == 1;
    if ( HistoryCount <= 1 )
      goto LABEL_21;
    v15 = *(char **)v15;
    if ( *((_QWORD *)v16 + 7) == *((_QWORD *)a2 + 8) )
    {
      if ( v13 >= *((_DWORD *)v16 + 10) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12144LL);
      v18 = *((_QWORD *)v16 + 29) + 480LL * v13;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v18) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12146LL);
      if ( *(_WORD *)(v18 + 172) != *((_WORD *)a3 + 86) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12148LL);
      if ( *(_QWORD *)(v18 + 16) != *((_QWORD *)a3 + 2) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12149LL);
      if ( (*(_DWORD *)v18 & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12150LL);
      CTouchProcessor::SetPointerInfoNodeTargetInt(v19, (struct CPointerInfoNode *)v18, a4, a5, a6, a7, 0, a8, a9);
      v13 = *(_DWORD *)(v18 + 344);
      --HistoryCount;
    }
  }
  v17 = HistoryCount == 1;
LABEL_21:
  if ( !v17 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 12172LL);
}
