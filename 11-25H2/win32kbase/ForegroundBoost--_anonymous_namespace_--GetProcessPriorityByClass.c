/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass @ 0x140120934
 * Callers:
 *     ?_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14009D1A0 (-_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundP.c)
 *     ForegroundBoost::_anonymous_namespace_::SetForegroundPriorityProcess @ 0x140168CE4 (ForegroundBoost--_anonymous_namespace_--SetForegroundPriorityProcess.c)
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x140168EE8 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClass.c)
 *     ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x1401691E0 (-UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ForegroundBoost::_anonymous_namespace_::GetProcessPriorityByClass(__int64 a1)
{
  if ( (*(_QWORD *)(a1 + 808) & 0x3FC0000000LL) != 0 )
    return (unsigned int)((*(_DWORD *)(a1 + 12) & 0x800) != 0) + 1;
  else
    return 0LL;
}
