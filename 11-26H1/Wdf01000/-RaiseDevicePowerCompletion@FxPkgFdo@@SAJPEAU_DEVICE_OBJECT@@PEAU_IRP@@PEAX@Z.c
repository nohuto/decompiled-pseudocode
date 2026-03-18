/*
 * XREFs of ?RaiseDevicePowerCompletion@FxPkgFdo@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140044E40
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1400464FC (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgFdo::RaiseDevicePowerCompletion(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *OriginalIrp,
        FxPkgPnp *Context)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax

  OriginalIrp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  Context->m_PendingDevicePowerIrp = OriginalIrp;
  CurrentStackLocation = OriginalIrp->Tail.Overlay.CurrentStackLocation;
  if ( (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart > 1 )
    Context->m_SystemPowerAction = CurrentStackLocation->Parameters.SetFile.ReplaceIfExists;
  FxPkgPnp::PowerProcessEvent(Context, PowerD0, 0);
  return 3221225494LL;
}
