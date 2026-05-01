/*
 * XREFs of ?GetTransitionScreenTimeout@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@MEBA?AV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@XZ @ 0x180668F40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMaxConnectionTimeoutFromAdmin@CloudPCHelpers@@YAHXZ @ 0x180668ED0 (-GetMaxConnectionTimeoutFromAdmin@CloudPCHelpers@@YAHXZ.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::BootConnectionHandler::GetTransitionScreenTimeout(
        CloudPCHelpers *a1,
        _QWORD *a2)
{
  *a2 = 600000000LL * (int)CloudPCHelpers::GetMaxConnectionTimeoutFromAdmin(a1);
  return a2;
}
