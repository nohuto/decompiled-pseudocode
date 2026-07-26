/*
 * XREFs of ndisDriverReinit @ 0x140097620
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x14016A550 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 */

void __fastcall ndisDriverReinit(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  ndisIfEnsureNsiInitialized();
  ndisBootFinishedTime.QuadPart = MEMORY[0xFFFFF78000000014];
}
