/*
 * XREFs of LibraryUnregisterClient @ 0x140086030
 * Callers:
 *     <none>
 * Callees:
 *     FxLibraryCommonUnregisterClient @ 0x14008EC10 (FxLibraryCommonUnregisterClient.c)
 */

int __fastcall LibraryUnregisterClient(_WDF_BIND_INFO *Info, _WDF_DRIVER_GLOBALS *WdfDriverGlobalsParam)
{
  return FxLibraryCommonUnregisterClient(Info, WdfDriverGlobalsParam);
}
