/*
 * XREFs of ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x180017544
 * Callers:
 *     ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x1800163AC (-Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 *     ?Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ @ 0x180017460 (-Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ.c)
 * Callees:
 *     ?make@?$string_maker@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAAJPEBG_K@Z @ 0x1800023C4 (-make@-$string_maker@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTas.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B750 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEAA@XZ @ 0x180017818 (--1-$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEAA@XZ.c)
 *     ??R?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEBAJPEAG_KPEA_K@Z @ 0x180029358 (--R-$function@$$A6AJPEAG_KPEA_K@Z@wistd@@QEBAJPEAG_KPEA_K@Z.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x180029C68 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18002AFDC (--1last_error_context@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x180030966 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     memset_0 @ 0x180030A1C (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
        char *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  char *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // r12
  _WORD *v11; // rax
  _WORD *v12; // rbx
  size_t v13; // rdi
  void *v14; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  int v19; // eax
  int v20; // r14d
  _WORD *v21; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE *v23; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 *v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  char v26; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE Src[512]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  v21 = 0LL;
  memset_0(Src, 0, sizeof(Src));
  v22 = 0LL;
  v24 = &v22;
  v25 = 256LL;
  v23 = Src;
  v4 = *(_QWORD *)(a2 + 112);
  if ( !v4 )
    __fastfail(7u);
  v5 = (*(__int64 (__fastcall **)(__int64, _BYTE **, __int64 *, unsigned __int64 **))(*(_QWORD *)v4 + 32LL))(
         v4,
         &v23,
         &v25,
         &v24);
  if ( v5 < 0 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v21);
    goto LABEL_24;
  }
  v6 = v22;
  if ( v22 > 0x100 )
  {
    while ( 1 )
    {
      v18 = v6;
      v19 = wil::details::string_maker<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::make((void **)&v21);
      v5 = v19;
      if ( v19 < 0 )
        break;
      v12 = v21;
      v20 = wistd::function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::operator()(a2, v21, v18, &v22);
      if ( v20 < 0 )
      {
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v21);
        v5 = v20;
        goto LABEL_24;
      }
      v6 = v22;
      if ( v22 <= v18 )
        goto LABEL_16;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16D,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
      (const char *)(unsigned int)v19);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v21);
    goto LABEL_24;
  }
  v7 = 0x7FFFFFFFLL;
  v8 = Src;
  if ( v22 - 1 >= 0x7FFFFFFF || (v7 = v22 - 1, v22 != 1) )
  {
    do
    {
      if ( !*(_WORD *)v8 )
        break;
      v8 += 2;
      --v7;
    }
    while ( v7 );
  }
  v9 = (v8 - Src) >> 1;
  v10 = v9;
  if ( v22 )
    v10 = v22 - 1;
  v11 = CoTaskMemAlloc(2 * v10 + 2);
  v12 = v11;
  if ( v11 )
  {
    v13 = 2 * v9;
    if ( v13 )
    {
      if ( 2 * v10 + 2 < v13 )
      {
        memset_0(v11, 0, 2 * v10 + 2);
        *(_DWORD *)_o__errno(v17, v16) = 34;
        invalid_parameter_noinfo();
      }
      else
      {
        memcpy_0(v11, Src, v13);
      }
    }
    v12[v13 / 2] = 0;
    v12[v10] = 0;
  }
  v21 = v12;
  if ( !v12 )
  {
    v5 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x162,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
      (const char *)0x8007000ELL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v21);
LABEL_24:
    wistd::function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::~function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>(a2);
    return (unsigned int)v5;
  }
LABEL_16:
  if ( a1 != &v26 )
  {
    v14 = *(void **)a1;
    if ( *(_QWORD *)a1 )
    {
      wil::last_error_context::last_error_context((wil::last_error_context *)&v23);
      CoTaskMemFree(v14);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v23);
    }
    *(_QWORD *)a1 = v12;
    v12 = 0LL;
  }
  if ( v12 )
    CoTaskMemFree(v12);
  wistd::function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::~function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>(a2);
  return 0LL;
}
