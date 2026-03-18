/*
 * XREFs of ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1400A0790
 * Callers:
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x140004B78 (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     imp_WdfUsbTargetDeviceResetPortSynchronously @ 0x14009DB90 (imp_WdfUsbTargetDeviceResetPortSynchronously.c)
 * Callees:
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1400177F0 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x140022D48 (-SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OP.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x140026F90 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x14002AE00 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??1FxIoContext@@UEAA@XZ @ 0x14002C9CC (--1FxIoContext@@UEAA@XZ.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x14005DC98 (--0FxIoContext@@QEAA@XZ.c)
 *     ?CancelSentIo@FxUsbDevice@@QEAAXXZ @ 0x14009F1DC (-CancelSentIo@FxUsbDevice@@QEAAXXZ.c)
 */

__int64 __fastcall FxUsbDevice::Reset(FxUsbDevice *this)
{
  __int64 v2; // rdx
  int v3; // edi
  unsigned __int8 v4; // r8
  FxFileObject *v6; // [rsp+30h] [rbp-D0h]
  FxRequestBuffer emptyBuffer; // [rsp+40h] [rbp-C0h] BYREF
  FxIoContext context; // [rsp+60h] [rbp-A0h] BYREF
  FxSyncRequest request; // [rsp+110h] [rbp+10h] BYREF

  FxIoContext::FxIoContext(&context);
  FxSyncRequest::FxSyncRequest(&request, this->m_Globals, &context, 0LL);
  emptyBuffer.DataType = FxRequestBufferUnspecified;
  memset(&emptyBuffer.u, 0, sizeof(emptyBuffer.u));
  v3 = FxIoTarget::FormatIoctlRequest(this, request.m_TrueRequest, 0x220007u, 1u, &emptyBuffer, &emptyBuffer, v6);
  if ( v3 >= 0 )
  {
    FxUsbDevice::CancelSentIo(this, v2, v4);
    v3 = FxIoTarget::SubmitSyncRequestIgnoreTargetState(this, request.m_TrueRequest, 0LL);
  }
  FxSyncRequest::~FxSyncRequest(&request);
  FxIoContext::~FxIoContext(&context);
  return (unsigned int)v3;
}
