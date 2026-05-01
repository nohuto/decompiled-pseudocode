/*
 * XREFs of ?TaskListTileMoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBGW4PINNEDLISTMODIFYCALLER@@@Z @ 0x180698350
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180692D40 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180011D84 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Provider@TaskbarLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180158838 (-Provider@TaskbarLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180173FA4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x1805E4D68 (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 *     ?CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z @ 0x18068D6F4 (-CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z.c)
 *     ?GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z @ 0x180691A7C (-GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TaskbarPinningTelemetry::PinningActivity::TaskListTileMoved(__int64 a1, unsigned __int16 *a2, int a3)
{
  void **v6; // rax
  const unsigned __int16 *v7; // rcx
  __int64 v8; // rcx
  void **v9; // rax
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r9
  void *v12; // [rsp+40h] [rbp-39h] BYREF
  int v13; // [rsp+48h] [rbp-31h]
  unsigned __int16 *v14; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int16 *v15; // [rsp+58h] [rbp-21h] BYREF
  void *v16; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int16 *v17[2]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v18; // [rsp+78h] [rbp-1h]
  unsigned __int16 *v19[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v20; // [rsp+90h] [rbp+17h]
  unsigned __int16 *v21[2]; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v22; // [rsp+A8h] [rbp+2Fh]

  v21[0] = 0LL;
  v21[1] = 0LL;
  v22 = 0LL;
  v19[0] = 0LL;
  v19[1] = 0LL;
  v20 = 0LL;
  v17[0] = 0LL;
  v17[1] = 0LL;
  v18 = 0LL;
  v12 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v17);
  v17[1] = (unsigned __int16 *)-1LL;
  v18 = -1LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v19);
  v19[1] = (unsigned __int16 *)-1LL;
  v20 = -1LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v21);
  v21[1] = (unsigned __int16 *)-1LL;
  v22 = -1LL;
  if ( (int)TaskbarTelemetryHelper::GetSecondaryTileLaunchArguments(a2, (unsigned __int16 *)v21, v19, v17) < 0 )
  {
    v9 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v12);
    LoggingUtil::AppIdCensorUtility::CensorAppIdBuffer(a2, (unsigned __int16 **)v9);
  }
  else
  {
    v6 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v12);
    LoggingUtil::AppIdCensorUtility::CensorUnescapedUrl(v7, v21[0], (unsigned __int16 **)v6);
  }
  v10 = TaskbarLogging::Provider(v8);
  if ( *(_DWORD *)v10 > 5u && tlgKeywordOn((__int64)v10, 0x200000000000LL) )
  {
    v13 = a3;
    v14 = v17[0];
    v15 = v19[0];
    v16 = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v11,
      (__int64)&unk_180832EF8,
      *(_QWORD *)(a1 + 272) + 8LL,
      v11,
      &v16,
      &v15,
      &v14);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v12);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v17);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v19);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v21);
}
