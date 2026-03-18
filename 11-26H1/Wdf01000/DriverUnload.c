/*
 * XREFs of DriverUnload @ 0x140085F20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxLibraryCleanup@@YAXXZ @ 0x1400855A4 (-FxLibraryCleanup@@YAXXZ.c)
 *     ?WdfDeleteKmdfVersionFromRegistry@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1400856E8 (-WdfDeleteKmdfVersionFromRegistry@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     wil_UninitializeFeatureStaging @ 0x1400DA008 (wil_UninitializeFeatureStaging.c)
 */

void __fastcall DriverUnload(_DRIVER_OBJECT *DriverObject)
{
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "DriverUnload\n");
  }
  WdfDeleteKmdfVersionFromRegistry(DriverObject);
  FxLibraryCleanup();
  wil_UninitializeFeatureStaging();
}
