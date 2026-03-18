/*
 * XREFs of ?InputSpace@InputConfig@InputTraceLogging@@SAXPEBUINPUT_SPACE@@K_N@Z @ 0x14012FED4
 * Callers:
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x14012F720 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x140006508 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::InputConfig::InputSpace(const struct INPUT_SPACE *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // r10d
  int v4; // [rsp+40h] [rbp-18h] BYREF
  int v5; // [rsp+44h] [rbp-14h] BYREF
  __int64 v6; // [rsp+48h] [rbp-10h] BYREF
  int v7; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14029EE20 > 4 && tlgKeywordOn((__int64)&dword_14029EE20, 2LL) )
  {
    v7 = (unsigned __int8)v1;
    v5 = *(_DWORD *)(v2 + 8);
    v6 = *(_QWORD *)v2;
    v4 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_14029EE20,
      (__int64)&unk_14027DD54,
      v1,
      v2,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v7);
  }
}
