/*
 * XREFs of ?NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z @ 0x180079F20
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@@Z@std@@@Z @ 0x18001D138 (-ForEachEndpoint@CEndpointStoreCache@@QEAAJ$$QEAV-$function@$$A6AJAEAV-$com_ptr_t@VCEndpointStor.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _lambda_5d34934f89fc3a58b6c7991e423b18e6_::_lambda_5d34934f89fc3a58b6c7991e423b18e6_ @ 0x1800C02B4 (_lambda_5d34934f89fc3a58b6c7991e423b18e6_--_lambda_5d34934f89fc3a58b6c7991e423b18e6_.c)
 *     std::function_long___cdecl(wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&)_::function_long___cdecl(wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&)___lambda_4c2c1a0f134a833da506390f8b114047__0_ @ 0x18011AC64 (std--function_long___cdecl(wil--com_ptr_t_CEndpointStore_wil--err_returncode_policy__-)_--functi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVolumeProvider::NotifyNewAudioProtocol(CVolumeProvider *this, int a2, int a3)
{
  __int64 v3; // rax
  void *v4; // rcx
  _BYTE *v5; // rdx
  __int64 v6; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v7[56]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE *v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+98h] [rbp+10h] BYREF
  int v10; // [rsp+A0h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a2;
  v3 = lambda_5d34934f89fc3a58b6c7991e423b18e6_::_lambda_5d34934f89fc3a58b6c7991e423b18e6_(&v6, &v9, &v10);
  std::function_long___cdecl_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy_____::function_long___cdecl_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy_______lambda_4c2c1a0f134a833da506390f8b114047__0_(
    v7,
    v3);
  CEndpointStoreCache::ForEachEndpoint(v4, (__int64)v7);
  if ( v8 )
  {
    v5 = v7;
    LOBYTE(v5) = v8 != v7;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v8 + 32LL))(v8, v5);
  }
}
