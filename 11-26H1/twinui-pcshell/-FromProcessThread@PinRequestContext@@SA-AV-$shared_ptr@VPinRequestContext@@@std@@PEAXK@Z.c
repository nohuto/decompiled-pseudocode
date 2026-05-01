/*
 * XREFs of ?FromProcessThread@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z @ 0x18017B93C
 * Callers:
 *     ?GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@AEBUhstring@6@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@Z @ 0x18028F740 (-GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$tuple@V-$.c)
 * Callees:
 *     ??$QueryFullProcessImageNameW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJPEAXKAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x1800F7838 (--$QueryFullProcessImageNameW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017BAF4 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??0AgileRef@WRL@Microsoft@@QEAA@XZ @ 0x1801CC120 (--0AgileRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$RequestContextCreatedFromProcessThread@KAEAKPEBGPEBGPEBGPEBG@PinManagerTelemetry@@SAX$$QEAKAEAK$$QEAPEBG222@Z @ 0x18028456C (--$RequestContextCreatedFromProcessThread@KAEAKPEBGPEBGPEBGPEBG@PinManagerTelemetry@@SAX$$QEAKAE.c)
 *     ?UpdateRequestorBestAvailableAppId@PinRequestContext@@AEAAXXZ @ 0x1802AB020 (-UpdateRequestorBestAvailableAppId@PinRequestContext@@AEAAXXZ.c)
 *     ??$make_shared@VPinRequestContext@@$$V@std@@YA?AV?$shared_ptr@VPinRequestContext@@@0@XZ @ 0x1802BE448 (--$make_shared@VPinRequestContext@@$$V@std@@YA-AV-$shared_ptr@VPinRequestContext@@@0@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?TryGetProcessPackageAppId@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1805EB678 (-TryGetProcessPackageAppId@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEA.c)
 *     ?TryGetProcessWeakAppId@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1805EB7CC (-TryGetProcessWeakAppId@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
PinRequestContext **__fastcall PinRequestContext::FromProcessThread(PinRequestContext **a1, void *a2, int a3)
{
  __int64 ProcessPackageAppId; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 ProcessWeakAppId; // rax
  PinRequestContext *v9; // r8
  LPVOID pv; // [rsp+30h] [rbp-40h] BYREF
  void *v12; // [rsp+38h] [rbp-38h] BYREF
  int v13; // [rsp+40h] [rbp-30h]
  __int64 v14; // [rsp+48h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h] BYREF
  int v17; // [rsp+60h] [rbp-10h] BYREF

  v14 = (__int64)a1;
  v17 = a3;
  *(_OWORD *)a1 = 0LL;
  std::make_shared<PinRequestContext,>();
  v13 = 1;
  v12 = 0LL;
  if ( (int)wil::QueryFullProcessImageNameW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>((__int64)a2) < 0 )
  {
    pv = 0LL;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v12);
  }
  else
  {
    pv = v12;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
    (char *)*a1 + 32,
    &pv);
  if ( pv )
    CoTaskMemFree(pv);
  ProcessPackageAppId = TryGetProcessPackageAppId(&pv, a2);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
    *a1,
    ProcessPackageAppId);
  if ( pv )
    CoTaskMemFree(pv);
  if ( !*(_QWORD *)*a1 )
  {
    v6 = Microsoft::WRL::AgileRef::AgileRef((Microsoft::WRL::AgileRef *)&pv);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      v7 + 8,
      v6);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
    ProcessWeakAppId = TryGetProcessWeakAppId(&pv, a2);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      (char *)*a1 + 16,
      ProcessWeakAppId);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
  }
  PinRequestContext::UpdateRequestorBestAvailableAppId(*a1);
  v9 = *a1;
  pv = (LPVOID)(*((_QWORD *)*a1 + 1) & -(__int64)(*((_QWORD *)*a1 + 1) != 0LL));
  v15 = *((_QWORD *)v9 + 2) & -(__int64)(*((_QWORD *)v9 + 2) != 0LL);
  v16 = *(_QWORD *)v9 & ((unsigned __int128)-(__int128)*(unsigned __int64 *)v9 >> 64);
  v14 = *((_QWORD *)v9 + 4) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)v9 + 4) >> 64);
  LODWORD(v12) = GetProcessId(a2);
  PinManagerTelemetry::RequestContextCreatedFromProcessThread<unsigned long,unsigned long &,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *>(
    (unsigned int)&v12,
    (unsigned int)&v17,
    (unsigned int)&v14,
    (unsigned int)&v16,
    (__int64)&v15,
    (__int64)&pv);
  return a1;
}
