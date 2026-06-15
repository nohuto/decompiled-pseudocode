/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800018A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18002CD88 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1800670D8);
  qword_180067120 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180067128);
  qword_180067190 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_180067170 = 0LL;
  xmmword_180067180 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
