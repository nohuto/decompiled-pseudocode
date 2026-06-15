/*
 * XREFs of ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x1800163AC
 * Callers:
 *     ?CreateInstance@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180016344 (-CreateInstance@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@SA-AV-$unique_p.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B750 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ @ 0x180017354 (-GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ.c)
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x180017544 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AX.c)
 *     ?replace@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAAX$$QEAV123@@Z @ 0x18001795C (-replace@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_c.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::Initialize(LPVOID *this)
{
  int v2; // eax
  void *v4; // rdi
  const wchar_t *v5; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v6[8]; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v7[16]; // [rsp+30h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  LPVOID pv; // [rsp+C8h] [rbp+6Fh] BYREF
  void *v10; // [rsp+D0h] [rbp+77h] BYREF
  const wchar_t *v11; // [rsp+D8h] [rbp+7Fh] BYREF

  v10 = 0LL;
  v5 = L"AssignedAccessConfiguration";
  v11 = L"SOFTWARE\\Microsoft\\Windows\\AssignedAccessConfiguration";
  pv = 0LL;
  v7[0] = &wistd::__function::__func<_lambda_6166c63e326ec22a386edc375e0b06c9_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vftable';
  v7[1] = &v11;
  v7[2] = &v5;
  v7[13] = v7;
  v2 = wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
         &pv,
         v6);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (int)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\persistentlocationhelper.h",
      (const char *)(unsigned int)v2);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v10);
    return 0;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::replace(
    &v10,
    &pv);
  if ( pv )
    CoTaskMemFree(pv);
  v4 = v10;
  if ( !v10 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v10);
    return 0;
  }
  if ( *this )
    CoTaskMemFree(*this);
  *this = v4;
  this[2] = (LPVOID)-1LL;
  this[1] = (LPVOID)-1LL;
  *((_DWORD *)this + 6) = Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::GetStoreVersion((Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *)this);
  return 1;
}
