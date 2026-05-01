/*
 * XREFs of ??1_Reallocation_guard@?$vector@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAA@XZ @ 0x180342CC0
 * Callers:
 *     ??$_Emplace_reallocate@AEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@?$vector@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@AEAAPEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAU23@AEAU23@@Z @ 0x180234ADC (--$_Emplace_reallocate@AEAU-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Inte.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$com_ptr@UMeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAXPEAU?$com_ptr@UMeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@AEAV?$allocator@U?$com_ptr@UMeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x1802B90EC (--$_Destroy_range@V-$allocator@U-$com_ptr@UMeetAndChatFallbackProp@implementation@Shell@Internal.c)
 */

void __fastcall std::vector<winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>>::_Reallocation_guard::~_Reallocation_guard(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::_Destroy_range<std::allocator<winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp>>>(
      *(_QWORD ***)(a1 + 24),
      *(_QWORD ***)(a1 + 32));
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(8LL * *(_QWORD *)(a1 + 16)));
  }
}
