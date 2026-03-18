/*
 * XREFs of ?SetPendingStateToProcessed@CRecalcProp@@AEAAXXZ @ 0x1402C5AD4
 * Callers:
 *     ?s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z @ 0x1401CB264 (-s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z @ 0x1402C6A30 (-s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1402C6C34 (-s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x140027C50 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 */

void __fastcall CRecalcProp::SetPendingStateToProcessed(CRecalcProp *this)
{
  if ( *((_DWORD *)this + 6) == 1 )
  {
    *(_QWORD *)(*((_QWORD *)this + 4) + 8LL) = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = *((_QWORD *)this + 4);
    CRecalcProp::PruneRecalcStateList((const struct tagWND **)this, 0LL);
    *((_QWORD *)this + 4) = 0LL;
    *((_DWORD *)this + 6) = 0;
  }
}
