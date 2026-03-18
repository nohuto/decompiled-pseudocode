/*
 * XREFs of ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x14006CFE8
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x14006AA00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1400CB810 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x14004F080 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x14006C7BC (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct tagQ *__fastcall CTouchProcessor::GetQueueForCurrentNode(
        PERESOURCE *this,
        struct tagTHREADINFO *a2,
        int a3,
        unsigned int a4,
        int a5,
        const struct CPointerInfoNode *a6)
{
  CPointerInfoNode *v9; // rbx
  CInputDest *Queue; // rax
  struct tagTHREADINFO *ThreadInfo; // rax
  _BYTE v13[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 11679LL);
  v9 = a6;
  if ( (*(_DWORD *)a6 & 0x2000) != 0
    || !*((_QWORD *)a6 + 2)
    || a5 && !(unsigned int)CPointerInfoNode::IsMessageDelegated(a6, a4) )
  {
    return 0LL;
  }
  if ( !a3 )
    goto LABEL_11;
  LODWORD(a6) = 0;
  AtomicExecutionCheck::AtomicExecutionCheck(v13);
  Queue = CPointerInfoNode::GetQueue(v9, (int *)&a6);
  if ( v13[0] )
    --*(_DWORD *)(v14 + 28);
  if ( !Queue || (ThreadInfo = CInputDest::GetThreadInfo(Queue)) == 0LL )
LABEL_11:
    ThreadInfo = a2;
  return (struct tagQ *)*((_QWORD *)ThreadInfo + 58);
}
