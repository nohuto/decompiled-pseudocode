/*
 * XREFs of ?TraceClientDisconnect@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@PEBUClientPortInfo@2@@Z @ 0x1400FE614
 * Callers:
 *     ?HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2@@Z @ 0x1400FE564 (-HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x14000AEE4 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTem.c)
 */

void __fastcall CoreMessagingK::Log::TraceClientDisconnect(
        const struct CoreMessagingK::ServerPortInfo *a1,
        const struct CoreMessagingK::ClientPortInfo *a2,
        __int64 a3,
        __int64 a4)
{
  const WCHAR *v4; // [rsp+40h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp-10h] BYREF
  int v6; // [rsp+70h] [rbp+18h] BYREF
  int v7; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029F130 > 5 )
  {
    v6 = *((_DWORD *)a2 + 3);
    v7 = *((_DWORD *)a2 + 2);
    v4 = (const WCHAR *)*((_QWORD *)a1 + 4);
    v5 = (__int64)a1 + 16;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)a1,
      (__int64)&unk_140284190,
      a3,
      a4,
      &v5,
      &v4,
      (__int64)&v7,
      (__int64)&v6);
  }
}
