/*
 * XREFs of ?_Tokenize@AutoGameProfile@@YAJPEBG0V?$function@$$A6AJPEAGH@Z@std@@@Z @ 0x180656120
 * Callers:
 *     ?GetGameRelatedFromGcsData@AutoGameProfile@@YAJPEBGKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x180655C64 (-GetGameRelatedFromGcsData@AutoGameProfile@@YAJPEBGKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800ED100 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800EDA04 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AutoGameProfile::_Tokenize(char *a1, const wchar_t *a2, __int64 *a3, const char *a4)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rdx
  wchar_t *v11; // rcx
  int i; // edi
  __int64 v13; // rcx
  int v14; // r14d
  wchar_t *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 *v20; // rcx
  wchar_t *String; // [rsp+20h] [rbp-20h] BYREF
  wchar_t *Context; // [rsp+28h] [rbp-18h] BYREF
  wchar_t *v23; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v25; // [rsp+78h] [rbp+38h] BYREF

  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &String,
    a1,
    0xFFFFFFFFFFFFFFFFuLL,
    a4);
  if ( !String )
  {
    v6 = -2147024882;
    v7 = 287LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
      (const char *)v6);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&String);
    v8 = (__int64 *)a3[7];
    if ( v8 )
    {
      v9 = *v8;
      LOBYTE(v9) = v8 != a3;
      (*(void (__fastcall **)(__int64 *, __int64))(*v8 + 32))(v8, v9);
      a3[7] = 0LL;
    }
    return v6;
  }
  Context = 0LL;
  v11 = wcstok_s(String, a2, &Context);
  if ( !v11 )
  {
    v6 = -2147024809;
    v7 = 291LL;
    goto LABEL_3;
  }
  for ( i = 0; ; ++i )
  {
    v25 = i;
    v23 = v11;
    v13 = a3[7];
    if ( !v13 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      JUMPOUT(0x1806562BFLL);
    }
    v14 = (*(__int64 (__fastcall **)(__int64, wchar_t **, int *))(*(_QWORD *)v13 + 16LL))(v13, &v23, &v25);
    if ( v14 < 0 )
      break;
    v15 = wcstok_s(0LL, a2, &Context);
    v11 = v15;
    if ( v15 )
    {
      if ( *v15 > 0x20u )
        continue;
      v16 = 0x100002600LL;
      if ( !_bittest64(&v16, *v15) )
        continue;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&String);
    v18 = (__int64 *)a3[7];
    if ( v18 )
    {
      LOBYTE(v17) = v18 != a3;
      (*(void (__fastcall **)(__int64 *, __int64))(*v18 + 32))(v18, v17);
      a3[7] = 0LL;
    }
    return 0LL;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&String);
  v20 = (__int64 *)a3[7];
  if ( v20 )
  {
    LOBYTE(v19) = v20 != a3;
    (*(void (__fastcall **)(__int64 *, __int64))(*v20 + 32))(v20, v19);
    a3[7] = 0LL;
  }
  return (unsigned int)v14;
}
