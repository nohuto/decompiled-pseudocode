/*
 * XREFs of _lambda_12a8d4b7a083759ff6855c9f6f13c46f_::operator() @ 0x18039A630
 * Callers:
 *     wistd::__function::__func__lambda_12a8d4b7a083759ff6855c9f6f13c46f__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x18039A7A0 (wistd--__function--__func__lambda_12a8d4b7a083759ff6855c9f6f13c46f__void___cdecl(enum_wil--Regis.c)
 * Callees:
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18018685C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

__int64 __fastcall lambda_12a8d4b7a083759ff6855c9f6f13c46f_::operator()(volatile int **a1, int a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v8; // [rsp+40h] [rbp+8h] BYREF
  const WCHAR *v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = SingleViewExperienceLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v8 = a2;
    v9 = L"PrintScreenKeyForSnippingEnabled";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (__int64)v4,
      byte_1807F8EA0,
      v5,
      v6,
      &v9,
      (__int64)&v8);
  }
  return CreationThreadDispatcher::RunAsync__lambda_a0e783bce093889fe72b74f8295df253___(*((_QWORD *)*a1 + 38), *a1);
}
