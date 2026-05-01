/*
 * XREFs of ?GetNamedString@?$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x18013C428
 * Callers:
 *     _anonymous_namespace_::JsonObjectToGameMruItem @ 0x18013B2A0 (_anonymous_namespace_--JsonObjectToGameMruItem.c)
 *     GetStoredEnterprisePinGeneration @ 0x18069248C (GetStoredEnterprisePinGeneration.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedString(
        __int64 (__fastcall ****a1)(_QWORD, void *, _QWORD **),
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 (__fastcall ***v7)(_QWORD, void *, _QWORD **); // rcx
  unsigned int v8; // eax
  _QWORD *v9; // rbx
  unsigned int v10; // eax
  __int64 v12; // [rsp+38h] [rbp-28h] BYREF
  int v13; // [rsp+40h] [rbp-20h] BYREF
  __int128 v14; // [rsp+48h] [rbp-18h]
  _QWORD *v15; // [rsp+80h] [rbp+20h] BYREF
  _QWORD *v16; // [rsp+88h] [rbp+28h] BYREF

  v16 = a2;
  v12 = 0LL;
  v7 = *a1;
  if ( v7 )
  {
    v16 = 0LL;
    v8 = (**v7)(v7, &winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonObjectWithDefaultValues>, &v16);
    v9 = v16;
    v15 = v16;
  }
  else
  {
    v8 = 0;
    v15 = 0LL;
    v9 = 0LL;
  }
  v13 = 0;
  v14 = 0LL;
  winrt::check_hresult(&v16, v8, &v13);
  v13 = 0;
  v14 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64 *))(*v9 + 64LL))(v9, *a3, *a4, &v12);
  winrt::check_hresult(&v16, v10, &v13);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  *a2 = v12;
  return a2;
}
