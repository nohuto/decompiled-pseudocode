/*
 * XREFs of PpmCheckReportComplete @ 0x1404B1A60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 PpmCheckReportComplete()
{
  __int64 result; // rax

  result = PpmCheckCompleteHandler;
  if ( PpmCheckCompleteHandler )
    return guard_dispatch_icall_no_overrides(PpmPerfGlobalContext, PpmCheckTime);
  return result;
}
