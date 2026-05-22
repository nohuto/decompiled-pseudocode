/*
 * XREFs of ??1?$unordered_map@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@U?$hash@W4TestCommandMessageType@@@3@U?$equal_to@W4TestCommandMessageType@@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@@std@@QEAA@XZ @ 0x180099B48
 * Callers:
 *     _TestCommandHost::TestCommandHost_::_1_::dtor$2 @ 0x1801D649A (_TestCommandHost--TestCommandHost_--_1_--dtor$2.c)
 *     _MobileButtonDeviceCollection::MobileButtonDeviceCollection_::_1_::dtor$1 @ 0x1801D9AFD (_MobileButtonDeviceCollection--MobileButtonDeviceCollection_--_1_--dtor$1.c)
 *     _EdgyProcessor::EdgyProcessor_::_1_::dtor$1 @ 0x1801DB9FD (_EdgyProcessor--EdgyProcessor_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::unordered_map<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>::~unordered_map<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>(
        _QWORD *a1)
{
  return std::_Hash<std::_Umap_traits<unsigned __int64,Windows::UI::Internal::Input::GestureAnimationData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>,0>>::~_Hash<std::_Umap_traits<unsigned __int64,Windows::UI::Internal::Input::GestureAnimationData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Windows::UI::Internal::Input::GestureAnimationData>>,0>>(a1);
}
