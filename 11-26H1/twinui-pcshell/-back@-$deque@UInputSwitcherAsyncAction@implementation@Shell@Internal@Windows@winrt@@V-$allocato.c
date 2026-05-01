/*
 * XREFs of ?back@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAAEAUInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@XZ @ 0x18063A220
 * Callers:
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x18063982C (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::back(
        _QWORD *a1)
{
  return *(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[4] - 1LL + a1[3])));
}
