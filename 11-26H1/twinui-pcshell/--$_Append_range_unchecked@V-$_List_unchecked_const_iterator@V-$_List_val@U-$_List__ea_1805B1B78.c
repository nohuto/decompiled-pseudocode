/*
 * XREFs of ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1805B1B78
 * Callers:
 *     ??$_Construct_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1805B1C64 (--$_Construct_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_Li_ea_1805B1C64.c)
 * Callees:
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1800E6A6C (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18012BD18 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180285108 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@V-$com_ptr_t@V-$CRefCountedObject@UPendingA.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>>,std::_Iterator_base0>>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  unsigned __int64 size_of; // rax
  _QWORD *v7; // r9
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v12; // [rsp+28h] [rbp-10h]

  if ( a2 != a3 )
  {
    v4 = a2;
    v11 = *a1;
    v12 = 0LL;
    if ( a1[1] )
      goto LABEL_7;
    size_of = std::_Get_size_of_n<24>(1uLL);
    v7 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    v12 = v7;
    v8 = v4[2];
    v7[2] = v8;
    if ( v8 )
      winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(v8);
    a1[3] = (__int64)v7;
    while ( 1 )
    {
      a1[2] = (__int64)v7;
      ++a1[1];
      v4 = (_QWORD *)*v4;
      v12 = 0LL;
LABEL_7:
      if ( v4 == a3 )
        break;
      v12 = 0LL;
      v9 = std::_Get_size_of_n<24>(1uLL);
      v7 = std::_Allocate<16,std::_Default_allocate_traits>(v9);
      v10 = v4[2];
      v7[2] = v10;
      if ( v10 )
        winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(v10);
      *(_QWORD *)a1[2] = v7;
      v7[1] = a1[2];
    }
    std::_Alloc_construct_ptr<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>((__int64)&v11);
  }
}
