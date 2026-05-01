/*
 * XREFs of ?add@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@I@Foundation@Windows@2@@Z @ 0x180660BE8
 * Callers:
 *     ?add_ProcessDestroyed@?$produce@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIProcessTracker@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x180660C30 (-add_ProcessDestroyed@-$produce@UProcessTracker@implementation@Shell@Internal@Windows@winrt@@UIP.c)
 * Callees:
 *     ?add_agile@?$event@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@winrt@@@winrt@@AEAA?AUevent_token@2@U?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foundation@Windows@2@@Z @ 0x1803CE718 (-add_agile@-$event@U-$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UPoint@234@@Foun.c)
 *     ??$make_agile_delegate@U?$EventHandler@I@Foundation@Windows@winrt@@@impl@winrt@@YA?AU?$EventHandler@I@Foundation@Windows@1@AEBU2341@@Z @ 0x18065FD14 (--$make_agile_delegate@U-$EventHandler@I@Foundation@Windows@winrt@@@impl@winrt@@YA-AU-$EventHand.c)
 */

PVOID *__fastcall winrt::event<winrt::Windows::Foundation::EventHandler<unsigned int>>::add(
        RTL_SRWLOCK *a1,
        PVOID *a2,
        __int64 *a3)
{
  __int64 *v5; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v5 = winrt::impl::make_agile_delegate<winrt::Windows::Foundation::EventHandler<unsigned int>>(&v7, a3);
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Foundation::IInspectable,winrt::Windows::Foundation::Point>>::add_agile(
    a1,
    a2,
    (unsigned int *)v5);
  return a2;
}
