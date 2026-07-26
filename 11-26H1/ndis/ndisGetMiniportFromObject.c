/*
 * XREFs of ndisGetMiniportFromObject @ 0x140156480
 * Callers:
 *     ndisWatchdogReportTimeoutToDriver @ 0x1400C98C0 (ndisWatchdogReportTimeoutToDriver.c)
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1401452A8 (ndisReportTimeoutWaitingForExternalDriver.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x140155860 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall ndisGetMiniportFromObject(unsigned __int8 *a1)
{
  int v1; // edx
  int v3; // edx

  if ( !a1 )
    return 0LL;
  v1 = *a1;
  if ( v1 == 5 )
    return (unsigned __int8 *)*((_QWORD *)a1 + 4);
  v3 = v1 - 17;
  if ( !v3 )
    return a1;
  if ( v3 == 1 )
    return (unsigned __int8 *)*((_QWORD *)a1 + 2);
  else
    return 0LL;
}
