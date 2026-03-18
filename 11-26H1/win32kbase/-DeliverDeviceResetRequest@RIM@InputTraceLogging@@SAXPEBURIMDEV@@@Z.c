/*
 * XREFs of ?DeliverDeviceResetRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x14005B2C4
 * Callers:
 *     RIMDeliverDeviceResetRequest @ 0x14005B0E0 (RIMDeliverDeviceResetRequest.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14005B6B0 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall InputTraceLogging::RIM::DeliverDeviceResetRequest(
        const struct RIMDEV *a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  const struct RIMDEV *v4; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 4
    && (qword_1402A9E50 & 0x100) != 0
    && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
  {
    v4 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1402A9E40,
      (unsigned int)&unk_140288177,
      256,
      a4,
      (__int64)&v4);
  }
}
