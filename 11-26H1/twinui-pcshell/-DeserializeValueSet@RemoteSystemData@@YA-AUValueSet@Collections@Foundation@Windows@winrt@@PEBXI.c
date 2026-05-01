/*
 * XREFs of ?DeserializeValueSet@RemoteSystemData@@YA?AUValueSet@Collections@Foundation@Windows@winrt@@PEBXI@Z @ 0x18064B8AC
 * Callers:
 *     ?CreateFromBytes@RemoteSystem@RemoteSystemData@@SA?AU12@PEBXI@Z @ 0x18064B0D4 (-CreateFromBytes@RemoteSystem@RemoteSystemData@@SA-AU12@PEBXI@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180029578 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0ValueSet@Collections@Foundation@Windows@winrt@@QEAA@XZ @ 0x180341A40 (--0ValueSet@Collections@Foundation@Windows@winrt@@QEAA@XZ.c)
 *     ??$ActivateInstance@UDataWriter@Streams@Storage@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDataWriter@Streams@Storage@23@XZ @ 0x1806441A4 (--$ActivateInstance@UDataWriter@Streams@Storage@Windows@winrt@@@IActivationFactory@Foundation@Wi.c)
 *     ??$call@P6A?AUDataWriter@Streams@Storage@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UDataWriter@Streams@Storage@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDataWriter@Streams@Storage@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x180645AF4 (--$call@P6A-AUDataWriter@Streams@Storage@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
struct IUnknown *__fastcall RemoteSystemData::DeserializeValueSet(struct IUnknown *a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  int v7; // eax
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v8)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // rbx
  struct IUnknown *v9; // rdx
  void **v10; // rax
  int PropertySetSerializer; // eax
  int v12; // eax
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v14)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+28h] [rbp-30h] BYREF
  int v15; // [rsp+30h] [rbp-28h] BYREF
  __int128 v16; // [rsp+38h] [rbp-20h]
  struct IUnknown v17; // [rsp+98h] [rbp+40h] BYREF
  int v18; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+50h] BYREF

  v14 = (const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64))&qword_1808DB2A8;
  _InterlockedAdd64(&qword_1808DB2A8, 1uLL);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::DataWriter,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Storage::Streams::DataWriter>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::DataWriter,winrt::Windows::Foundation::IActivationFactory>,
      &v17);
    _InterlockedDecrement64(&qword_1808DB2A8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DB2A8);
    v14 = _lambda_8441d61fff3622fd578730ad9b988339_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Storage::Streams::DataWriter,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Storage::Streams::DataWriter (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      a1,
      (__int64)&v17,
      (void (__fastcall **)(__int64, __int64 *))&v14);
  }
  v15 = 0;
  v16 = 0LL;
  if ( !a3 )
    a2 = 1LL;
  v6 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, _QWORD, __int64))v17.lpVtbl->QueryInterface + 12))(
         v17.lpVtbl,
         a3,
         a2);
  winrt::check_hresult(&v18, v6, (__int64)&v15);
  v14 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v7 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, _QWORD))v17.lpVtbl->QueryInterface + 31))(v17.lpVtbl, &v14);
  winrt::check_hresult(&v18, v7, (__int64)&v15);
  v8 = v14;
  v19 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v10 = winrt::put_abi((winrt *)&v19, v9);
  PropertySetSerializer = RoCreatePropertySetSerializer(v10);
  winrt::check_hresult(&v18, PropertySetSerializer, (__int64)&v15);
  winrt::Windows::Foundation::Collections::ValueSet::ValueSet(a1);
  v15 = 0;
  v16 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, struct IUnknownVtbl *, const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64)))(*(_QWORD *)v19 + 56LL))(
          v19,
          a1->lpVtbl,
          v8);
  winrt::check_hresult(&v18, v12, (__int64)&v15);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v19);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
  return a1;
}
