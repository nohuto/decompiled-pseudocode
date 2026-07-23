/*
 * XREFs of TlgRegisterAggregateProvider @ 0x14077E5F0
 * Callers:
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 *     CmFcInitSystem3 @ 0x140D10B94 (CmFcInitSystem3.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x140B7192C (TlgRegisterAggregateProviderEx.c)
 */

__int64 __fastcall TlgRegisterAggregateProvider(__int64 a1)
{
  return TlgRegisterAggregateProviderEx(a1, 0LL, 0LL);
}
