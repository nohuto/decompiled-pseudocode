/*
 * XREFs of ?doBoost@GroupedFGBoostProp@@AEAAXPEAU_EPROCESS@@W4BoostFlag@@@Z @ 0x14009C9A0
 * Callers:
 *     ?doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z @ 0x14009C850 (-doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z.c)
 *     ?applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z @ 0x14009C8EC (-applyBoostIfNeeded@GroupedFGBoostProp@@SAXPEBUtagWND@@W4BoostFlag@@@Z.c)
 * Callees:
 *     ?_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14009D1A0 (-_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundP.c)
 */

__int64 __fastcall GroupedFGBoostProp::doBoost(__int64 a1, __int64 a2, int a3)
{
  _QWORD *ProcessWin32Process; // rax
  __int64 v6; // rdx

  ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(a2);
  v6 = 0LL;
  if ( ProcessWin32Process && *ProcessWin32Process )
  {
    LOBYTE(v6) = a3 == 1;
    return ForegroundBoost::_SetForegroundPriority(ProcessWin32Process, 0LL, (unsigned int)v6, 2LL);
  }
  else
  {
    LOBYTE(v6) = a3 == 1;
    return PsSetProcessPriorityByClass(a2, v6);
  }
}
