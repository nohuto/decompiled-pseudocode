/*
 * XREFs of ?_Tidy@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x1802862EC
 * Callers:
 *     ??1?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1802862BC (--1-$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V-$allocator@U.c)
 * Callees:
 *     ??1InputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18063913C (--1InputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Reset_map@?$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V?$allocator@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x18063A198 (-_Reset_map@-$deque@UInputSwitcherAsyncAction@implementation@Shell@Internal@Windows@winrt@@V-$al.c)
 */

void __fastcall std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::_Tidy(
        _QWORD *a1)
{
  __int64 v2; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction::~InputSwitcherAsyncAction(*(winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction **)(a1[1] + 8 * ((a1[2] - 1LL) & (v2 - 1 + a1[3]))));
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  if ( a1[1] )
    std::deque<winrt::Windows::Internal::Shell::implementation::InputSwitcherAsyncAction>::_Reset_map(a1);
}
