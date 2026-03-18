/*
 * XREFs of ApiSetEditionProcessForegroundPriorityChanged @ 0x14015C750
 * Callers:
 *     ?DeboostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401D3898 (-DeboostAllProcesses@ForegroundBoost@@YAXXZ.c)
 *     ?SyncBoostAllProcesses@ForegroundBoost@@YAXXZ @ 0x1401D4474 (-SyncBoostAllProcesses@ForegroundBoost@@YAXXZ.c)
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority @ 0x1401D47B0 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority.c)
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority_Old @ 0x1401D49C4 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority_Old.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionProcessForegroundPriorityChanged(__int64 a1, unsigned int a2))(void)
{
  __int64 (*result)(void); // rax
  __int64 v5; // rcx

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4832LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5) + 48) + 4840LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(__int64, _QWORD))result)(a1, a2);
    }
  }
  return result;
}
