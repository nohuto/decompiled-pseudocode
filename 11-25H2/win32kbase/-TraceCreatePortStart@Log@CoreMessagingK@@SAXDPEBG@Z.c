/*
 * XREFs of ?TraceCreatePortStart@Log@CoreMessagingK@@SAXDPEBG@Z @ 0x1401A1618
 * Callers:
 *     CoreMsgCreatePort @ 0x1400FC7E4 (CoreMsgCreatePort.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x140135188 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall CoreMessagingK::Log::TraceCreatePortStart(char a1, const unsigned __int16 *a2, __int64 a3, __int64 a4)
{
  int v4; // [rsp+40h] [rbp+8h] BYREF
  const WCHAR *v5; // [rsp+50h] [rbp+18h] BYREF

  LOBYTE(v4) = a1;
  if ( (unsigned int)dword_14029F130 > 5 )
  {
    v4 = 0;
    v5 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (__int64)&dword_14029F130,
      byte_140283D93,
      a3,
      a4,
      (__int64)&v4,
      &v5);
  }
}
