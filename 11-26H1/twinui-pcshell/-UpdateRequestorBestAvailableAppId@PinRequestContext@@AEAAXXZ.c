/*
 * XREFs of ?UpdateRequestorBestAvailableAppId@PinRequestContext@@AEAAXXZ @ 0x1802AB020
 * Callers:
 *     ?FromProcessThread@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z @ 0x18017B93C (-FromProcessThread@PinRequestContext@@SA-AV-$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z.c)
 *     ?FromExplicitContext@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1805E5B28 (-FromExplicitContext@PinRequestContext@@SA-AV-$shared_ptr@VPinRequestContext@@@std@@PEAXV-$basic.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800F7638 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017BAF4 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 */

void __fastcall PinRequestContext::UpdateRequestorBestAvailableAppId(PinRequestContext *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rdx
  void *v12; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v13[6]; // [rsp+28h] [rbp-40h] BYREF
  char v14; // [rsp+58h] [rbp-10h] BYREF

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    v3 = std::_WChar_traits<wchar_t>::length(v2);
  }
  else
  {
    v3 = 0LL;
    v4 = 0LL;
  }
  v13[0] = v4;
  v5 = *((_QWORD *)this + 1);
  v13[1] = v3;
  if ( v5 )
  {
    v6 = std::_WChar_traits<wchar_t>::length(v5);
  }
  else
  {
    v6 = 0LL;
    v7 = 0LL;
  }
  v13[2] = v7;
  v8 = *((_QWORD *)this + 2);
  v13[3] = v6;
  if ( v8 )
  {
    v9 = std::_WChar_traits<wchar_t>::length(v8);
  }
  else
  {
    v9 = 0LL;
    v10 = 0LL;
  }
  v13[4] = v10;
  v11 = v13;
  v13[5] = v9;
  while ( v11 != (__int64 *)&v14 )
  {
    if ( v11[1] )
    {
      wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        &v12,
        *v11,
        -1LL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
        (void **)this + 3,
        &v12);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v12);
      return;
    }
    v11 += 2;
  }
}
