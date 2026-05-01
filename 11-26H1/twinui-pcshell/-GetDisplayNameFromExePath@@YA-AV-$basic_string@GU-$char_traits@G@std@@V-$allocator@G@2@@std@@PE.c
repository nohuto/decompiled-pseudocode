/*
 * XREFs of ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180576B90
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180574E40 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013D314 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180173FA4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??1AppInventoryData@@QEAA@XZ @ 0x1805767C4 (--1AppInventoryData@@QEAA@XZ.c)
 *     ?GetAppInventoryData@@YA?AUAppInventoryData@@PEBG@Z @ 0x180576ACC (-GetAppInventoryData@@YA-AUAppInventoryData@@PEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
_OWORD *__fastcall GetDisplayNameFromExePath(_OWORD *a1, LPCWSTR pszPath)
{
  int (__fastcall *v4)(LPVOID, LPCWSTR, __int64 *, _QWORD); // rdi
  __int64 v5; // rbx
  int (__fastcall *v6)(__int64, _QWORD, void **); // rdi
  void **v7; // rax
  __int64 v8; // r8
  __int64 v9; // r8
  LPWSTR FileNameW; // rax
  __int64 v12; // [rsp+30h] [rbp-69h] BYREF
  int v13; // [rsp+38h] [rbp-61h]
  void *Src; // [rsp+40h] [rbp-59h] BYREF
  LPVOID ppv[3]; // [rsp+48h] [rbp-51h] BYREF
  char v16[64]; // [rsp+60h] [rbp-39h] BYREF
  char v17[32]; // [rsp+A0h] [rbp+7h] BYREF

  ppv[1] = a1;
  *a1 = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 7LL;
  *(_WORD *)a1 = 0;
  v13 = 1;
  v12 = 0LL;
  ppv[0] = 0LL;
  if ( CoCreateInstance(&CLSID_StartMenuCacheAndAppResolver, 0LL, 3u, &GUID_21cbc515_2dde_4d66_8292_ba34bd25094a, ppv) >= 0 )
  {
    v4 = *(int (__fastcall **)(LPVOID, LPCWSTR, __int64 *, _QWORD))(*(_QWORD *)ppv[0] + 72LL);
    v12 = 0LL;
    if ( v4(ppv[0], pszPath, &v12, 0LL) >= 0 )
    {
      Src = 0LL;
      v5 = v12;
      v6 = *(int (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v12 + 40LL);
      v7 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&Src);
      if ( v6(v5, 0LL, v7) >= 0 )
        std::wstring::operator=((char *)a1, Src);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&Src);
    }
  }
  if ( !*((_QWORD *)a1 + 2) )
  {
    GetAppInventoryData(v16, (__int64)pszPath);
    std::wstring::operator=((char *)a1, v17, v8);
    if ( !*((_QWORD *)a1 + 2) )
      std::wstring::operator=((char *)a1, v16, v9);
    AppInventoryData::~AppInventoryData((AppInventoryData *)v16);
    if ( !*((_QWORD *)a1 + 2) )
    {
      FileNameW = PathFindFileNameW(pszPath);
      std::wstring::operator=((char *)a1, FileNameW);
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)ppv);
  return a1;
}
