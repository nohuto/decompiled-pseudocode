/*
 * XREFs of ?GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z @ 0x1800A6DAC
 * Callers:
 *     _lambda_201f500c0b3e8aa9f89acabd232435e5_::operator() @ 0x1800A607C (_lambda_201f500c0b3e8aa9f89acabd232435e5_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEA_W@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029D74 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEA_W@Z$1-SysFreeString@@YAX0@ZU-$integral_const.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029D98 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800A359C (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMe.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@0@PEB_W_K@Z @ 0x1800A5CCC (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX.c)
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x1800A718C (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 *     ?TileIdtoPWSTR@EdgeTileUtils@@YAJKPEAPEA_W@Z @ 0x1800A763C (-TileIdtoPWSTR@EdgeTileUtils@@YAJKPEAPEA_W@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall EdgeTileUtils::GetTileIdforNavigationUrl(const WCHAR *this, const wchar_t *a2, wchar_t **a3)
{
  unsigned int v3; // esi
  HRESULT v4; // eax
  int v5; // ebx
  HRESULT v6; // eax
  const char *v7; // r9
  wchar_t **v8; // r8
  __int64 v9; // rdx
  unsigned __int64 v10; // r9
  int v11; // eax
  IUriBuilder *v12; // rbx
  HRESULT (__stdcall *CreateUriSimple)(IUriBuilder *, DWORD, DWORD_PTR, IUri **); // rdi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rbx
  struct IUriVtbl *lpVtbl; // rax
  int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // r10d
  unsigned __int64 v21; // r8
  unsigned int v22; // r9d
  __int64 v23; // rcx
  void *v25; // [rsp+30h] [rbp-40h] BYREF
  EdgeTileUtils *v26; // [rsp+38h] [rbp-38h] BYREF
  OLECHAR *v27; // [rsp+40h] [rbp-30h] BYREF
  IUri *ppURI; // [rsp+48h] [rbp-28h] BYREF
  char *v29; // [rsp+50h] [rbp-20h] BYREF
  void **v30; // [rsp+58h] [rbp-18h] BYREF
  wchar_t v31[4]; // [rsp+60h] [rbp-10h] BYREF
  char v32; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v34; // [rsp+A8h] [rbp+38h] BYREF
  IUri *v35; // [rsp+B0h] [rbp+40h] BYREF
  IUriBuilder *ppIUriBuilder; // [rsp+B8h] [rbp+48h] BYREF

  v3 = (unsigned int)a2;
  *(_QWORD *)a2 = 0LL;
  ppURI = 0LL;
  v4 = CreateUri(this, 0, 0LL, &ppURI);
  v5 = v4;
  if ( v4 >= 0 )
  {
    ppIUriBuilder = 0LL;
    v6 = CreateIUriBuilder(ppURI, 0, 0LL, &ppIUriBuilder);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA3,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
        (const char *)(unsigned int)v6);
LABEL_5:
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&ppIUriBuilder);
      goto LABEL_41;
    }
    v34 = 0;
    v29 = 0LL;
    v35 = 0LL;
    v5 = ((__int64 (__fastcall *)(IUriBuilder *, unsigned int *, char **))ppIUriBuilder->lpVtbl->GetQuery)(
           ppIUriBuilder,
           &v34,
           &v29);
    if ( v5 == 1 || !v34 )
    {
      v16 = (__int64)v35;
      v35 = ppURI;
      if ( ppURI )
        ((void (__fastcall *)(IUri *))ppURI->lpVtbl->AddRef)(ppURI);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    else
    {
      if ( v5 < 0 )
      {
LABEL_13:
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v35);
        goto LABEL_5;
      }
      v25 = 0LL;
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>(
        &v26,
        v29,
        v34,
        v7);
      if ( !v26 )
      {
        v5 = -2147024882;
        v9 = 179LL;
LABEL_11:
        v10 = (unsigned int)v5;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
          (const char *)v10);
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v26);
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v25);
        goto LABEL_13;
      }
      v30 = &v25;
      *(_QWORD *)v31 = 0LL;
      v32 = 1;
      v5 = EdgeTileUtils::RemoveTelemetryQueryParams(v26, v31, v8);
      wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>((__int64)&v30);
      if ( v5 < 0 )
      {
        v9 = 182LL;
        goto LABEL_11;
      }
      v11 = ((__int64 (__fastcall *)(IUriBuilder *, void *))ppIUriBuilder->lpVtbl->SetQuery)(ppIUriBuilder, v25);
      v5 = v11;
      if ( v11 < 0 )
      {
        v10 = (unsigned int)v11;
        v9 = 184LL;
        goto LABEL_12;
      }
      v12 = ppIUriBuilder;
      CreateUriSimple = ppIUriBuilder->lpVtbl->CreateUriSimple;
      v14 = (__int64)v35;
      v35 = 0LL;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v15 = ((__int64 (__fastcall *)(IUriBuilder *, _QWORD, _QWORD, IUri **))CreateUriSimple)(v12, 0LL, 0LL, &v35);
      v5 = v15;
      if ( v15 < 0 )
      {
        v10 = (unsigned int)v15;
        v9 = 185LL;
        goto LABEL_12;
      }
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v26);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v25);
    }
    v27 = 0LL;
    lpVtbl = v35->lpVtbl;
    v27 = 0LL;
    v18 = ((__int64 (__fastcall *)(IUri *, OLECHAR **))lpVtbl->GetAbsoluteUri)(v35, &v27);
    v5 = v18;
    if ( v18 >= 0 )
    {
      v20 = 997;
      v21 = -1LL;
      do
        ++v21;
      while ( v27[v21] );
      if ( v21 && v27[v21 - 1] == 47 )
        --v21;
      v22 = 0;
      if ( v21 )
      {
        v23 = 0LL;
        do
        {
          v20 = v27[v23] + 31 * v20;
          v23 = ++v22;
        }
        while ( v22 < v21 );
      }
      v18 = EdgeTileUtils::TileIdtoPWSTR((EdgeTileUtils *)v20, v3, (wchar_t **)v21);
      v5 = v18;
      if ( v18 >= 0 )
      {
        wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(wchar_t *),&void SysFreeString(wchar_t *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(wchar_t *),&void SysFreeString(wchar_t *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v27);
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v35);
        wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&ppIUriBuilder);
        v5 = 0;
        goto LABEL_41;
      }
      v19 = 196LL;
    }
    else
    {
      v19 = 194LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
      (const char *)(unsigned int)v18);
    wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(wchar_t *),&void SysFreeString(wchar_t *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(wchar_t *),&void SysFreeString(wchar_t *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(&v27);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA0,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\EdgeTileUtils.h",
    (const char *)(unsigned int)v4);
LABEL_41:
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&ppURI);
  return (unsigned int)v5;
}
