/*
 * XREFs of RaidAdapterDisableMFNDInterface @ 0x140060F64
 * Callers:
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401B8714 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1401B9154 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaidAdapterDisableMFNDInterface(__int64 a1)
{
  struct _UNICODE_STRING *v1; // rcx
  NTSTATUS result; // eax

  v1 = *(struct _UNICODE_STRING **)(a1 + 6224);
  if ( v1 )
  {
    if ( v1[1].Buffer )
      return IoSetDeviceInterfaceState(v1 + 1, 0);
  }
  return result;
}
