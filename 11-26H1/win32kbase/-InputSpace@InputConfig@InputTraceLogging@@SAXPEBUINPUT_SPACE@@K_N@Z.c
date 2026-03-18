/*
 * XREFs of ?InputSpace@InputConfig@InputTraceLogging@@SAXPEBUINPUT_SPACE@@K_N@Z @ 0x14008EDB8
 * Callers:
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x14008E5EC (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x140131D1C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall InputTraceLogging::InputConfig::InputSpace(const struct INPUT_SPACE *a1, int a2, int a3, int a4)
{
  int v4; // [rsp+40h] [rbp-18h] BYREF
  int v5; // [rsp+44h] [rbp-14h] BYREF
  __int64 v6; // [rsp+48h] [rbp-10h] BYREF
  int v7; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 2) != 0 && (qword_1402A9E58 & 2) == qword_1402A9E58 )
  {
    v7 = (unsigned __int8)a3;
    v5 = *((_DWORD *)a1 + 2);
    v6 = *(_QWORD *)a1;
    v4 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1402A9E40,
      (unsigned int)&unk_140288350,
      a3,
      a4,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v7);
  }
}
