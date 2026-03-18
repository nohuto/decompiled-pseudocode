/*
 * XREFs of ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x14004FCF0
 * Callers:
 *     imp_WdfRequestForwardToParentDeviceIoQueue @ 0x14004F480 (imp_WdfRequestForwardToParentDeviceIoQueue.c)
 *     imp_WdfRequestRequeue @ 0x14004FC40 (imp_WdfRequestRequeue.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x14004FE20 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     imp_WdfRequestGetIoQueue @ 0x140059650 (imp_WdfRequestGetIoQueue.c)
 *     imp_VfWdfIoQueueRetrieveFoundRequest @ 0x1400E00A0 (imp_VfWdfIoQueueRetrieveFoundRequest.c)
 *     imp_VfWdfIoQueueRetrieveNextRequest @ 0x1400E01F0 (imp_VfWdfIoQueueRetrieveNextRequest.c)
 *     imp_VfWdfIoQueueRetrieveRequestByFileObject @ 0x1400E0340 (imp_VfWdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_VfWdfRequestComplete @ 0x1400E15A0 (imp_VfWdfRequestComplete.c)
 *     imp_VfWdfRequestCompleteWithInformation @ 0x1400E1700 (imp_VfWdfRequestCompleteWithInformation.c)
 *     imp_VfWdfRequestCompleteWithPriorityBoost @ 0x1400E1860 (imp_VfWdfRequestCompleteWithPriorityBoost.c)
 *     VfEvtIoDefault @ 0x1400E4100 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1400E42C0 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1400E44A0 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1400E4680 (VfEvtIoRead.c)
 *     VfEvtIoWrite @ 0x1400E49D0 (VfEvtIoWrite.c)
 * Callees:
 *     <none>
 */

FxIoQueue *__fastcall FxRequest::GetCurrentQueue(FxRequest *this)
{
  if ( this->m_Completed )
    return 0LL;
  else
    return this->m_IoQueue;
}
