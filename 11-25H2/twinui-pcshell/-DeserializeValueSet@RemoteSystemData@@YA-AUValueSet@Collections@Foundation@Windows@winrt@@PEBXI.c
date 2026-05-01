/*
 * XREFs of ?DeserializeValueSet@RemoteSystemData@@YA?AUValueSet@Collections@Foundation@Windows@winrt@@PEBXI@Z @ 0x180625B1C
 * Callers:
 *     ?CreateFromBytes@RemoteSystem@RemoteSystemData@@SA?AU12@PEBXI@Z @ 0x180625358 (-CreateFromBytes@RemoteSystem@RemoteSystemData@@SA-AU12@PEBXI@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x1800A9A80 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??0ValueSet@Collections@Foundation@Windows@winrt@@QEAA@XZ @ 0x180340BB0 (--0ValueSet@Collections@Foundation@Windows@winrt@@QEAA@XZ.c)
 *     ??$ActivateInstance@UDataWriter@Streams@Storage@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDataWriter@Streams@Storage@23@XZ @ 0x18061E70C (--$ActivateInstance@UDataWriter@Streams@Storage@Windows@winrt@@@IActivationFactory@Foundation@Wi.c)
 *     ??$call@P6A?AUDataWriter@Streams@Storage@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UDataWriter@Streams@Storage@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDataWriter@Streams@Storage@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x18061FF2C (--$call@P6A-AUDataWriter@Streams@Storage@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
struct IUnknown *__fastcall RemoteSystemData::DeserializeValueSet(struct IUnknown *a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  int v7; // eax
  void (__fastcall *v8)(__int64, __int64 *); // rbx
  struct IUnknown *v9; // rdx
  void **v10; // rax
  int PropertySetSerializer; // eax
  int v12; // eax
  int v14; // [rsp+24h] [rbp-44h] BYREF
  struct IUnknown v15; // [rsp+28h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  void (__fastcall *v17[2])(__int64, __int64 *); // [rsp+38h] [rbp-30h] BYREF
  int v18; // [rsp+48h] [rbp-20h] BYREF
  __int128 v19; // [rsp+50h] [rbp-18h]
  void (__fastcall *v20)(__int64, __int64 *); // [rsp+A8h] [rbp+40h] BYREF
  int v21; // [rsp+B0h] [rbp+48h] BYREF
  int v22; // [rsp+B8h] [rbp+50h] BYREF

  v17[1] = (void (__fastcall *)(__int64, __int64 *))&qword_18089ABB8;
  _InterlockedAdd64(&qword_18089ABB8, 1uLL);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::DataWriter,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Storage::Streams::DataWriter>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::DataWriter,winrt::Windows::Foundation::IActivationFactory>,
      &v15);
    _InterlockedDecrement64(&qword_18089ABB8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089ABB8);
    v17[0] = (void (__fastcall *)(__int64, __int64 *))_lambda_8441d61fff3622fd578730ad9b988339_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Storage::Streams::DataWriter,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Storage::Streams::DataWriter (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      a1,
      (__int64)&v15,
      v17);
  }
  v18 = 0;
  v19 = 0LL;
  if ( !a3 )
    a2 = 1LL;
  v6 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, _QWORD, __int64))v15.lpVtbl->QueryInterface + 12))(
         v15.lpVtbl,
         a3,
         a2);
  winrt::check_hresult(&v21, v6, (__int64)&v18);
  v17[0] = 0LL;
  v18 = 0;
  v19 = 0LL;
  v7 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, _QWORD))v15.lpVtbl->QueryInterface + 31))(v15.lpVtbl, v17);
  winrt::check_hresult((int *)&v20, v7, (__int64)&v18);
  v8 = v17[0];
  v20 = v17[0];
  v16 = 0LL;
  v18 = 0;
  v19 = 0LL;
  v10 = winrt::put_abi((winrt *)&v16, v9);
  PropertySetSerializer = RoCreatePropertySetSerializer(v10);
  winrt::check_hresult(&v22, PropertySetSerializer, (__int64)&v18);
  winrt::Windows::Foundation::Collections::ValueSet::ValueSet(a1);
  v18 = 0;
  v19 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, struct IUnknownVtbl *, void (__fastcall *)(__int64, __int64 *)))(*(_QWORD *)v16 + 56LL))(
          v16,
          a1->lpVtbl,
          v8);
  winrt::check_hresult(&v14, v12, (__int64)&v18);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  return a1;
}
