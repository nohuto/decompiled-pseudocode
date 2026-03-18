/*
 * XREFs of FxLibraryCommonDecommission @ 0x14008EB1C
 * Callers:
 *     LibraryDecommission @ 0x140086010 (LibraryDecommission.c)
 * Callees:
 *     McGenEventUnregister_EtwUnregister @ 0x14008EF90 (McGenEventUnregister_EtwUnregister.c)
 *     FxLibraryGlobalsDecommission @ 0x14009671C (FxLibraryGlobalsDecommission.c)
 *     UninitializeTelemetryAssertsKM @ 0x1400ABA5C (UninitializeTelemetryAssertsKM.c)
 */

__int64 __fastcall FxLibraryCommonDecommission()
{
  REGHANDLE RegHandle; // rcx
  unsigned __int64 *v1; // rcx

  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryDecommission: enter\n");
  }
  if ( unk_1400C9068 )
  {
    IoWMIRegistrationControl(&WPP_GLOBAL_WDF_Control, 0x80000002);
    unk_1400C9068 = 0;
  }
  UninitializeTelemetryAssertsKM();
  RegHandle = Tlgg_TelemetryProviderProv.RegHandle;
  Tlgg_TelemetryProviderProv.RegHandle = 0LL;
  Tlgg_TelemetryProviderProv.LevelPlus1 = 0;
  EtwUnregister(RegHandle);
  McGenEventUnregister_EtwUnregister(v1);
  FxLibraryGlobalsDecommission();
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryDecommission: exit\n");
  }
  return 0LL;
}
