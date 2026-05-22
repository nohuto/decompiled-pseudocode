/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180009D90
 * Callers:
 *     <none>
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180095050 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180251738);
  qword_180251780 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180251788);
  qword_1802517F0 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1802517D0 = 0LL;
  xmmword_1802517E0 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
