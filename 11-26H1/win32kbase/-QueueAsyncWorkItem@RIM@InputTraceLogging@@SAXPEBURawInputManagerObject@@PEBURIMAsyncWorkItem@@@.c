/*
 * XREFs of ?QueueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z @ 0x14012CF6C
 * Callers:
 *     RIMQueueAndSignalAsyncWorkItem @ 0x1400460CC (RIMQueueAndSignalAsyncWorkItem.c)
 * Callees:
 *     ?WorkItemTypeToString@InputTraceLogging@@CAPEBDW4ASYNC_INPUT_WORKITEM@@@Z @ 0x14012CFF4 (-WorkItemTypeToString@InputTraceLogging@@CAPEBDW4ASYNC_INPUT_WORKITEM@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@D@@@Z @ 0x14012D074 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 */

void __fastcall InputTraceLogging::RIM::QueueAsyncWorkItem(
        const struct RawInputManagerObject *a1,
        const struct RIMAsyncWorkItem *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  int v4; // r8d
  _QWORD v5[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 4
    && (qword_1402A9E50 & 0x100) != 0
    && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
  {
    v6 = InputTraceLogging::WorkItemTypeToString(*((unsigned int *)a2 + 4));
    v7 = v2;
    v5[0] = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (unsigned int)&dword_1402A9E40,
      (unsigned int)&unk_140286694,
      v4,
      v3,
      (__int64)v5,
      (__int64)&v7,
      (__int64)&v6);
  }
}
