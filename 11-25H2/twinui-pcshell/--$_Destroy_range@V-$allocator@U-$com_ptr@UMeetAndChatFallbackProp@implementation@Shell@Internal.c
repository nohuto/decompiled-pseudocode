/*
 * XREFs of ??$_Destroy_range@V?$allocator@U?$com_ptr@UMeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAXPEAU?$com_ptr@UMeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@AEAV?$allocator@U?$com_ptr@UMeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x1802C1A50
 * Callers:
 *     ??1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1801F993C (--1MeetAndChatIris@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?_Change_array@?$vector@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@AEAAXQEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@_K1@Z @ 0x1802C16C8 (-_Change_array@-$vector@U-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Intern.c)
 *     ??$_Uninitialized_move@PEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAPEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAU12@0PEAU12@AEAV?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x18033EC2C (--$_Uninitialized_move@PEAU-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Inte.c)
 *     ??1GamingOverlayExperienceManager@@EEAA@XZ @ 0x1803415EC (--1GamingOverlayExperienceManager@@EEAA@XZ.c)
 *     _std::vector_winrt::com_ptr_winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl__std::allocator_winrt::com_ptr_winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl_____::_Emplace_reallocate_winrt::com_ptr_winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl__&__::_1_::catch$0 @ 0x1806B6B17 (_std--vector_winrt--com_ptr_winrt--Windows--Internal--GamingOverlay--implementation--GameBarWind.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A8318 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp>>>(
        _QWORD **a1,
        _QWORD **a2)
{
  _QWORD **v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(v3);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
