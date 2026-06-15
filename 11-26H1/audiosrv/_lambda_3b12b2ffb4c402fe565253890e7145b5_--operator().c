/*
 * XREFs of _lambda_3b12b2ffb4c402fe565253890e7145b5_::operator() @ 0x1800C45EC
 * Callers:
 *     wil::details::lambda_call__lambda_3b12b2ffb4c402fe565253890e7145b5___::_lambda_call__lambda_3b12b2ffb4c402fe565253890e7145b5___ @ 0x1800C42F8 (wil--details--lambda_call__lambda_3b12b2ffb4c402fe565253890e7145b5___--_lambda_call__lambda_3b12.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180002864 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempl.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 */

struct AudioSrvTelemetryProvider *__fastcall lambda_3b12b2ffb4c402fe565253890e7145b5_::operator()(__int64 a1)
{
  struct AudioSrvTelemetryProvider *result; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  _DWORD *v5; // rcx
  char *v6; // rax
  char v7; // dl
  const wchar_t **v8; // rax
  const wchar_t *v9; // rdx
  const wchar_t **v10; // rax
  const wchar_t *v11; // [rsp+40h] [rbp-18h] BYREF
  char v12; // [rsp+68h] [rbp+10h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  const wchar_t *v14; // [rsp+78h] [rbp+20h] BYREF

  result = AudioSrvTelemetryProvider::Instance();
  v5 = (_DWORD *)*((_QWORD *)result + 1);
  if ( *v5 > 4u )
  {
    v6 = *(char **)(a1 + 16);
    v13 = **(_DWORD **)(a1 + 24);
    v7 = *v6;
    v8 = *(const wchar_t ***)(a1 + 8);
    v12 = v7;
    v9 = *v8;
    v10 = *(const wchar_t ***)a1;
    v14 = v9;
    v11 = *v10;
    return (struct AudioSrvTelemetryProvider *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
                                                 (int)v5,
                                                 (int)&unk_1801A36EE,
                                                 v3,
                                                 v4,
                                                 &v11,
                                                 &v14,
                                                 (__int64)&v12,
                                                 (__int64)&v13);
  }
  return result;
}
