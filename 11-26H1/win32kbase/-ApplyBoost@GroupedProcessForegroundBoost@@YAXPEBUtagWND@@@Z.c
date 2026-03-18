/*
 * XREFs of ?ApplyBoost@GroupedProcessForegroundBoost@@YAXPEBUtagWND@@@Z @ 0x1400DDEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z @ 0x1400DDEFC (-applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z.c)
 */

void __fastcall GroupedProcessForegroundBoost::ApplyBoost(GroupedProcessForegroundBoost *this, const struct tagWND *a2)
{
  GroupedFGBoostProp::applyBoostIfNeeded(this, 1LL);
}
