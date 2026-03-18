/*
 * XREFs of ?CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x140061CB0
 * Callers:
 *     imp_WdfDeviceStopIdleActual @ 0x140010F50 (imp_WdfDeviceStopIdleActual.c)
 *     StopIdleWorker @ 0x140011570 (StopIdleWorker.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z @ 0x140031520 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEBD@Z.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x140031FD0 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1400322B0 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1400326D0 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1400339D0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     imp_WdfDeviceResumeIdleActual @ 0x14004AD80 (imp_WdfDeviceResumeIdleActual.c)
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x140060C28 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 * Callees:
 *     memmove @ 0x1400AD500 (memmove.c)
 */

void __fastcall FxIoContext::CopyParameters(FxIoContext *this, FxRequestBase *Request)
{
  int v4; // ecx
  int v5; // ecx
  void *m_BufferToFree; // rdx
  _IRP *m_Irp; // r8
  void *UserBuffer; // rcx

  v4 = this->m_MajorFunction - 3;
  if ( v4 && (v5 = v4 - 1) != 0 )
  {
    if ( (unsigned int)(v5 - 10) <= 1 )
      this->m_CompletionParams.Parameters.Ioctl.Output.Length = this->m_CompletionParams.IoStatus.Information;
  }
  else
  {
    this->m_CompletionParams.Parameters.Write.Length = this->m_CompletionParams.IoStatus.Information;
  }
  m_BufferToFree = this->m_BufferToFree;
  if ( m_BufferToFree && this->m_CopyBackToBuffer )
  {
    m_Irp = Request->m_Irp.m_Irp;
    UserBuffer = m_Irp->UserBuffer;
    if ( UserBuffer )
    {
      memmove(UserBuffer, m_BufferToFree, m_Irp->IoStatus.Information);
      this->m_CopyBackToBuffer = 0;
    }
  }
}
