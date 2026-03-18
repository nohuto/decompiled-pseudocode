/*
 * XREFs of _lambda_396116378ddc845dddb42d191e6dcd2c_::_lambda_invoker_cdecl_ @ 0x1401FE740
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall lambda_396116378ddc845dddb42d191e6dcd2c_::_lambda_invoker_cdecl_(__int64 a1)
{
  void *v2; // rcx

  if ( !*(_DWORD *)(a1 + 1056) )
  {
    RIMLockExclusive(a1 + 104);
    if ( !*(_BYTE *)(a1 + 81) && !*(_BYTE *)(a1 + 80) )
    {
      if ( *(_BYTE *)(a1 + 392) )
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 3575);
      v2 = *(void **)(a1 + 344);
      *(_BYTE *)(a1 + 392) = 1;
      ZwSetEvent(v2, 0LL);
    }
    RIMUnlockExclusive(a1 + 104);
  }
}
