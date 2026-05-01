/*
 * XREFs of ?ReverseAppToAppSwitch_@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@W4AppCloseMethod@@@Z @ 0x18051A540
 * Callers:
 *     ??$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeTelemetry@@SAX$$QEAPEAUIAppLayout@@AEAPEAUIApplicationView@@$$QEAW4AppCloseMethod@@@Z @ 0x180515050 (--$ReverseAppToAppSwitch@PEAUIAppLayout@@AEAPEAUIApplicationView@@W4AppCloseMethod@@@TabletModeT.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x18000BF08 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTempl.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18007B218 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?CensorAppID@MultitaskingViewTelemetry@@SAPEBGPEBG@Z @ 0x1804C5460 (-CensorAppID@MultitaskingViewTelemetry@@SAPEBGPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModeTelemetry::ReverseAppToAppSwitch_(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v5)(__int64, __int64, __int64 *, _QWORD); // rbx
  void (__fastcall *v6)(__int64, LPCWSTR *); // rbx
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rbx
  const WCHAR *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  const unsigned __int16 *v15; // [rsp+48h] [rbp-28h] BYREF
  LPCWSTR pszPath; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h]
  __int64 v18; // [rsp+60h] [rbp-10h]

  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 80LL))(a2, 1LL);
  v14 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(*(_QWORD *)a2 + 152LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  v5(a2, a3, &v14, 0LL);
  pszPath = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v6 = *(void (__fastcall **)(__int64, LPCWSTR *))(*(_QWORD *)a3 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  v17 = -1LL;
  v18 = -1LL;
  v6(a3, &pszPath);
  v8 = WindowManagementLogging::Provider(v7);
  v9 = (__int64)v8;
  if ( *(_DWORD *)v8 > 5u && tlgKeywordOn((__int64)v8, 0x200000000000LL) )
  {
    v10 = &pvData;
    if ( pszPath )
      v10 = pszPath;
    v15 = MultitaskingViewTelemetry::CensorAppID(v10);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      (__int64)&unk_18081A585,
      v11,
      v12,
      &v15);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszPath);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
}
