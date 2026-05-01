/*
 * XREFs of ??$_Uninitialized_move@PEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAPEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAU12@0PEAU12@AEAV?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x18033E9CC
 * Callers:
 *     ??$_Emplace_reallocate@AEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@?$vector@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@AEAAPEAU?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAU23@AEAU23@@Z @ 0x180234ADC (--$_Emplace_reallocate@AEAU-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Inte.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@U?$com_ptr@UMeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@YAXPEAU?$com_ptr@UMeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAU12@AEAV?$allocator@U?$com_ptr@UMeetAndChatFallbackProp@implementation@Shell@Internal@Windows@winrt@@@winrt@@@0@@Z @ 0x1802B90EC (--$_Destroy_range@V-$allocator@U-$com_ptr@UMeetAndChatFallbackProp@implementation@Shell@Internal.c)
 */

_QWORD **__fastcall std::_Uninitialized_move<winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl> *,std::allocator<winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD **a3)
{
  _QWORD *v4; // r8

  while ( a1 != a2 )
  {
    v4 = (_QWORD *)*a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  std::_Destroy_range<std::allocator<winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp>>>(
    a3,
    a3);
  return a3;
}
