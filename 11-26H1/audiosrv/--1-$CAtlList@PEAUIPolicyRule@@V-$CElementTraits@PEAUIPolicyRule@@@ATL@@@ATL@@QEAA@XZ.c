/*
 * XREFs of ??1?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAA@XZ @ 0x1800B122C
 * Callers:
 *     _DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies_::_1_::dtor$0 @ 0x180166FD7 (_DynamicAudioEndpointManager--VerifyListIntegrityAndRefreshDependencies_--_1_--dtor$0.c)
 *     _DynamicAudioEndpointManager::AddRule_::_1_::dtor$4 @ 0x18016B566 (_DynamicAudioEndpointManager--AddRule_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::~CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>(
        __int64 a1)
{
  ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll(a1);
}
