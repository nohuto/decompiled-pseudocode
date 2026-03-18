/*
 * XREFs of ?TraceUnregisterObject@Log@CoreMessagingK@@SAXPEBGJ@Z @ 0x1401A1A68
 * Callers:
 *     ?UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z @ 0x1400FC484 (-UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14000AB24 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall CoreMessagingK::Log::TraceUnregisterObject(const unsigned __int16 *a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // [rsp+50h] [rbp+18h] BYREF
  const WCHAR *v5; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029F130 > 5 )
  {
    v4 = a2;
    v5 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (__int64)a1,
      (__int64)&unk_1402840BA,
      a3,
      a4,
      &v5,
      (__int64)&v4);
  }
}
