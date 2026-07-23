/*
 * XREFs of VrpRegistryUnload @ 0x1408AB8D0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PsFreeSiloContextSlot @ 0x1407F4180 (PsFreeSiloContextSlot.c)
 *     EtwUnregister @ 0x1409BE550 (EtwUnregister.c)
 */

NTSTATUS VrpRegistryUnload()
{
  REGHANDLE v0; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice((PDEVICE_OBJECT)WheapPfaLock.ExtendedFeatureDisableMask);
  WheapPfaLock.ExtendedFeatureDisableMask = 0LL;
  PsFreeSiloContextSlot(gLoadedDiffHivesLock.QuantumTarget);
  if ( (unsigned int)dword_140E0A5C0 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E0A5C0, (unsigned __int8 *)byte_14005B743, 0LL, 0LL, 2u, &v2);
  v0 = qword_140E0A5E0;
  qword_140E0A5E0 = 0LL;
  dword_140E0A5C0 = 0;
  return EtwUnregister(v0);
}
