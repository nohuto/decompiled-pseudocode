/*
 * XREFs of ?TraceConnectionRequest@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@EJII@Z @ 0x1400DA5CC
 * Callers:
 *     ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1400DA424 (-HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@66@Z @ 0x140003EA0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVa.c)
 */

void __fastcall CoreMessagingK::Log::TraceConnectionRequest(
        const struct CoreMessagingK::ServerPortInfo *a1,
        char a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  _BYTE v5[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v6; // [rsp+54h] [rbp-1Ch] BYREF
  int v7; // [rsp+58h] [rbp-18h] BYREF
  int v8; // [rsp+5Ch] [rbp-14h] BYREF
  const WCHAR *v9; // [rsp+60h] [rbp-10h] BYREF
  __int64 v10; // [rsp+68h] [rbp-8h] BYREF

  if ( (unsigned int)dword_1402AA150 > 5 )
  {
    v6 = a5;
    v9 = (const WCHAR *)*((_QWORD *)a1 + 4);
    v10 = (__int64)a1 + 16;
    v5[0] = a2;
    v7 = a4;
    v8 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)a1,
      (__int64)&unk_14028E7B3,
      a3,
      a4,
      &v10,
      &v9,
      (__int64)v5,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6);
  }
}
