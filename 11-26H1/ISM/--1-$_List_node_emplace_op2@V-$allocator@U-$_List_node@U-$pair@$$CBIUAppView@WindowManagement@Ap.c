/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180098B54
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_winrt::Windows::Internal::ApplicationModel::WindowManagement::Window_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__winrt::Windows::Internal::ApplicationModel::WindowManagement::Window____0___::emplace_std::pair_unsigned_int_winrt::Windows::Internal::ApplicationModel::WindowManagement::Window____::_1_::dtor$0 @ 0x1801D6ACE (_std--_Hash_std--_Umap_traits_unsigned_int_winrt--Windows--Internal--ApplicationModel--WindowMan.c)
 * Callees:
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180049A74 (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)(v2 + 24));
  return std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>,void *>>>(a1);
}
