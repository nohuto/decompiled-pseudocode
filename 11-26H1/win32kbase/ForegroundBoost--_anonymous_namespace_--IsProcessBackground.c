/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::IsProcessBackground @ 0x1401630E0
 * Callers:
 *     ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x14019CF70 (-UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x1401A8944 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClass.c)
 *     ForegroundBoost::_anonymous_namespace_::AddProcessBoostSource @ 0x1401D370C (ForegroundBoost--_anonymous_namespace_--AddProcessBoostSource.c)
 *     ?OnProcessDestroyed@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401D3FB4 (-OnProcessDestroyed@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ForegroundBoost::_anonymous_namespace_::RemoveProcessBoostSource @ 0x1401D4060 (ForegroundBoost--_anonymous_namespace_--RemoveProcessBoostSource.c)
 *     ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x1401D4108 (ForegroundBoost--_anonymous_namespace_--SetForegroundPriorityProcess.c)
 * Callees:
 *     ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x1401D3B24 (ForegroundBoost--_anonymous_namespace_--GetProcessPriorityByClass.c)
 */

bool ForegroundBoost::_anonymous_namespace_::IsProcessBackground()
{
  return (unsigned int)ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass() == 0;
}
