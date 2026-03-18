/*
 * XREFs of ?FxLibraryCleanup@@YAXXZ @ 0x1400855A4
 * Callers:
 *     DriverEntry @ 0x140085CB0 (DriverEntry.c)
 *     DriverUnload @ 0x140085F20 (DriverUnload.c)
 * Callees:
 *     <none>
 */

void FxLibraryCleanup(void)
{
  if ( WPP_GLOBAL_WDF_Control.DeviceObjectExtension )
  {
    IoDeleteDevice((PDEVICE_OBJECT)WPP_GLOBAL_WDF_Control.DeviceObjectExtension);
    WPP_GLOBAL_WDF_Control.DeviceObjectExtension = 0LL;
  }
  if ( qword_1400C90D0 )
  {
    ExFreePoolWithTag(qword_1400C90D0, 0);
    qword_1400C90D0 = 0LL;
  }
}
