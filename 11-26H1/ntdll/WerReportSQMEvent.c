/*
 * XREFs of WerReportSQMEvent @ 0x1800D2DE0
 * Callers:
 *     <none>
 * Callees:
 *     WerEscalationLazyInit @ 0x1800D3120 (WerEscalationLazyInit.c)
 */

__int64 __fastcall WerReportSQMEvent(int a1, __int64 a2, int a3)
{
  __int64 result; // rax
  bool v6; // zf

  result = WerEscalationLazyInit();
  if ( (int)result >= 0 )
  {
    if ( g_disableEscalation )
      return 0LL;
    if ( a1 )
    {
      if ( a1 != 1 )
        return 3221225485LL;
      v6 = a3 == 3;
    }
    else
    {
      v6 = a3 == 6;
    }
    if ( v6 )
      return 0LL;
    return 3221225485LL;
  }
  return result;
}
