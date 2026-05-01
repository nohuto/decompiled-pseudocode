/*
 * XREFs of ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x1803FD368
 * Callers:
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x1803FCC40 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C1DD0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800F7638 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18017BAF4 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18027C6DC (-GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$FailedToRetreiveAppIdInfo@J@TaskFlowDataEngineTelemetry@@SAX$$QEAJ@Z @ 0x1803FAE28 (--$FailedToRetreiveAppIdInfo@J@TaskFlowDataEngineTelemetry@@SAX$$QEAJ@Z.c)
 *     ?DetermineAppIdKind@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AW4AppIdKind@Activities@Data@56@PEBG@Z @ 0x1803FB96C (-DetermineAppIdKind@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AW4AppIdKin.c)
 *     ?EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z @ 0x1803FBA14 (-EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z.c)
 *     _alloca_probe @ 0x1806CCB80 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryGetAppIdInfoForApplicationView(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        DWORD a4)
{
  int v6; // edi
  __int64 v7; // rcx
  char *v8; // rbx
  unsigned __int16 **v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // r9d
  signed int LastError; // eax
  const WCHAR *v15; // [rsp+20h] [rbp-E0h] BYREF
  void *v16; // [rsp+28h] [rbp-D8h] BYREF
  DWORD dwSize; // [rsp+30h] [rbp-D0h] BYREF
  void *v18; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR ExeName[264]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v20[2088]; // [rsp+250h] [rbp+150h] BYREF

  v15 = 0LL;
  v6 = -1;
  if ( (*(int (__fastcall **)(__int64, const WCHAR **))(*(_QWORD *)a3 + 136LL))(a3, &v15) < 0 )
  {
    if ( !a4 )
      goto LABEL_13;
    v8 = (char *)OpenProcess(0x1000u, 0, a4);
    v18 = v8;
    if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( (int)CallerIdentity::GetProcessAppIdWithAppResolverFallback(v8, &v15, v9) >= 0 )
      {
        v6 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::DetermineAppIdKind(v10, v15);
LABEL_12:
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v18);
        goto LABEL_13;
      }
      dwSize = 260;
      memset_0(ExeName, 0, 0x208uLL);
      if ( QueryFullProcessImageNameW(v8, 0, ExeName, &dwSize) )
      {
        memset_0(v20, 0, 0x1048uLL);
        EncodeCommonRelativePath(v20, v11, ExeName, v12);
        wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
          &v16,
          (__int64)v20,
          -1LL);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
          (void **)&v15,
          &v16);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v16);
        v6 = 2;
        goto LABEL_12;
      }
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    LODWORD(v16) = LastError;
    TaskFlowDataEngineTelemetry::FailedToRetreiveAppIdInfo<long>((int *)&v16);
    goto LABEL_12;
  }
  v6 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::DetermineAppIdKind(v7, v15);
LABEL_13:
  *(_DWORD *)a2 = v6;
  *(_QWORD *)(a2 + 8) = v15;
  v15 = 0LL;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v15);
  return a2;
}
