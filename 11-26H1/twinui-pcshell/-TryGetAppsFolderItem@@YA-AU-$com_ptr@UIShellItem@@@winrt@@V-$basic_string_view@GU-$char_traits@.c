/*
 * XREFs of ?TryGetAppsFolderItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x18028D46C
 * Callers:
 *     ?GetPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x18028D25C (-GetPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@G@std.c)
 *     ??R_lambda_cde4a48620a5d22db594fe5feaac6c81_@@QEBA@XZ @ 0x1805E42E8 (--R_lambda_cde4a48620a5d22db594fe5feaac6c81_@@QEBA@XZ.c)
 *     _anonymous_namespace_::IsAppsFolderEntryPresent @ 0x1805E6E7C (_anonymous_namespace_--IsAppsFolderEntryPresent.c)
 *     ?IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z @ 0x1805E6F50 (-IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z.c)
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1805EB290 (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x1805EB83C (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180173FA4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028D400 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?CreateFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBG0PEAPEAG@Z @ 0x1805E53AC (-CreateFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBG0PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall TryGetAppsFolderItem(_QWORD *a1, SecondaryTileIdentifierHelpers **a2, __int64 a3)
{
  SecondaryTileIdentifierHelpers *v5; // rdi
  void **v6; // rax
  unsigned __int16 **v7; // r9
  int FullyQualifiedTileIdentifier; // eax
  void *v9; // rcx
  int ppv; // [rsp+20h] [rbp-30h]
  LPVOID pv[2]; // [rsp+30h] [rbp-20h] BYREF
  void *v13; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  pv[0] = 0LL;
  v5 = *a2;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v6 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(pv);
    FullyQualifiedTileIdentifier = SecondaryTileIdentifierHelpers::CreateFullyQualifiedTileIdentifier(
                                     v5,
                                     *(const unsigned __int16 **)a3,
                                     (const unsigned __int16 *)v6,
                                     v7);
    if ( FullyQualifiedTileIdentifier < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4B,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
        (const char *)(unsigned int)FullyQualifiedTileIdentifier,
        ppv);
    v5 = (SecondaryTileIdentifierHelpers *)pv[0];
  }
  v13 = 0LL;
  if ( SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4000u,
         (PCWSTR)v5,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         &v13) < 0 )
  {
    *a1 = 0LL;
    if ( v13 )
      winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v13);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(pv);
  }
  else
  {
    v9 = v13;
    v13 = 0LL;
    *a1 = v9;
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
  return a1;
}
