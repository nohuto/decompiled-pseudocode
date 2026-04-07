/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180002690
 * Callers:
 *     <none>
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180088EF4 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1801141E8);
  qword_180114230 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180114238);
  qword_1801142A0 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_180114280 = 0LL;
  xmmword_180114290 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
