/*
 * XREFs of ?_Tokenize@AutoGameProfile@@YAJPEBG0V?$function@$$A6AJPEAGH@Z@std@@@Z @ 0x18067C150
 * Callers:
 *     ?GetGameRelatedFromGcsData@AutoGameProfile@@YAJPEBGKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@Z @ 0x18067BCAC (-GetGameRelatedFromGcsData@AutoGameProfile@@YAJPEBGKPEAKPEAPEAUGMRelatedProcess@KnownGameList@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800F7710 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v14; // esi
  wchar_t *v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 *v19; // rcx
  wchar_t *String; // [rsp+20h] [rbp-20h] BYREF
  wchar_t *Context; // [rsp+28h] [rbp-18h] BYREF
  wchar_t *v22; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v24; // [rsp+88h] [rbp+48h] BYREF

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
    v24 = i;
    v22 = v11;
    v13 = a3[7];
    if ( !v13 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      JUMPOUT(0x18067C2FDLL);
    }
    v14 = (*(__int64 (__fastcall **)(__int64, wchar_t **, int *))(*(_QWORD *)v13 + 16LL))(v13, &v22, &v24);
    if ( v14 < 0 )
      break;
    v15 = wcstok_s(0LL, a2, &Context);
    v11 = v15;
    if ( !v15 || *v15 == 13 || (unsigned __int16)(*v15 - 9) <= 1u || *v15 == 32 )
    {
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&String);
      v17 = (__int64 *)a3[7];
      if ( v17 )
      {
        LOBYTE(v16) = v17 != a3;
        (*(void (__fastcall **)(__int64 *, __int64))(*v17 + 32))(v17, v16);
        a3[7] = 0LL;
      }
      return 0LL;
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&String);
  v19 = (__int64 *)a3[7];
  if ( v19 )
  {
    LOBYTE(v18) = v19 != a3;
    (*(void (__fastcall **)(__int64 *, __int64))(*v19 + 32))(v19, v18);
    a3[7] = 0LL;
  }
  return (unsigned int)v14;
}
