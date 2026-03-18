/*
 * XREFs of McTemplateK0upp_EtwWriteTransfer @ 0x14008FC24
 * Callers:
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
 *     McGenEventWrite_EtwWriteTransfer @ 0x14008FBC0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0upp_EtwWriteTransfer(
        _MCGEN_TRACE_CONTEXT *Descriptor,
        const _EVENT_DESCRIPTOR *Activity,
        const _GUID *_Arg0,
        unsigned __int8 _Arg1,
        const void *_Arg2,
        const void *Context)
{
  _EVENT_DATA_DESCRIPTOR EventData[4]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int8 v8; // [rsp+A8h] [rbp+28h] BYREF

  v8 = _Arg1;
  *(_QWORD *)&EventData[1].Size = 1LL;
  EventData[1].Ptr = (unsigned __int64)&v8;
  *(_QWORD *)&EventData[2].Size = 8LL;
  EventData[2].Ptr = (unsigned __int64)&_Arg2;
  EventData[3].Ptr = (unsigned __int64)&Context;
  *(_QWORD *)&EventData[3].Size = 8LL;
  return McGenEventWrite_EtwWriteTransfer(Descriptor, Activity, _Arg0, 4u, EventData);
}
