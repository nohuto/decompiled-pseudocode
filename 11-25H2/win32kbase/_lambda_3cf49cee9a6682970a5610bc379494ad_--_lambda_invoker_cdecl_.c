/*
 * XREFs of _lambda_3cf49cee9a6682970a5610bc379494ad_::_lambda_invoker_cdecl_ @ 0x1401F6CF0
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1401F7314 (-_UnlockedFromThread@CInputDest@@AEAAXXZ.c)
 */

void __fastcall lambda_3cf49cee9a6682970a5610bc379494ad_::_lambda_invoker_cdecl_(__int64 a1)
{
  if ( !*(_QWORD *)a1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1320);
  if ( !*(_QWORD *)(a1 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1321);
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(*(_QWORD *)a1 + 80LL) )
    CInputDest::_UnlockedFromThread(*(CInputDest **)a1);
}
