/*
 * XREFs of ?Insert@?$consume_Windows_Foundation_Collections_IMap@UJsonObject@Json@Data@Windows@winrt@@Uhstring@5@UIJsonValue@2345@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIJsonValue@Json@Data@Windows@3@@Z @ 0x180317D30
 * Callers:
 *     ?SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z @ 0x180139BB0 (-SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z.c)
 *     ShouldAddEnterprisePinToOutput @ 0x180696EE8 (ShouldAddEnterprisePinToOutput.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Data::Json::JsonObject,winrt::hstring,winrt::Windows::Data::Json::IJsonValue>::Insert(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  int v10; // [rsp+30h] [rbp-20h] BYREF
  __int128 v11; // [rsp+38h] [rbp-18h]
  char v12; // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+28h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF

  v12 = 0;
  v5 = *a1;
  if ( v5 )
  {
    v13 = 0LL;
    v6 = (**v5)(
           v5,
           &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IMap<winrt::hstring,winrt::Windows::Data::Json::IJsonValue>>,
           &v13);
    v7 = v13;
    v14 = v13;
  }
  else
  {
    v6 = 0;
    v14 = 0LL;
    v7 = 0LL;
  }
  v10 = 0;
  v11 = 0LL;
  winrt::check_hresult((int *)&v13, v6, (__int64)&v10);
  v10 = 0;
  v11 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *))(*(_QWORD *)v7 + 80LL))(v7, *a2, *a3, &v12);
  winrt::check_hresult((int *)&v13, v8, (__int64)&v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  return v12;
}
