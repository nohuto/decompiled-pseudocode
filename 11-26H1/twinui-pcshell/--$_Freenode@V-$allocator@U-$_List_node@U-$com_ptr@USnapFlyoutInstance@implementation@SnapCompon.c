/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@std@@@?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@1@PEAU01@@Z @ 0x1805B215C
 * Callers:
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x1802699D0 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 *     _SnapFlyoutHost::ShutdownSnapFlyoutsAsync_::_13_::_parameters_::__parameters_ @ 0x1805B2494 (_SnapFlyoutHost--ShutdownSnapFlyoutsAsync_--_13_--_parameters_--__parameters_.c)
 *     ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1805B254C (--1-$_List_node_insert_op2@V-$allocator@U-$_List_node@U-$com_ptr@USnapFlyoutInstance@implementat.c)
 *     ??1?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAA@XZ @ 0x1805B2814 (--1-$list@U-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@win.c)
 *     SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_ResumeCoro$1 @ 0x1805B4A70 (SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_ResumeCoro$1.c)
 *     ?ShutdownSnapFlyoutsAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@V?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@@Z @ 0x1805B4C4C (-ShutdownSnapFlyoutsAsync@SnapFlyoutHost@@AEAA-AUfire_and_forget@winrt@@V-$list@U-$com_ptr@USnap.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 */

void __fastcall std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>::_Freenode<std::allocator<std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  if ( a2[2] )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(a2 + 2);
  std::_Deallocate<16>(a2, (struct std::nothrow_t *)0x18);
}
