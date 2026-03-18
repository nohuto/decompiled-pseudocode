/*
 * XREFs of ??1FxSyncRequest@@UEAA@XZ @ 0x14002AE00
 * Callers:
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x140001D20 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x140004494 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x140004800 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x140015D90 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x140016380 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1400173B4 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x140022B30 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     FxIoTargetSendIoctl @ 0x140027D60 (FxIoTargetSendIoctl.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1400289A0 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     FxIoTargetSendIo @ 0x14002B350 (FxIoTargetSendIo.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x140053FFC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x14005E824 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x14005EFE8 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x140074C44 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x14009CC30 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x14009F6F4 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x14009F78C (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1400A0790 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 *     ??_GFxSyncRequest@@UEAAPEAXI@Z @ 0x1400ACA60 (--_GFxSyncRequest@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x140007B28 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x14002B070 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?FinalRelease@FxObject@@AEAAXXZ @ 0x14002CB10 (-FinalRelease@FxObject@@AEAAXXZ.c)
 */

void __fastcall FxSyncRequest::~FxSyncRequest(FxSyncRequest *this)
{
  _LIST_ENTRY *Flink; // rcx
  signed __int32 v3; // edi
  FxSyncRequest *m_TrueRequest; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v6; // rcx

  this->__vftable = (FxSyncRequest_vtbl *)FxSyncRequest::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Flink = this[-1].m_DestroyedEvent.m_Event.m_Event.Header.WaitListHead.Flink;
    if ( Flink )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)Flink,
        0LL,
        129,
        "minkernel\\wdf\\framework\\shared\\core\\fxsyncrequest.cpp",
        TagRelease,
        this->m_Refcnt - 1);
  }
  v3 = _InterlockedDecrement(&this->m_Refcnt);
  if ( !v3 )
    FxObject::FinalRelease(this);
  m_TrueRequest = (FxSyncRequest *)this->m_TrueRequest;
  if ( m_TrueRequest != this )
  {
    if ( !this->m_ClearContextOnDestroy )
      goto LABEL_11;
    m_TrueRequest->m_RequestContext = 0LL;
    this->m_TrueRequest->m_RequestBaseFlags &= ~0x10u;
  }
  if ( this->m_ClearContextOnDestroy )
    this->m_RequestContext = 0LL;
LABEL_11:
  if ( v3 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0xAu, WPP_FxSyncRequest_cpp_Traceguids, this, &this->m_DestroyedEvent);
    FxCREvent::EnterCRAndWaitAndLeave(&this->m_DestroyedEvent);
    v6 = this->m_Globals;
    if ( v6->FxVerboseOn )
      WPP_IFR_SF_qq(v6, 5u, 0xDu, 0xBu, WPP_FxSyncRequest_cpp_Traceguids, this, &this->m_DestroyedEvent);
  }
  FxRequestBase::~FxRequestBase(this);
}
