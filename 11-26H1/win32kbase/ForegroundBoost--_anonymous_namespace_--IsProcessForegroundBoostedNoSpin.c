/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::IsProcessForegroundBoostedNoSpin @ 0x1401665C0
 * Callers:
 *     ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x14019CF70 (-UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x1401A8944 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClass.c)
 * Callees:
 *     ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x1401D3B24 (ForegroundBoost--_anonymous_namespace_--GetProcessPriorityByClass.c)
 */

bool ForegroundBoost::_anonymous_namespace_::IsProcessForegroundBoostedNoSpin()
{
  return (unsigned int)ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass() == 1;
}
