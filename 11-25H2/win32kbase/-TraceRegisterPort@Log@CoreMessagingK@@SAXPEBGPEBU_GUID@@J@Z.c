/*
 * XREFs of ?TraceRegisterPort@Log@CoreMessagingK@@SAXPEBGPEBU_GUID@@J@Z @ 0x1400FE7BC
 * Callers:
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1400FCC28 (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14000AA58 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempla.c)
 */

void __fastcall CoreMessagingK::Log::TraceRegisterPort(
        const unsigned __int16 *a1,
        const struct _GUID *a2,
        __int64 a3,
        __int64 a4)
{
  const struct _GUID *v4; // [rsp+40h] [rbp-18h] BYREF
  const WCHAR *v5; // [rsp+48h] [rbp-10h] BYREF
  int v6; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029F130 > 5 )
  {
    v4 = a2;
    v6 = a3;
    v5 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      (__int64)a1,
      (__int64)&unk_1402840EE,
      a3,
      a4,
      &v5,
      (__int64 *)&v4,
      (__int64)&v6);
  }
}
