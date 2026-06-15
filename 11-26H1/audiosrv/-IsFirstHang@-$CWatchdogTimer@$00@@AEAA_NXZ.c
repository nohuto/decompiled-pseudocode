/*
 * XREFs of ?IsFirstHang@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800BC4A4
 * Callers:
 *     ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x1800BC66C (-OnTimer@-$CWatchdogTimer@$00@@AEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180077610 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE_ea_180077610.c)
 */

bool __fastcall CWatchdogTimer<1>::IsFirstHang(__int64 a1)
{
  signed __int32 v1; // ebx
  _DWORD *v2; // rcx
  signed __int32 v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  signed __int32 v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = _InterlockedExchangeAdd(&`CWatchdogTimer<1>::IsFirstHang'::`2'::hangsCaught, 1u);
  v2 = *(_DWORD **)(a1 + 8);
  v3 = v1 + 1;
  if ( *v2 > 5u && tlgKeywordOn((__int64)v2, 1LL) )
  {
    v8 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v4,
      byte_1801A2587,
      v5,
      v6,
      (__int64)&v8);
  }
  return v3 == 1;
}
