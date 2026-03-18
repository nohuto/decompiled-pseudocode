/*
 * XREFs of DereferenceDeviceResetInterface @ 0x140045C14
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x140082630 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1400836F0 (HUBPDO_EvtDeviceReleaseHardware.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x140084364 (HUBPDO_InvokePortPLDRRecovery.c)
 *     HUBPDO_RegisterPortPLDRCapability @ 0x140084D6C (HUBPDO_RegisterPortPLDRCapability.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

void *__fastcall DereferenceDeviceResetInterface(_QWORD *a1)
{
  void (__fastcall *v1)(_QWORD); // rax

  v1 = (void (__fastcall *)(_QWORD))a1[3];
  if ( v1 )
    v1(a1[1]);
  return memset(a1, 0, 0x50uLL);
}
