/*
 * XREFs of TlgRegisterAggregateProvider @ 0x14077B9B0
 * Callers:
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 *     CmFcInitSystem3 @ 0x140D0A8C4 (CmFcInitSystem3.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140B6E47C (TlgRegisterAggregateProviderEx.c)
 */

__int64 __fastcall TlgRegisterAggregateProvider(__int64 a1)
{
  return TlgRegisterAggregateProviderEx(a1, 0LL, 0LL);
}
