/*
 * XREFs of WdmlibIoValidateDeviceIoControlAccess @ 0x1400E7D44
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall WdmlibIoValidateDeviceIoControlAccess(PIRP Irp, ULONG RequiredAccess)
{
  NTSTATUS result; // eax

  result = (int)PfnIoValidateDeviceIoControlAccess;
  if ( PfnIoValidateDeviceIoControlAccess )
    return PfnIoValidateDeviceIoControlAccess(Irp, 2LL);
  return result;
}
