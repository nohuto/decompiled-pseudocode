/*
 * XREFs of ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x140019968
 * Callers:
 *     ?_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CONFIG@@PEAVFxDriver@@PEAVFxPkgIo@@EPEAPEAV1@@Z @ 0x1400193C0 (-_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CON.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?ConfigureConstraints@FxIoQueue@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@@Z @ 0x14001AC1C (-ConfigureConstraints@FxIoQueue@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@@Z.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x14001AE64 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_dqd @ 0x14003E928 (WPP_IFR_SF_dqd.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x14004ED90 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     WPP_IFR_SF_qqqqq @ 0x14007FA08 (WPP_IFR_SF_qqqqq.c)
 */

int __fastcall FxIoQueue::Initialize(
        FxIoQueue *this,
        _WDF_IO_QUEUE_CONFIG *pConfig,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        FxDriver *Caller,
        unsigned __int8 InitialPowerStateOn)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  MxEvent *p_m_PowerIdle; // rbx
  int result; // eax
  unsigned int NumberOfPresentedRequests; // edx
  _WDF_IO_QUEUE_DISPATCH_TYPE DispatchType; // ecx
  void (__fastcall *EvtIoDefault)(WDFQUEUE__ *, WDFREQUEST__ *); // rax
  _WDF_TRI_STATE PowerManaged; // ecx
  __int32 v16; // ecx
  FxIoQueuePowerState v17; // eax
  unsigned __int16 v18; // r9
  unsigned __int16 v19; // ax
  const void *_a1; // rbp
  signed int v21; // ebx
  unsigned __int16 v22; // r9
  const void *globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rbp

  m_Globals = this->m_Globals;
  p_m_PowerIdle = &this->m_PowerIdle;
  KeInitializeEvent(&this->m_PowerIdle.m_Event, NotificationEvent, 0);
  p_m_PowerIdle->m_DbgFlagIsInitialized = 1;
  KeInitializeEvent(&this->m_FinishDisposing.m_Event, NotificationEvent, 0);
  this->m_FinishDisposing.m_DbgFlagIsInitialized = 1;
  this->m_ObjectFlags |= 0x800u;
  result = FxIoQueue::ConfigureConstraints(this, QueueAttributes, Caller);
  if ( result >= 0 )
  {
    DispatchType = pConfig->DispatchType;
    if ( (unsigned int)(DispatchType - 1) > 2 )
    {
      m_ObjectSize = this->m_ObjectSize;
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v21 = -1073741811;
      if ( !m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_dqd(m_Globals, 2u, 0xDu, 0xCu, WPP_FxIoQueue_cpp_Traceguids, DispatchType, _a2, -1073741811);
      return v21;
    }
    EvtIoDefault = pConfig->EvtIoDefault;
    if ( DispatchType == WdfIoQueueDispatchManual )
    {
      if ( EvtIoDefault
        || pConfig->EvtIoRead
        || pConfig->EvtIoWrite
        || pConfig->EvtIoDeviceControl
        || pConfig->EvtIoInternalDeviceControl )
      {
        v18 = 16;
        goto LABEL_26;
      }
    }
    else if ( !EvtIoDefault
           && !pConfig->EvtIoRead
           && !pConfig->EvtIoWrite
           && !pConfig->EvtIoDeviceControl
           && !pConfig->EvtIoInternalDeviceControl )
    {
      v21 = -1071644149;
      v22 = 15;
      goto LABEL_38;
    }
    if ( pConfig->Size > 0x50 )
    {
      NumberOfPresentedRequests = pConfig->Settings.Parallel.NumberOfPresentedRequests;
      if ( NumberOfPresentedRequests && ((DispatchType - 1) & 0xFFFFFFFD) == 0 )
      {
        v18 = 17;
LABEL_26:
        v19 = this->m_ObjectSize;
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        v21 = -1073741811;
        if ( !v19 )
          _a1 = 0LL;
        WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, v18, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741811);
        return v21;
      }
      this->m_MaxParallelQueuePresentedRequests = NumberOfPresentedRequests;
    }
    if ( this->m_PassiveLevel )
    {
      v21 = FxSystemWorkItem::_Create(
              m_Globals,
              this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
              &this->m_SystemWorkItem);
      if ( v21 < 0 )
      {
        v22 = 18;
LABEL_38:
        WPP_IFR_SF_D(m_Globals, 2u, 0xDu, v22, WPP_FxIoQueue_cpp_Traceguids, v21);
        return v21;
      }
    }
    this->m_Type = pConfig->DispatchType;
    PowerManaged = pConfig->PowerManaged;
    if ( PowerManaged )
    {
      v16 = PowerManaged - 1;
      if ( v16 )
      {
        if ( v16 == 1 )
          this->m_PowerManaged = BYTE1(this->m_DeviceBase[1].m_Globals) == 0;
      }
      else
      {
        this->m_PowerManaged = 1;
      }
    }
    else
    {
      this->m_PowerManaged = 0;
    }
    if ( BYTE5(this->m_DeviceBase[1].m_Globals) )
      this->m_PowerManaged = 0;
    if ( this->m_PowerManaged )
      v17 = 2 - (InitialPowerStateOn != 0);
    else
      v17 = FxIoQueuePowerOn;
    this->m_PowerState = v17;
    this->m_AllowZeroLengthRequests = pConfig->AllowZeroLengthRequests;
    if ( m_Globals->FxVerboseOn )
    {
      globals = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        globals = 0LL;
      WPP_IFR_SF_qqqqq(
        m_Globals,
        NumberOfPresentedRequests,
        0xDu,
        0x13u,
        WPP_FxIoQueue_cpp_Traceguids,
        pConfig->EvtIoDefault,
        pConfig->EvtIoRead,
        pConfig->EvtIoWrite,
        pConfig->EvtIoDeviceControl,
        globals);
    }
    this->m_IoDefault.Method = pConfig->EvtIoDefault;
    this->m_IoStop.Method = pConfig->EvtIoStop;
    this->m_IoResume.Method = pConfig->EvtIoResume;
    this->m_IoRead.Method = pConfig->EvtIoRead;
    this->m_IoWrite.Method = pConfig->EvtIoWrite;
    this->m_IoDeviceControl.Method = pConfig->EvtIoDeviceControl;
    this->m_IoInternalDeviceControl.Method = pConfig->EvtIoInternalDeviceControl;
    this->m_IoCanceledOnQueue.Method = pConfig->EvtIoCanceledOnQueue;
    FxIoQueue::SetState(this, FxIoQueueSetDispatchRequests|0x1);
    result = 0;
    this->m_Configured = 1;
  }
  return result;
}
