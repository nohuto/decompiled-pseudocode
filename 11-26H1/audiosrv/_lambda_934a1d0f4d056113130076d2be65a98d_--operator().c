/*
 * XREFs of _lambda_934a1d0f4d056113130076d2be65a98d_::operator() @ 0x1800FA070
 * Callers:
 *     wil::details::lambda_call__lambda_934a1d0f4d056113130076d2be65a98d___::_lambda_call__lambda_934a1d0f4d056113130076d2be65a98d___ @ 0x1800F994C (wil--details--lambda_call__lambda_934a1d0f4d056113130076d2be65a98d___--_lambda_call__lambda_934a.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180069780 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

char __fastcall lambda_934a1d0f4d056113130076d2be65a98d_::operator()(__int64 a1)
{
  struct AudioSrvTelemetryProvider *v2; // rax
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v6[3]; // [rsp+40h] [rbp-18h] BYREF
  int v7; // [rsp+68h] [rbp+10h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  v2 = AudioSrvTelemetryProvider::Instance();
  if ( **((_DWORD **)v2 + 1) > 4u )
  {
    LOBYTE(v2) = tlgKeywordOn(*((_QWORD *)v2 + 1), 512LL);
    if ( (_BYTE)v2 )
    {
      v4 = *(_QWORD *)a1;
      v7 = **(_DWORD **)(a1 + 16);
      v8 = *(_QWORD *)(v4 + 32);
      v9 = **(_QWORD **)(a1 + 8);
      v6[0] = v4;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                     v3,
                     byte_1801A603C,
                     v4,
                     v3,
                     (__int64)v6,
                     (__int64)&v9,
                     (__int64)&v8,
                     (__int64)&v7);
    }
  }
  return (char)v2;
}
