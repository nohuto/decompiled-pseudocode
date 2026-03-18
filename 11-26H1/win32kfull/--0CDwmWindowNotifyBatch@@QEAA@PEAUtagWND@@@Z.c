/*
 * XREFs of ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x1400469A0
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402C7DC0 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z @ 0x1402E4AD0 (-xxxApplyActionAsync@WindowActions@@YAXPEAUtagWND@@PEAVCMonitorTopology@@U_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402E510C (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0CDwmNotifyBatch@@IEAA@XZ @ 0x140046AF4 (--0CDwmNotifyBatch@@IEAA@XZ.c)
 *     ?IncrementCounter@CDwmNotifyBatch@@IEAA_NPEAUtagWND@@@Z @ 0x1402E6A00 (-IncrementCounter@CDwmNotifyBatch@@IEAA_NPEAUtagWND@@@Z.c)
 */

CDwmWindowNotifyBatch *__fastcall CDwmWindowNotifyBatch::CDwmWindowNotifyBatch(
        CDwmWindowNotifyBatch *this,
        struct tagWND *a2)
{
  CDwmNotifyBatch *v4; // rcx
  bool v5; // zf
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax

  CDwmNotifyBatch::CDwmNotifyBatch(this);
  v5 = *(_BYTE *)this == 0;
  *((_QWORD *)this + 4) = *(_QWORD *)a2;
  if ( !v5 && CDwmNotifyBatch::IncrementCounter(v4, a2) )
  {
    v8 = PtiCurrent(v7);
    *((_QWORD *)this + 1) = *((_QWORD *)v8 + 47);
    *((_QWORD *)v8 + 47) = (char *)this + 8;
    *((_QWORD *)this + 3) = lambda_d8af0bc767968272ab227b7dacb99926_::_lambda_invoker_cdecl_;
    *((_QWORD *)this + 2) = this;
  }
  return this;
}
