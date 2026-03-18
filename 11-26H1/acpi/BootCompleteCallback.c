/*
 * XREFs of BootCompleteCallback @ 0x1400AA3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BootCompleteCallback(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  LOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = 1;
}
