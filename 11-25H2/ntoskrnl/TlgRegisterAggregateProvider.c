/*
 * XREFs of TlgRegisterAggregateProvider @ 0x1406EFC6C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 *     EtwpInitialize @ 0x140C2BE1C (EtwpInitialize.c)
 *     CmFcInitSystem3 @ 0x140C4DE90 (CmFcInitSystem3.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140ABE9A4 (TlgRegisterAggregateProviderEx.c)
 */

__int64 __fastcall TlgRegisterAggregateProvider(__int64 a1)
{
  return TlgRegisterAggregateProviderEx(a1, 0LL, 0LL);
}
