/*
 * XREFs of VrpRegistryUnload @ 0x1408A5460
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IoDeleteDevice @ 0x140437BA0 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PsFreeSiloContextSlot @ 0x1407EE620 (PsFreeSiloContextSlot.c)
 *     EtwUnregister @ 0x140A84ED0 (EtwUnregister.c)
 */

NTSTATUS VrpRegistryUnload()
{
  REGHANDLE v0; // rcx
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice((PDEVICE_OBJECT)WheapPfaLock.SchedulerAssist);
  WheapPfaLock.SchedulerAssist = 0LL;
  PsFreeSiloContextSlot(gLoadedDiffHivesLock.QuantumTarget);
  if ( (unsigned int)dword_140E0A5C0 > 5 )
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E0A5C0,
      (unsigned __int8 *)&dword_14005A6E6 + 1,
      0LL,
      0LL,
      2u,
      &v2);
  v0 = qword_140E0A5E0;
  qword_140E0A5E0 = 0LL;
  dword_140E0A5C0 = 0;
  return EtwUnregister(v0);
}
