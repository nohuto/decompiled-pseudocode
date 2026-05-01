/*
 * XREFs of ??$call@AEAV_lambda_7268e45c73438b7c97da070512f3e575_@@@?$factory_cache_entry@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRequirementsStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_7268e45c73438b7c97da070512f3e575_@@@Z @ 0x18058F380
 * Callers:
 *     ??$call_factory@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRequirementsStatics@2345@V_lambda_7268e45c73438b7c97da070512f3e575_@@@impl@winrt@@YA?A_P$$QEAV_lambda_7268e45c73438b7c97da070512f3e575_@@@Z @ 0x18058FF5C (--$call_factory@UHardwareRequirements@Profile@System@WindowsUdk@winrt@@UIHardwareRe_ea_18058FF5C.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801F1208 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics>::call<_lambda_7268e45c73438b7c97da070512f3e575_ &>(
        __int64 a1,
        unsigned int **a2)
{
  void (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 v4; // rax
  char v5; // bl
  int v6; // eax
  int v7; // eax
  char v8; // bl
  __int64 *v10; // [rsp+20h] [rbp-40h] BYREF
  __int128 v11; // [rsp+28h] [rbp-38h]
  __int64 v12; // [rsp+38h] [rbp-28h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h]
  __int64 v14; // [rsp+80h] [rbp+20h] BYREF
  void (__fastcall ***v15)(_QWORD, __int64 *, __int64 *); // [rsp+90h] [rbp+30h] BYREF
  void (__fastcall ***v16)(_QWORD, _QWORD, _QWORD); // [rsp+98h] [rbp+38h] BYREF

  v14 = a1;
  v10 = (__int64 *)L"WindowsUdk.System.Profile.HardwareRequirements";
  *(_QWORD *)&v11 = 46LL;
  winrt::param::hstring::hstring((__int64)&v12, (__int64 *)&v10);
  v15 = 0LL;
  LODWORD(v10) = 0;
  v11 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v14,
    &v12,
    (__int64)&winrt::impl::guid_v<winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics>,
    (__int64)&v15);
  winrt::check_hresult((int *)&v14, v14, (__int64)&v10);
  v3 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v15;
  v16 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v15;
  v14 = 0LL;
  if ( !v15 )
  {
    v4 = 0LL;
LABEL_3:
    v5 = 0;
    goto LABEL_4;
  }
  (**v15)(v15, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v14);
  v4 = v14;
  if ( !v14 )
    goto LABEL_3;
  v5 = 1;
LABEL_4:
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
  if ( v5 )
  {
    v10 = &qword_1808DC178;
    _InterlockedIncrement64(&qword_1808DC178);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics>,
            (signed __int64)v15,
            0LL) )
    {
      v16 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DC180);
    }
    LOBYTE(v14) = 0;
    LODWORD(v12) = 0;
    v13 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics>
                                                               + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::Profile::HardwareRequirements,winrt::WindowsUdk::System::Profile::IHardwareRequirementsStatics>,
           **a2,
           &v14);
    winrt::check_hresult((int *)&v15, v7, (__int64)&v12);
    _InterlockedDecrement64(&qword_1808DC178);
  }
  else
  {
    LOBYTE(v14) = 0;
    LODWORD(v10) = 0;
    v11 = 0LL;
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(*v3)[6])(v3, **a2, &v14);
    winrt::check_hresult((int *)&v15, v6, (__int64)&v10);
  }
  v8 = v14;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  return v8;
}
