/*
 * XREFs of ??$JumpViewDidntOpenInSpecifiedTime@K@JumpViewProvider@@SAX$$QEAK@Z @ 0x18038BF50
 * Callers:
 *     _lambda_055d3ca9173c3810bb1268cfe695d4b8_::_lambda_invoker_cdecl_ @ 0x18038BDC0 (_lambda_055d3ca9173c3810bb1268cfe695d4b8_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800B6908 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@JumpViewProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1802982A4 (-Provider@JumpViewProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall JumpViewProvider::JumpViewDidntOpenInSpecifiedTime<unsigned long>(int *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = JumpViewProvider::Provider((__int64)a1);
  if ( *(_DWORD *)v2 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v2, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v5 = *a1;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
                     v3,
                     byte_1807F6265,
                     0LL,
                     v3,
                     (__int64)&v5);
    }
  }
  return (char)v2;
}
