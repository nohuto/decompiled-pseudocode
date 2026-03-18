/*
 * XREFs of ?Complete@FxRequest@@QEAAJJ@Z @ 0x140035E50
 * Callers:
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1400353F0 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140048B50 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_CreateCompletionRoutine2@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1400AB920 (-_CreateCompletionRoutine2@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x140036010 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     WPP_IFR_SF_qiid @ 0x14005646C (WPP_IFR_SF_qiid.c)
 */

int __fastcall FxRequest::Complete(FxRequest *this, int Status)
{
  FxDeviceBase *m_DeviceBase; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  char m_Globals_high; // al
  const void *_a1; // r8

  m_DeviceBase = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qiid(
      m_Globals,
      5u,
      0x10u,
      0xBu,
      WPP_FxRequest_hpp_Traceguids,
      _a1,
      this->m_Irp.m_Irp,
      this->m_Irp.m_Irp->IoStatus.Information,
      Status);
  }
  if ( m_DeviceBase )
    m_Globals_high = HIBYTE(m_DeviceBase[1].m_Globals);
  else
    m_Globals_high = 0;
  this->m_PriorityBoost = m_Globals_high;
  return FxRequest::CompleteInternal(this, Status);
}
