/*
 * XREFs of UsbhPdoRemoveCleanup @ 0x140010CF0
 * Callers:
 *     UsbhPdoPnp_RemoveDevice @ 0x14005D810 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x14005DAE0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     UsbhCompletePdoWakeIrp @ 0x14001087C (UsbhCompletePdoWakeIrp.c)
 *     UsbhCompletePdoIdleIrp @ 0x140010A24 (UsbhCompletePdoIdleIrp.c)
 *     UsbhPdoDeleteSymbolicLink @ 0x140010C08 (UsbhPdoDeleteSymbolicLink.c)
 *     UsbhRefPdoDeviceHandle @ 0x1400118A0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x140011B50 (UsbhDerefPdoDeviceHandle.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

int __fastcall UsbhPdoRemoveCleanup(PDEVICE_OBJECT DeviceObject)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax

  v2 = PdoExt(DeviceObject);
  v3 = PdoExt(DeviceObject);
  if ( *(_DWORD *)(v3 + 1120) != 100 )
  {
    v3 = PdoExt(DeviceObject);
    if ( *(_DWORD *)(v3 + 1120) != 102 )
    {
      UsbhCompletePdoWakeIrp(*(_QWORD *)(v2 + 1184), (__int64)DeviceObject, -1073741536);
      UsbhCompletePdoIdleIrp(*(_QWORD *)(v2 + 1184), *(_QWORD *)(v2 + 840), -1073741536);
      v5 = UsbhRefPdoDeviceHandle(*(_QWORD *)(v2 + 1184), DeviceObject, DeviceObject, 1212443750LL);
      if ( v5 )
      {
        v8 = FdoExt(*(_QWORD *)(v2 + 1184), v4, v6, v7);
        if ( *(_QWORD *)(v8 + 4368) )
          (*(void (__fastcall **)(_QWORD, __int64))(v8 + 4368))(*(_QWORD *)(v8 + 4232), v5);
        UsbhDerefPdoDeviceHandle(*(_QWORD *)(v2 + 1184), v5, DeviceObject, 1212443750LL);
      }
      UsbhPdoDeleteSymbolicLink((__int64)DeviceObject);
      LODWORD(v3) = *(_DWORD *)(v2 + 1420);
      if ( (v3 & 0x80u) != 0LL )
      {
        LODWORD(v3) = IoWMIRegistrationControl(DeviceObject, 2u);
        *(_DWORD *)(v2 + 1420) &= ~0x80u;
      }
    }
  }
  return v3;
}
