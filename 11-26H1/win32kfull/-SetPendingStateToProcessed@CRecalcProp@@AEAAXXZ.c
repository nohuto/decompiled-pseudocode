/*
 * XREFs of ?SetPendingStateToProcessed@CRecalcProp@@AEAAXXZ @ 0x1402DE5F0
 * Callers:
 *     ?s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z @ 0x1401F3684 (-s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z @ 0x1402DEDD4 (-s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_N@Z.c)
 *     ?s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1402DEFD8 (-s_xxxOnWindowRestoreFromMinimizedOld@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x14011D2A8 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
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
