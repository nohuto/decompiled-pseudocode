/*
 * XREFs of ??1?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAA@XZ @ 0x18058E494
 * Callers:
 *     _SnapFlyoutHost::HideAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x1806D1413 (_SnapFlyoutHost--HideAsync$_ResumeCoro$1_--_1_--dtor$3.c)
 *     _SnapFlyoutHost::ShutdownSnapFlyoutsAsync_::_1_::dtor$0 @ 0x1806D1B6E (_SnapFlyoutHost--ShutdownSnapFlyoutsAsync_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@std@@@?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@1@PEAU01@@Z @ 0x18058DE80 (--$_Freenode@V-$allocator@U-$_List_node@U-$com_ptr@USnapFlyoutInstance@implementation@SnapCompon.c)
 */

void __fastcall std::list<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>::~list<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>(
        void **a1)
{
  _QWORD ***v1; // rdx
  _QWORD **v3; // rdx
  _QWORD *v4; // rbx

  v1 = (_QWORD ***)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( v3 )
  {
    do
    {
      v4 = *v3;
      std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>::_Freenode<std::allocator<std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>>>(
        (__int64)a1,
        v3);
      v3 = (_QWORD **)v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x18);
}
