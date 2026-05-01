/*
 * XREFs of _lambda_778e7cadc9522a09bdc10f3336b42b6d_::operator() @ 0x1802DC360
 * Callers:
 *     _lambda_778e7cadc9522a09bdc10f3336b42b6d_::_lambda_invoker_cdecl_ @ 0x1802DBC20 (_lambda_778e7cadc9522a09bdc10f3336b42b6d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@34AEBU?$_tlgWrapSz@G@@@Z @ 0x18018D8B0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U1@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$.c)
 */

ULONG __fastcall lambda_778e7cadc9522a09bdc10f3336b42b6d_::operator()(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG result; // eax
  const wchar_t *v5; // [rsp+50h] [rbp-18h] BYREF
  const wchar_t *v6; // [rsp+58h] [rbp-10h] BYREF
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF
  int v8; // [rsp+80h] [rbp+18h] BYREF
  const WCHAR *v9; // [rsp+88h] [rbp+20h] BYREF

  v7 = a1;
  if ( (unsigned int)dword_180894DC8 > 5 )
  {
    v9 = *(const WCHAR **)(a2 + 24);
    v5 = *(const wchar_t **)(a2 + 48);
    LODWORD(v7) = *(_DWORD *)(a2 + 64);
    v6 = *(const wchar_t **)(a2 + 56);
    v8 = *(_DWORD *)(a2 + 8);
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
             a1,
             byte_1807B5E17,
             a3,
             a4,
             (__int64)&v8,
             &v6,
             (__int64)&v7,
             &v5,
             &v9);
  }
  return result;
}
