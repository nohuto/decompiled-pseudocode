/*
 * XREFs of ?DispatchDeviceSetPower@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x140045700
 * Callers:
 *     ?_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1400456D0 (-_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqq @ 0x140039C38 (WPP_IFR_SF_qqq.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1400464FC (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall FxPkgPdo::DispatchDeviceSetPower(FxPkgPdo *this, FxIrp *Irp)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  int v3; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  FxPowerPolicyOwnerSettings *v8; // rax
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a2; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  v3 = 0;
  if ( m_Owner )
  {
    if ( !m_Owner->m_RequestedPowerUpIrp && !m_Owner->m_RequestedPowerDownIrp )
    {
      m_DeviceBase = this->m_DeviceBase;
      _a2 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqq(
        this->m_Globals,
        2u,
        0xCu,
        0xAu,
        WPP_PdoPower_cpp_Traceguids,
        Irp->m_Irp,
        _a2,
        m_DeviceBase->m_DeviceObject.m_DeviceObject);
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerifierOn )
        FxVerifierBugCheckWorker(
          m_Globals,
          WDF_POWER_MULTIPLE_PPO,
          (unsigned __int64)this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
          (unsigned __int64)Irp->m_Irp);
    }
    v8 = this->m_PowerPolicyMachine.m_Owner;
    if ( v8->m_RequestedPowerUpIrp )
      v8->m_RequestedPowerUpIrp = 0;
    else
      v8->m_RequestedPowerDownIrp = 0;
  }
  Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  this->m_PendingDevicePowerIrp = Irp->m_Irp;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  if ( (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart > 1 )
    this->m_SystemPowerAction = CurrentStackLocation->Parameters.SetFile.ReplaceIfExists;
  LOBYTE(v3) = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1;
  FxPkgPnp::PowerProcessEvent(this, (FxPowerEvent)(v3 + 1), 0);
  return 259LL;
}
