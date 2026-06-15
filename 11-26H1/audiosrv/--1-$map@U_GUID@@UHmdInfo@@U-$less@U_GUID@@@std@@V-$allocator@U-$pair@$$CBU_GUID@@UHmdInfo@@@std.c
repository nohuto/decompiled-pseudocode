/*
 * XREFs of ??1?$map@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@@std@@QEAA@XZ @ 0x180140818
 * Callers:
 *     _CExclusiveModeListener::CExclusiveModeListener_::_1_::dtor$3 @ 0x18016BB4F (_CExclusiveModeListener--CExclusiveModeListener_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::map<_GUID,HmdInfo>::~map<_GUID,HmdInfo>(void **a1)
{
  std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::~_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>(a1);
}
