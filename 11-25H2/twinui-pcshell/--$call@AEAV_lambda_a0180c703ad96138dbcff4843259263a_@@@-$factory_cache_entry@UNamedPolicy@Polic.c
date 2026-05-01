/*
 * XREFs of ??$call@AEAV_lambda_a0180c703ad96138dbcff4843259263a_@@@?$factory_cache_entry@UNamedPolicy@Policies@Management@Windows@winrt@@UINamedPolicyStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_a0180c703ad96138dbcff4843259263a_@@@Z @ 0x18056B7AC
 * Callers:
 *     ?IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ @ 0x18056E3CC (-IsC2DAllowedByITPolicy@AIXPolicyHelper@@YA_NXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801CE210 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UINamedPolicyStatics@Policies@Management@Windows@winrt@@@winrt@@YA?AUINamedPolicyStatics@Policies@Management@Windows@0@AEBUhstring@param@0@@Z @ 0x18056C22C (--$get_activation_factory@UINamedPolicyStatics@Policies@Management@Windows@winrt@@@winrt@@YA-AUI.c)
 *     ??R_lambda_a0180c703ad96138dbcff4843259263a_@@QEBA@AEBUINamedPolicyStatics@Policies@Management@Windows@winrt@@@Z @ 0x18056CB8C (--R_lambda_a0180c703ad96138dbcff4843259263a_@@QEBA@AEBUINamedPolicyStatics@Policies@Management@W.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Management::Policies::NamedPolicy,winrt::Windows::Management::Policies::INamedPolicyStatics>::call<_lambda_a0180c703ad96138dbcff4843259263a_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        __int64 a3)
{
  __int64 v6[2]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v7[2]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+48h] [rbp-28h] BYREF
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+10h] BYREF
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF

  v9 = a1;
  v7[0] = (__int64)L"Windows.Management.Policies.NamedPolicy";
  v7[1] = 39LL;
  winrt::param::hstring::hstring((__int64)v8, v7);
  winrt::get_activation_factory<winrt::Windows::Management::Policies::INamedPolicyStatics>(&v9, v8);
  if ( v9 && (v10 = 0LL, (**v9)(v9, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10), (v6[0] = v10) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_18089CE08;
    _InterlockedIncrement64(&qword_18089CE08);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Policies::NamedPolicy,winrt::Windows::Management::Policies::INamedPolicyStatics>,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089CE10);
    }
    _lambda_a0180c703ad96138dbcff4843259263a_::operator()(
      a3,
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Management::Policies::NamedPolicy,winrt::Windows::Management::Policies::INamedPolicyStatics>);
    _InterlockedDecrement64(&qword_18089CE08);
  }
  else
  {
    _lambda_a0180c703ad96138dbcff4843259263a_::operator()(a3, a2, &v9);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v9);
  return a2;
}
