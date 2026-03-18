/*
 * XREFs of _lambda_3cf49cee9a6682970a5610bc379494ad_::_lambda_invoker_cdecl_ @ 0x140211D10
 * Callers:
 *     <none>
 * Callees:
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1400875C0 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall lambda_3cf49cee9a6682970a5610bc379494ad_::_lambda_invoker_cdecl_(__int64 a1, int a2, int a3)
{
  if ( !*(_QWORD *)a1 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1320);
  if ( !*(_QWORD *)(a1 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1321);
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(*(_QWORD *)a1 + 80LL) )
    CInputDest::_UnlockedFromThread(*(CInputDest **)a1, a2, a3);
}
