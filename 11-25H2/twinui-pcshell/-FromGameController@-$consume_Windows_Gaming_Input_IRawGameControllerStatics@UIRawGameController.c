/*
 * XREFs of ?FromGameController@?$consume_Windows_Gaming_Input_IRawGameControllerStatics@UIRawGameControllerStatics@Input@Gaming@Windows@winrt@@@impl@winrt@@QEBA@AEBUIGameController@Input@Gaming@Windows@3@@Z @ 0x180344264
 * Callers:
 *     ??R_lambda_825b5c2f3834d6ddb55fa03d184e4233_@@QEBA@AEBUIRawGameControllerStatics@Input@Gaming@Windows@winrt@@@Z @ 0x1803420E8 (--R_lambda_825b5c2f3834d6ddb55fa03d184e4233_@@QEBA@AEBUIRawGameControllerStatics@Input@Gaming@Wi.c)
 *     _anonymous_namespace_::CreateConsentToastXmlDocument @ 0x1805CA7C8 (_anonymous_namespace_--CreateConsentToastXmlDocument.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Gaming_Input_IRawGameControllerStatics<winrt::Windows::Gaming::Input::IRawGameControllerStatics>::FromGameController(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 *v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  _QWORD *result; // rax
  int v9; // [rsp+24h] [rbp-34h] BYREF
  int v10; // [rsp+28h] [rbp-30h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  _QWORD *v12; // [rsp+40h] [rbp-18h] BYREF

  v12 = a2;
  v3 = *a1;
  v12 = 0LL;
  v10 = 0;
  v5 = *v3;
  v6 = *a3;
  v11 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD **))(v5 + 88))(v3, v6, &v12);
  winrt::check_hresult(&v9, v7, (__int64)&v10);
  result = a2;
  *a2 = v12;
  return result;
}
