/*
 * XREFs of ??$call@P6A?AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@?$factory_cache_entry@UKnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@UIKnownOnScreenInputUriSchemesStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUhstring@2@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@Z @ 0x1802A5F48
 * Callers:
 *     ?Default@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x18018EF38 (-Default@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ.c)
 *     ?Dictation@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x180210C18 (-Dictation@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ.c)
 *     ?LanguageBar@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x1802132B8 (-LanguageBar@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ.c)
 *     ?Symbols@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x180213330 (-Symbols@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ.c)
 *     ?Emoji@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x18029F95C (-Emoji@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ.c)
 *     ?InputCompanion@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x1802A8488 (-InputCompanion@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA.c)
 *     ?OnScreenKeyboard@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x1802A8564 (-OnScreenKeyboard@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@.c)
 *     ?Other@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x1802A863C (-Other@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ.c)
 *     ?Handwriting@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x1802BF654 (-Handwriting@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ.c)
 *     ?Candidates@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x1802BF748 (-Candidates@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ.c)
 *     ?EmojiOnKeyboard@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x1802BFA90 (-EmojiOnKeyboard@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@S.c)
 *     ?Clipboard@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x1802BFC38 (-Clipboard@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??$get_activation_factory@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@winrt@@YA?AUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1802A6080 (--$get_activation_factory@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@W.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DBABD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::call<winrt::hstring (*)(winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        void (__fastcall **a3)(__int64, __int64 *))
{
  __int64 v6[2]; // [rsp+28h] [rbp-38h] BYREF
  _DWORD *v7; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v8[4]; // [rsp+40h] [rbp-20h] BYREF
  const wchar_t *v9; // [rsp+50h] [rbp-10h]
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // [rsp+80h] [rbp+20h] BYREF
  __int64 v11; // [rsp+98h] [rbp+38h] BYREF

  v10 = a1;
  if ( aWindowsudkAppl[70] )
    abort();
  v8[0] = 1;
  v8[1] = 70;
  v9 = L"WindowsUdk.ApplicationModel.OnScreenInput.KnownOnScreenInputUriSchemes";
  v7 = v8;
  winrt::get_activation_factory<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>(
    &v10,
    &v7);
  if ( v10 && (v11 = 0LL, (**v10)(v10, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v11), (v6[0] = v11) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
    v6[1] = (__int64)&qword_18089C638;
    _InterlockedIncrement64(&qword_18089C638);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>,
            (signed __int64)v10,
            0LL) )
    {
      v10 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18089C640);
    }
    (*a3)(
      a2,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>);
    _InterlockedDecrement64(&qword_18089C638);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  }
  else
  {
    (*a3)(a2, (__int64 *)&v10);
    if ( v10 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v10);
  }
  return a2;
}
