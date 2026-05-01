/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180003A60
 * Callers:
 *     <none>
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18006D7B0 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1800E15C8);
  qword_1800E1610 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1800E1618);
  qword_1800E1680 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1800E1660 = 0LL;
  xmmword_1800E1670 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
