/*
 * XREFs of ??$call@AEAV_lambda_e7631c1690498db2dc470481c9b63fc5_@@@?$factory_cache_entry@UBuffer@Streams@Storage@Windows@winrt@@UIBufferFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_e7631c1690498db2dc470481c9b63fc5_@@@Z @ 0x1806459C0
 * Callers:
 *     ??0Buffer@Streams@Storage@Windows@winrt@@QEAA@I@Z @ 0x18064962C (--0Buffer@Streams@Storage@Windows@winrt@@QEAA@I@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??R_lambda_e0c989301fb7eeb47b8a27ef133367da_@@QEBA@AEBUIPointerPointStatics@Input@UI@Windows@winrt@@@Z @ 0x1805909FC (--R_lambda_e0c989301fb7eeb47b8a27ef133367da_@@QEBA@AEBUIPointerPointStatics@Input@UI@Windows@win.c)
 *     ??$get_activation_factory@UIBufferFactory@Streams@Storage@Windows@winrt@@@winrt@@YA?AUIBufferFactory@Streams@Storage@Windows@0@AEBUhstring@param@0@@Z @ 0x180646750 (--$get_activation_factory@UIBufferFactory@Streams@Storage@Windows@winrt@@@winrt@@YA-AUIBufferFac.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Storage::Streams::Buffer,winrt::Windows::Storage::Streams::IBufferFactory>::call<_lambda_e7631c1690498db2dc470481c9b63fc5_ &>(
        __int64 *a1,
        _QWORD *a2,
        unsigned int **a3)
{
  __int64 *v5; // rbx
  __int64 *v6; // rax
  char v7; // si
  __int64 v9[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 *v12; // [rsp+98h] [rbp+38h] BYREF

  v11 = a1;
  v9[0] = (__int64)L"Windows.Storage.Streams.Buffer";
  v9[1] = 30LL;
  winrt::param::hstring::hstring((__int64)v10, v9);
  winrt::get_activation_factory<winrt::Windows::Storage::Streams::IBufferFactory>(&v11, v10);
  v5 = v11;
  v12 = 0LL;
  if ( !v11 )
  {
    v6 = 0LL;
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  (*(void (__fastcall **)(__int64 *, __int64 *, __int64 **))*v11)(
    v11,
    &winrt::impl::guid_v<winrt::impl::IAgileObject>,
    &v12);
  v6 = v12;
  if ( !v12 )
    goto LABEL_3;
  v7 = 1;
LABEL_4:
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  if ( v7 )
  {
    v12 = &qword_1808DB2C8;
    _InterlockedIncrement64(&qword_1808DB2C8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::Buffer,winrt::Windows::Storage::Streams::IBufferFactory>,
            (signed __int64)v5,
            0LL) )
    {
      v11 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DB2D0);
    }
    _lambda_e0c989301fb7eeb47b8a27ef133367da_::operator()(
      a3,
      a2,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::Streams::Buffer,winrt::Windows::Storage::Streams::IBufferFactory>);
    _InterlockedDecrement64(&qword_1808DB2C8);
  }
  else
  {
    _lambda_e0c989301fb7eeb47b8a27ef133367da_::operator()(a3, a2, &v11);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return a2;
}
