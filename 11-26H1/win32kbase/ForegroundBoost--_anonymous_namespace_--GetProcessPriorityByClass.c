/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x1401D3B24
 * Callers:
 *     ForegroundBoost::_anonymous_namespace_::IsProcessBackground @ 0x1401630E0 (ForegroundBoost--_anonymous_namespace_--IsProcessBackground.c)
 *     ForegroundBoost::_anonymous_namespace_::IsProcessForegroundBoostedNoSpin @ 0x1401665C0 (ForegroundBoost--_anonymous_namespace_--IsProcessForegroundBoostedNoSpin.c)
 *     ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x14019CF70 (-UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?SyncBoostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401D4474 (-SyncBoostAllProcesses@ForegroundBoost@@YAXXZ.c)
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority @ 0x1401D47B0 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority.c)
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority_Old @ 0x1401D49C4 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority_Old.c)
 * Callees:
 *     ForegroundBoost::_anonymous_namespace_::HasBoostSource @ 0x1401D3B5C (ForegroundBoost--_anonymous_namespace_--HasBoostSource.c)
 */

__int64 __fastcall ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  if ( (unsigned __int8)ForegroundBoost::_anonymous_namespace_::HasBoostSource(a1, a2) )
    return (unsigned int)((*(_DWORD *)(a1 + 12) & 0x800) != 0) + 1;
  else
    return 0LL;
}
