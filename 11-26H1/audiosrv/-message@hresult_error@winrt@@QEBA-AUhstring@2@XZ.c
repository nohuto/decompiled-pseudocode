/*
 * XREFs of ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x1800EE3D8
 * Callers:
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x1800EC03C (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 * Callees:
 *     SysStringLen_0 @ 0x1800B64A7 (SysStringLen_0.c)
 *     ?close@?$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800EDCF0 (-close@-$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?message_from_hresult@impl@winrt@@YA?AUhstring@2@Uhresult@2@@Z @ 0x1800EE4EC (-message_from_hresult@impl@winrt@@YA-AUhstring@2@Uhresult@2@@Z.c)
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x1800EEC98 (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::hresult_error::message(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int (__fastcall *v5)(__int64, BSTR *, int *, BSTR *, OLECHAR **); // rbx
  UINT v6; // eax
  BSTR v7; // rdx
  OLECHAR *v9[2]; // [rsp+30h] [rbp-10h] BYREF
  int v10; // [rsp+70h] [rbp+30h] BYREF
  BSTR pbstr; // [rsp+80h] [rbp+40h] BYREF
  BSTR v12; // [rsp+88h] [rbp+48h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    goto LABEL_9;
  v10 = 0;
  v12 = 0LL;
  pbstr = 0LL;
  v9[0] = 0LL;
  v5 = *(unsigned int (__fastcall **)(__int64, BSTR *, int *, BSTR *, OLECHAR **))(*(_QWORD *)v2 + 24LL);
  winrt::handle_type<winrt::impl::bstr_traits>::close(v9);
  winrt::handle_type<winrt::impl::bstr_traits>::close(&pbstr);
  winrt::handle_type<winrt::impl::bstr_traits>::close(&v12);
  if ( v5(v2, &v12, &v10, &pbstr, v9) || v10 != *(_DWORD *)(a1 + 12) )
  {
    winrt::handle_type<winrt::impl::bstr_traits>::close(v9);
    winrt::handle_type<winrt::impl::bstr_traits>::close(&pbstr);
    winrt::handle_type<winrt::impl::bstr_traits>::close(&v12);
LABEL_9:
    winrt::impl::message_from_hresult(a2, *(unsigned int *)(a1 + 12));
    return a2;
  }
  if ( pbstr )
  {
    v6 = SysStringLen_0(pbstr);
    v7 = pbstr;
  }
  else
  {
    v6 = SysStringLen_0(v12);
    v7 = v12;
  }
  winrt::impl::trim_hresult_message(a2, v7, v6);
  winrt::handle_type<winrt::impl::bstr_traits>::close(v9);
  winrt::handle_type<winrt::impl::bstr_traits>::close(&pbstr);
  winrt::handle_type<winrt::impl::bstr_traits>::close(&v12);
  return a2;
}
