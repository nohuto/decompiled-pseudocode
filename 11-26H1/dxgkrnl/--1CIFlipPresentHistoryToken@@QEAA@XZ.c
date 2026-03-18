/*
 * XREFs of ??1CIFlipPresentHistoryToken@@QEAA@XZ @ 0x1402F490C
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1402F1C34 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CIFlipPresentHistoryToken::~CIFlipPresentHistoryToken(CIFlipPresentHistoryToken *this)
{
  if ( this )
    (**(void (__fastcall ***)(CIFlipPresentHistoryToken *, __int64))this)(this, 1LL);
}
