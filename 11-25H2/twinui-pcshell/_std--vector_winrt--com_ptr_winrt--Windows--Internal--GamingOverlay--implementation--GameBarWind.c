/*
 * XREFs of _std::vector_winrt::com_ptr_winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl__std::allocator_winrt::com_ptr_winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl_____::_Emplace_reallocate_winrt::com_ptr_winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl__&__::_1_::catch$0 @ 0x1806B6B17
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$com_ptr@UMeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAXPEAU?$com_ptr@UMeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@AEAV?$allocator@U?$com_ptr@UMeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x1802C1A50 (--$_Destroy_range@V-$allocator@U-$com_ptr@UMeetAndChatFallbackProp@implementation@Shell@Internal.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_winrt::com_ptr_winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl__std::allocator_winrt::com_ptr_winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl_____::_Emplace_reallocate_winrt::com_ptr_winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl_____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp>>>(
    *(_QWORD ***)(a2 + 112),
    *(_QWORD ***)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 120)));
  throw;
}
