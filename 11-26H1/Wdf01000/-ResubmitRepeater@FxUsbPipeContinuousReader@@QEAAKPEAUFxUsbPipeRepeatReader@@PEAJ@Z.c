/*
 * XREFs of ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x14002EA78
 * Callers:
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x140004B78 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x14002ED10 (-_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PE.c)
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14000A800 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14000AD58 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x14002A780 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x14002E510 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x14003EFD8 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qdq @ 0x14006FF90 (WPP_IFR_SF_qdq.c)
 *     WPP_IFR_SF_qqqq @ 0x140072174 (WPP_IFR_SF_qqqq.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x140079FA8 (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 */

__int64 __fastcall FxUsbPipeContinuousReader::ResubmitRepeater(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *Repeater,
        int *Status)
{
  int *v3; // r15
  unsigned int v6; // ebp
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  int v8; // eax
  unsigned __int8 v9; // r8
  FxUsbPipe *m_Pipe; // rcx
  int v11; // edi
  KIRQL v12; // r14
  unsigned int v13; // eax
  unsigned __int8 v14; // r8
  FxUsbPipe *v15; // rcx
  __int64 result; // rax
  FxUsbPipe *v17; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdx
  FxUsbPipe *v20; // rcx
  unsigned __int16 v21; // ax
  const void *v22; // rcx
  FxUsbPipe *v23; // r8
  int m_NumReaders; // ecx
  unsigned __int8 v25; // al
  int _a3; // edx
  int v27; // ecx
  unsigned __int16 v28; // ax
  const void *v29; // r8
  unsigned __int16 v30; // ax
  const void *v31; // r8
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF
  int *v33; // [rsp+A0h] [rbp+18h]

  v33 = Status;
  v3 = Status;
  irql = 0;
  v6 = 0;
  m_Globals = this->m_Pipe->m_Globals;
  v8 = FxUsbPipeContinuousReader::FormatRepeater(this, Repeater);
  m_Pipe = this->m_Pipe;
  v11 = v8;
  if ( SLOBYTE(m_Pipe->m_ObjectFlags) < 0 && m_Pipe[-1].m_PipeInformation.PipeHandle )
  {
    FxVerifierLock::Lock((FxVerifierLock *)m_Pipe[-1].m_PipeInformation.PipeHandle, &irql, v9);
    v12 = irql;
  }
  else
  {
    v12 = KeAcquireSpinLockRaiseToDpc(&m_Pipe->m_NPLock.m_Lock);
  }
  if ( this->m_WorkItemQueued )
  {
    v11 = -1073741536;
    v17 = this->m_Pipe;
    m_ObjectSize = v17->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqqq(
      m_Globals,
      4u,
      0xEu,
      0xDu,
      WPP_FxUsbPipe_cpp_Traceguids,
      _a1,
      Repeater,
      Repeater->Request,
      Repeater->RequestIrp);
    goto LABEL_31;
  }
  if ( v11 < 0 )
  {
    Repeater->Request->m_Irp.m_Irp->IoStatus.Status = v11;
    v20 = this->m_Pipe;
    v21 = v20->m_ObjectSize;
    v22 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v21 )
      v22 = 0LL;
    WPP_IFR_SF_qdq(m_Globals, 4u, 0xEu, 0xEu, WPP_FxUsbPipe_cpp_Traceguids, v22, v11, Repeater);
    v23 = this->m_Pipe;
    if ( v23->m_State == WdfIoTargetStarted )
    {
      m_NumReaders = this->m_NumReaders;
      v25 = this->m_NumFailedReaders + 1;
      this->m_NumFailedReaders = v25;
      if ( v25 == (_BYTE)m_NumReaders )
      {
        FxUsbPipeContinuousReader::QueueWorkItemLocked(this, Repeater);
      }
      else
      {
        _a3 = m_NumReaders;
        v27 = m_NumReaders - v25;
        v28 = v23->m_ObjectSize;
        v29 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v28 )
          v29 = 0LL;
        WPP_IFR_SF_qdd(m_Globals, 4u, 0xEu, 0xFu, WPP_FxUsbPipe_cpp_Traceguids, v29, v27, _a3);
      }
    }
    else
    {
      v30 = v23->m_ObjectSize;
      v31 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v30 )
        v31 = 0LL;
      WPP_IFR_SF_q(m_Globals, 4u, 0xEu, 0x10u, WPP_FxUsbPipe_cpp_Traceguids, v31);
    }
LABEL_31:
    v3 = v33;
    goto LABEL_7;
  }
  v13 = FxIoTarget::SubmitLocked(this->m_Pipe, (unsigned __int64)Repeater->Request, 0LL, 0x80000000);
  v6 = v13;
  if ( (v13 & 1) != 0 )
  {
    KeClearEvent(&Repeater->ReadCompletedEvent.m_Event);
  }
  else if ( (v13 & 2) != 0 )
  {
    v11 = -1073741536;
  }
  else
  {
    v11 = Repeater->Request->m_Irp.m_Irp->IoStatus.Status;
  }
LABEL_7:
  v15 = this->m_Pipe;
  if ( SLOBYTE(v15->m_ObjectFlags) < 0 && v15[-1].m_PipeInformation.PipeHandle )
    FxVerifierLock::Unlock((FxVerifierLock *)v15[-1].m_PipeInformation.PipeHandle, v12, v14);
  else
    KeReleaseSpinLock(&v15->m_NPLock.m_Lock, v12);
  result = v6;
  *v3 = v11;
  return result;
}
