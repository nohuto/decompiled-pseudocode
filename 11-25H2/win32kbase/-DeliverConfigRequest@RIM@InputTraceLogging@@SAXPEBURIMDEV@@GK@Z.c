/*
 * XREFs of ?DeliverConfigRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@GK@Z @ 0x140137550
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1400B3038 (RIMDeliverConfigRequest.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1401375D0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@@-$_tlgWrite.c)
 */

void __fastcall InputTraceLogging::RIM::DeliverConfigRequest(const struct RIMDEV *a1, __int16 a2, int a3, int a4)
{
  int v4; // [rsp+40h] [rbp-18h] BYREF
  const struct RIMDEV *v5; // [rsp+48h] [rbp-10h] BYREF
  __int16 v6; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029EE20 > 4
    && (qword_14029EE30 & 0x100) != 0
    && (qword_14029EE38 & 0x100) == qword_14029EE38 )
  {
    v6 = a2;
    v5 = a1;
    v4 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_14029EE20,
      (unsigned int)&unk_14027B056,
      a3,
      a4,
      (__int64)&v5,
      (__int64)&v6,
      (__int64)&v4);
  }
}
