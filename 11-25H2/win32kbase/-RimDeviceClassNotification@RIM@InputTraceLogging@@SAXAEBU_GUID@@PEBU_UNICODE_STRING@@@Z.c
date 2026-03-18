/*
 * XREFs of ?RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x14011FD30
 * Callers:
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EFCCC (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDeviceClassNotifyUsingAsyncInputWork @ 0x1401F0464 (RIMDeviceClassNotifyUsingAsyncInputWork.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x14011FE00 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE.c)
 */

void __fastcall InputTraceLogging::RIM::RimDeviceClassNotification(
        const struct _GUID *a1,
        const struct _UNICODE_STRING *a2,
        __int64 a3,
        int a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  void *v7; // rdx
  const struct _UNICODE_STRING *v8; // [rsp+50h] [rbp+18h] BYREF

  v5 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 )
    v5 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( v5 )
  {
    v6 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
    if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1 )
      v6 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
    if ( !v6
      && (unsigned int)dword_14029EE20 > 4
      && (qword_14029EE30 & 0x100) != 0
      && (qword_14029EE38 & 0x100) == qword_14029EE38 )
    {
      v7 = &unk_14027C2E7;
LABEL_16:
      v8 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>>(
        (unsigned int)&dword_14029EE20,
        (_DWORD)v7,
        (_DWORD)a2,
        a4,
        (__int64)&v8);
    }
  }
  else if ( (unsigned int)dword_14029EE20 > 4
         && (qword_14029EE30 & 0x100) != 0
         && (qword_14029EE38 & 0x100) == qword_14029EE38 )
  {
    v7 = &unk_14027C2B3;
    goto LABEL_16;
  }
}
