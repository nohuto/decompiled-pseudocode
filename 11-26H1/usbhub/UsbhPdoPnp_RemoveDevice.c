/*
 * XREFs of UsbhPdoPnp_RemoveDevice @ 0x14005D810
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPdoRemoveCleanup @ 0x140010CF0 (UsbhPdoRemoveCleanup.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1400120E4 (UsbhSyncResumeDeviceInternal.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 *     UsbhAcquireFdoPwrLock @ 0x14002AFD0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002B05C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetPdoPowerState @ 0x140034138 (UsbhSetPdoPowerState.c)
 *     SET_PDO_SWPNPSTATE @ 0x140035700 (SET_PDO_SWPNPSTATE.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 *     UsbhSetPdo_FailIo @ 0x140048260 (UsbhSetPdo_FailIo.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1400493F8 (Usbh_PdoRemove_PdoEvent.c)
 *     WnfPublishUsbPartnerDualRoleFeatures @ 0x140060850 (WnfPublishUsbPartnerDualRoleFeatures.c)
 */

__int64 __fastcall UsbhPdoPnp_RemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _QWORD *v4; // r15
  int v5; // r14d
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  __int64 v8; // rsi
  KSPIN_LOCK v9; // r14
  __int64 v10; // r8
  __int64 v11; // rdx

  v4 = 0LL;
  v5 = PdoExt((__int64)DeviceObject)[281];
  v6 = PdoExt((__int64)DeviceObject);
  v7 = v6;
  if ( _bittest(v6 + 355, 0x12u) )
    v8 = 0LL;
  else
    v8 = *((_QWORD *)v6 + 148);
  if ( v5 != 6 )
  {
    v9 = (KSPIN_LOCK)(v6 + 236);
    if ( _bittest(v6 + 358, 0x12u) )
    {
      WnfPublishUsbPartnerDualRoleFeatures(*((_QWORD *)v6 + 382), 0LL, 0LL);
      v7[358] &= ~0x40000u;
    }
    if ( v8 )
    {
      UsbhSetPdo_FailIo((__int64)DeviceObject);
      if ( v7[288] == 2 || PdoExt((__int64)DeviceObject)[197] != 1 )
        v4 = (_QWORD *)UsbhIncHubBusy(v8, v9, (__int64)DeviceObject, 1381200755, 1);
      if ( PdoExt((__int64)DeviceObject)[197] != 1 )
      {
        UsbhSyncResumeDeviceInternal(v8, v9, DeviceObject);
        UsbhAcquireFdoPwrLock(v8, v9, 137, 1148020050);
        UsbhSetPdoPowerState(v9, (__int64)DeviceObject, v10, 1, 15);
        UsbhReleaseFdoPwrLock(v8, v9);
      }
      UsbhPdoRemoveCleanup(DeviceObject);
    }
    SET_PDO_SWPNPSTATE((__int64)DeviceObject, 102, 2);
    Usbh_PdoRemove_PdoEvent(v8, (__int64)DeviceObject, v9);
    if ( v4 )
      UsbhDecHubBusy(v8, v11, v4);
  }
  if ( !Irp )
    UsbhTrapFatal_Dbg(v8, (ULONG_PTR)DeviceObject);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
