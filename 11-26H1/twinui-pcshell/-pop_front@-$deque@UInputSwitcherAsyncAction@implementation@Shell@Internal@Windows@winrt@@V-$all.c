/*
 * XREFs of ?pop_front@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAXXZ @ 0x18063A868
 * Callers:
 *     ??R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ @ 0x180639208 (--R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ.c)
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x18063982C (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 * Callees:
 *     ??1InputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18063913C (--1InputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::pop_front(
        _QWORD *a1)
{
  winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction::~InputSwitcherAsyncAction(*(void ***)(a1[1] + 8 * (a1[3] & (a1[2] - 1LL))));
  if ( a1[4]-- == 1LL )
    a1[3] = 0LL;
  else
    ++a1[3];
}
