/*
 * XREFs of ?TraceOpenConnectionStart@Log@CoreMessagingK@@SAXDPEBUtagMsgRoutingInfo@@@Z @ 0x1400D82C8
 * Callers:
 *     CoreMsgOpenConnection @ 0x1400D8214 (CoreMsgOpenConnection.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x140007F88 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@@-$_.c)
 */

void __fastcall CoreMessagingK::Log::TraceOpenConnectionStart(
        __int64 a1,
        const struct tagMsgRoutingInfo *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // [rsp+50h] [rbp-28h] BYREF
  __int64 v5; // [rsp+58h] [rbp-20h] BYREF
  _QWORD v6[3]; // [rsp+60h] [rbp-18h] BYREF
  int v7; // [rsp+90h] [rbp+18h] BYREF
  int v8; // [rsp+98h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1402AA150 > 5 )
  {
    v5 = (__int64)a2 + 24;
    v6[0] = *((_QWORD *)a2 + 1);
    v7 = *((_DWORD *)a2 + 1);
    v8 = *(_DWORD *)a2;
    v4 = (char)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
      a1,
      (__int64)&unk_14028E516,
      a3,
      a4,
      (__int64)&v4,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)v6,
      &v5);
  }
}
