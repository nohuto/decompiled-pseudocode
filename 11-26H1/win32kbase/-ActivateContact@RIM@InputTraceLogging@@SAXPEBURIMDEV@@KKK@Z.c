/*
 * XREFs of ?ActivateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK@Z @ 0x14015C9D0
 * Callers:
 *     RIMCmActivateContact @ 0x14015C7F8 (RIMCmActivateContact.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x140131D1C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall InputTraceLogging::RIM::ActivateContact(const struct RIMDEV *a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+44h] [rbp-24h] BYREF
  int v6; // [rsp+48h] [rbp-20h] BYREF
  const struct RIMDEV *v7; // [rsp+50h] [rbp-18h] BYREF

  if ( (unsigned int)dword_1402A9E40 > 4
    && (qword_1402A9E50 & 0x100) != 0
    && (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
  {
    v6 = a2;
    v7 = a1;
    v4 = a4;
    v5 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1402A9E40,
      byte_140287F15,
      a3,
      a4,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4);
  }
}
