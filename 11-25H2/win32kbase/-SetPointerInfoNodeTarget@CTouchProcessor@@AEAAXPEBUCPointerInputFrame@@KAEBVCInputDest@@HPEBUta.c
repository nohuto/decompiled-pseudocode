/*
 * XREFs of ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1400C56E8
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1401FA670 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x140209AA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1400C5818 (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 *     ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1400C59D8 (-UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEB.c)
 *     ?SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1400C5C20 (-SetQFrameNonCoalescable@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x14020257C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x140205590 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 */

void __fastcall CTouchProcessor::SetPointerInfoNodeTarget(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        const struct CInputDest *a4,
        int a5,
        const struct tagPOINT *a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  struct CPointerInfoNode *v12; // rdi
  CTouchProcessor *v13; // rcx
  int v14; // ebx
  CTouchProcessor *v15; // rcx
  struct tagTHREADINFO *v16; // rax

  v12 = CTouchProcessor::LookupNode(this, a2, a3);
  v14 = 1;
  if ( (*((_DWORD *)PtiCurrent() + 340) & 0x2000LL) == 0 )
  {
    v16 = PtiCurrent();
    v13 = (CTouchProcessor *)(*((_QWORD *)v16 + 170) >> 37);
    if ( (*((_QWORD *)v16 + 170) & 0x2000000000LL) == 0 )
      v14 = 0;
  }
  CTouchProcessor::SetPointerInfoNodeTargetInt(v13, v12, a4, a5, a6, a7, a8, v14, a10);
  if ( a9 && CPointerInfoNode::GetHistoryCount(v12) > 1 )
    CTouchProcessor::UpdateHistoryWithTarget(this, a2, v12, a4, a5, a6, a7, v14, a10);
  if ( a7 )
  {
    if ( !v14 )
      CTouchProcessor::SetQFrameNonCoalescable(v15, a2, v12);
  }
}
