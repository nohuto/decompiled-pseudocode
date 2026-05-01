/*
 * XREFs of ?UpdateRequestorBestAvailableAppId@PinRequestContext@@AEAAXXZ @ 0x1802A3E88
 * Callers:
 *     ?FromProcessThread@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z @ 0x180186D3C (-FromProcessThread@PinRequestContext@@SA-AV-$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z.c)
 *     ?FromExplicitContext@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1805C19DC (-FromExplicitContext@PinRequestContext@@SA-AV-$shared_ptr@VPinRequestContext@@@std@@PEAXV-$basic.c)
 * Callees:
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800ED02C (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180186F60 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

void __fastcall PinRequestContext::UpdateRequestorBestAvailableAppId(PinRequestContext *this)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int128 v9; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v10[3]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+60h] [rbp-10h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)&v9 = *(_QWORD *)this;
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v1 + 2 * v3) );
    *((_QWORD *)&v9 + 1) = v3;
  }
  else
  {
    v9 = 0uLL;
  }
  v4 = *((_QWORD *)this + 1);
  v10[0] = v9;
  if ( v4 )
  {
    *(_QWORD *)&v9 = v4;
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(v4 + 2 * v5) );
    *((_QWORD *)&v9 + 1) = v5;
  }
  else
  {
    v9 = 0uLL;
  }
  v6 = *((_QWORD *)this + 2);
  v10[1] = v9;
  if ( v6 )
  {
    *(_QWORD *)&v9 = v6;
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(v6 + 2 * v7) );
    *((_QWORD *)&v9 + 1) = v7;
  }
  else
  {
    v9 = 0uLL;
  }
  v8 = (__int64 *)v10;
  v10[2] = v9;
  while ( v8 != &v11 )
  {
    if ( v8[1] )
    {
      wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        &v9,
        *v8,
        -1LL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
        (void **)this + 3,
        (void **)&v9);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v9);
      return;
    }
    v8 += 2;
  }
}
