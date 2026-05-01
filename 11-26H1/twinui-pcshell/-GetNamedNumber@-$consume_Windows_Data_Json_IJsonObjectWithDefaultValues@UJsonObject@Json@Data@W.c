/*
 * XREFs of ?GetNamedNumber@?$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@N@Z @ 0x180690294
 * Callers:
 *     GetStoredEnterprisePinGeneration @ 0x18069248C (GetStoredEnterprisePinGeneration.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
double __fastcall winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedNumber(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, __int64 *); // rcx
  int v4; // eax
  __int64 v5; // rbx
  __int64 v6; // r8
  int v7; // eax
  __int64 v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+38h] [rbp-48h] BYREF
  int v11; // [rsp+40h] [rbp-40h] BYREF
  __int128 v12; // [rsp+48h] [rbp-38h]
  double v13; // [rsp+58h] [rbp-28h] BYREF

  v13 = 0.0;
  v3 = *a1;
  if ( v3 )
  {
    v9 = 0LL;
    v4 = (**v3)(v3, &winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonObjectWithDefaultValues>, &v9);
    v5 = v9;
    v10 = v9;
  }
  else
  {
    v4 = 0;
    v10 = 0LL;
    v5 = 0LL;
  }
  v11 = 0;
  v12 = 0LL;
  winrt::check_hresult((int *)&v9, v4, (__int64)&v11);
  v11 = 0;
  v12 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, double *))(*(_QWORD *)v5 + 80LL))(v5, *a2, v6, &v13);
  winrt::check_hresult((int *)&v9, v7, (__int64)&v11);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  return v13;
}
