/*
 * XREFs of _SnapFlyoutHost::ShutdownSnapFlyoutsAsync_::_13_::_parameters_::__parameters_ @ 0x18058E344
 * Callers:
 *     _SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_InitCoro$2_::_1_::dtor$1 @ 0x1806D19FC (_SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_InitCoro$2_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@std@@@?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@1@PEAU01@@Z @ 0x18058DE80 (--$_Freenode@V-$allocator@U-$_List_node@U-$com_ptr@USnapFlyoutInstance@implementation@SnapCompon.c)
 */

void __fastcall SnapFlyoutHost::ShutdownSnapFlyoutsAsync_::_13_::_parameters_::__parameters_(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD **v3; // rdx
  _QWORD *v4; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  **(_QWORD **)(v1 + 8) = 0LL;
  v3 = *(_QWORD ***)v1;
  if ( v3 )
  {
    do
    {
      v4 = *v3;
      std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>::_Freenode<std::allocator<std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>>>(
        a1,
        v3);
      v3 = (_QWORD **)v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x18);
}
