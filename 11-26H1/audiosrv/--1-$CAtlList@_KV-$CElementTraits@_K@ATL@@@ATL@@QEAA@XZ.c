/*
 * XREFs of ??1?$CAtlList@_KV?$CElementTraits@_K@ATL@@@ATL@@QEAA@XZ @ 0x1800F0990
 * Callers:
 *     _CConstraintModelResourceManager::ProcessRevokedResources_::_1_::dtor$0 @ 0x180169B79 (_CConstraintModelResourceManager--ProcessRevokedResources_--_1_--dtor$0.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$9 @ 0x18016C5E3 (_CConstraintModel--Initialize_--_1_--dtor$9.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 ATL::CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>::~CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>()
{
  return ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll();
}
