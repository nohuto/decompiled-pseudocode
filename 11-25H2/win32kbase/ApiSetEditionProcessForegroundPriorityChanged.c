/*
 * XREFs of ApiSetEditionProcessForegroundPriorityChanged @ 0x14011DDEC
 * Callers:
 *     ?_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14009D1A0 (-_SetForegroundPriority@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@PEBUtagTHREADINFO@@W4ForegroundP.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionProcessForegroundPriorityChanged(__int64 a1, __int64 a2))(void)
{
  unsigned int v2; // ebx
  __int64 (*result)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = a2;
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5272LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48) + 5280LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(__int64, _QWORD))result)(a1, v2);
    }
  }
  return result;
}
