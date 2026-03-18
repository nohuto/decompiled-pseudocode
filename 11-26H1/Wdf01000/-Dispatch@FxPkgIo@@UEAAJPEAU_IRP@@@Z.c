/*
 * XREFs of ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x14000D1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x14000D2C0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     WPP_IFR_SF_qqcDq @ 0x1400917B4 (WPP_IFR_SF_qqcDq.c)
 */

int __fastcall FxPkgIo::Dispatch(FxPkgIo *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r8
  _FX_DRIVER_GLOBALS *v5; // rcx
  FxDeviceBase *m_DeviceBase; // r11
  const void *_a3; // r10

  m_Globals = this->m_Globals;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
    *(_QWORD *)((unsigned int)(unk_1400C9080 * HIDWORD(KeGetPcr()[1].LockArray)) + unk_1400C9070) = m_Globals;
  v5 = this->m_Globals;
  if ( v5->FxVerboseOn )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a3 = 0LL;
    WPP_IFR_SF_qqcDq(
      v5,
      Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
      (unsigned int)Irp->Tail.Overlay.CurrentStackLocation,
      0xCu,
      WPP_FxPkgIo_cpp_Traceguids,
      _a3,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
      Irp);
  }
  return FxPkgIo::DispatchStep1(this, Irp, this->m_DynamicDispatchInfoListHead.Flink);
}
