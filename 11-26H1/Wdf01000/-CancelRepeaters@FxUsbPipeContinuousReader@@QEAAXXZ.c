/*
 * XREFs of ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x140004DC8
 * Callers:
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x140004494 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x140004B78 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ @ 0x14006E9C0 (-WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ.c)
 * Callees:
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x140004F04 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x140005090 (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 */

void __fastcall FxUsbPipeContinuousReader::CancelRepeaters(FxUsbPipeContinuousReader *this)
{
  int v2; // edi
  FxUsbPipeRepeatReader *m_Readers; // rsi
  FxUsbPipe *m_Pipe; // r9
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v7; // r9

  KeEnterCriticalRegion();
  v2 = 0;
  if ( this->m_NumReaders )
  {
    m_Readers = this->m_Readers;
    do
    {
      FxRequestBase::Cancel(m_Readers->Request);
      m_Pipe = this->m_Pipe;
      m_ObjectSize = m_Pipe->m_ObjectSize;
      m_Globals = m_Pipe->m_Globals;
      v7 = (void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v7 = 0LL;
      _FX_DRIVER_GLOBALS::WaitForSignal(
        m_Globals,
        &this->m_Readers[v2].ReadCompletedEvent,
        "waiting for continuous reader to finish, WDFUSBPIPE",
        v7,
        m_Globals->FxVerifierDbgWaitForSignalTimeoutInSec,
        1u);
      ++m_Readers;
      ++v2;
    }
    while ( v2 < this->m_NumReaders );
  }
  KeLeaveCriticalRegion();
}
