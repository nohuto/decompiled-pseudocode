/*
 * XREFs of GetStoredEnterprisePinGeneration @ 0x18066BBDC
 * Callers:
 *     ShouldAddEnterprisePinToOutput @ 0x180670224 (ShouldAddEnterprisePinToOutput.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?SystemFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A8B34 (-SystemFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1801CCBE4 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ??D?$fast_iterator@UJsonArray@Json@Data@Windows@winrt@@@impl@winrt@@QEBA?AUIJsonValue@Json@Data@Windows@2@XZ @ 0x180220BE8 (--D-$fast_iterator@UJsonArray@Json@Data@Windows@winrt@@@impl@winrt@@QEBA-AUIJsonValue@Json@Data@.c)
 *     ?GetNamedString@?$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x180242E00 (-GetNamedString@-$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@W.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@XZ @ 0x1802BCFC0 (-Size@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJso.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?GetNamedNumber@?$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@N@Z @ 0x180669A04 (-GetNamedNumber@-$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetStoredEnterprisePinGeneration(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, void *, __int64 *),
        char *a3)
{
  int v5; // edi
  int v6; // esi
  int v7; // eax
  int NamedNumber; // eax
  __int64 (__fastcall ***v10)(_QWORD, void *, __int64 *); // [rsp+20h] [rbp-69h] BYREF
  int v11; // [rsp+28h] [rbp-61h] BYREF
  __int64 (__fastcall ****v12)(_QWORD, void *, __int64 *); // [rsp+30h] [rbp-59h] BYREF
  int v13; // [rsp+38h] [rbp-51h]
  __int64 v14; // [rsp+40h] [rbp-49h] BYREF
  __int128 v15; // [rsp+48h] [rbp-41h]
  _QWORD v16[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD v17[4]; // [rsp+80h] [rbp-9h] BYREF
  int v18; // [rsp+A0h] [rbp+17h] BYREF
  __int64 *v19; // [rsp+A8h] [rbp+1Fh] BYREF
  volatile signed __int32 *v20; // [rsp+B0h] [rbp+27h] BYREF

  v12 = a2;
  v5 = 0;
  v13 = 0;
  v6 = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonValue>::Size(a2);
  while ( v5 != v6 )
  {
    winrt::impl::fast_iterator<winrt::Windows::Data::Json::JsonArray>::operator*((__int64)&v12, (__int64)&v19);
    v18 = 0;
    LODWORD(v14) = 0;
    v15 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v19 + 48))(v19, &v18);
    winrt::check_hresult(&v11, v7, (__int64)&v14);
    if ( v18 == 5 )
    {
      winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
        &v19,
        &v10);
      winrt::param::hstring::hstring((winrt::param::hstring *)&v14, &LocaleName);
      winrt::param::hstring::hstring((winrt::param::hstring *)v16, L"appId");
      winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedString(
        &v10,
        &v20,
        v16,
        &v14);
      if ( winrt::operator==((__int64 *)&v20, a3) )
      {
        winrt::param::hstring::hstring((winrt::param::hstring *)v17, L"pinGeneration");
        NamedNumber = (int)winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedNumber(
                             &v10,
                             v17);
        if ( NamedNumber > -1 )
        {
          *(_DWORD *)a1 = NamedNumber;
          *(_BYTE *)(a1 + 4) = 1;
          winrt::handle_type<winrt::impl::hstring_traits>::close(&v20);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
          return a1;
        }
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v20);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
    v13 = ++v5;
  }
  *(_BYTE *)(a1 + 4) = 0;
  return a1;
}
