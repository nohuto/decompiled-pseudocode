/*
 * XREFs of _lambda_1b920915d8524e6f0a14f20042130a82_::_lambda_invoker_cdecl_ @ 0x1401D7480
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall lambda_1b920915d8524e6f0a14f20042130a82_::_lambda_invoker_cdecl_(__int64 a1)
{
  void *v2; // rcx

  if ( !*(_DWORD *)(a1 + 1056) )
  {
    RIMLockExclusive(a1 + 104);
    if ( !*(_BYTE *)(a1 + 81) && !*(_BYTE *)(a1 + 80) )
    {
      if ( *(_BYTE *)(a1 + 393) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2863);
      v2 = *(void **)(a1 + 344);
      *(_BYTE *)(a1 + 393) = 1;
      ZwSetEvent(v2, 0LL);
    }
    RIMUnlockExclusive(a1 + 104);
  }
}
