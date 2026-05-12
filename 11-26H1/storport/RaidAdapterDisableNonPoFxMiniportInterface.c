/*
 * XREFs of RaidAdapterDisableNonPoFxMiniportInterface @ 0x140060F9C
 * Callers:
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401B8714 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1401B9154 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidAdapterDisableNonPoFxMiniportInterface(struct _UNICODE_STRING *a1)
{
  NTSTATUS result; // eax

  if ( a1[362].Buffer )
    return IoSetDeviceInterfaceState(a1 + 362, 0);
  return result;
}
