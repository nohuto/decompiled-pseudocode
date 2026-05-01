/*
 * XREFs of ??$make@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1801D2FF8
 * Callers:
 *     ?winrt_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18016947C (-winrt_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?ResetNotificationBoundary@DesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@SA?AU?$factory_event_revoker@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIDesktopSnapLayoutManagerStatics@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEA@AA@impl@6@Uauto_revoke_t@6@AEBUResetNotificationBoundaryHandler@23456@@Z @ 0x1802A92A4 (-ResetNotificationBoundary@DesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$producers_base@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@V?$tuple@UIActivationFactory@Foundation@Windows@winrt@@UIDesktopSnapLayoutManagerFactory@SnapComponent@Shell@Internal@34@UIDesktopSnapLayoutManagerStatics@67834@UIDesktopSnapLayoutManagerStatics2@67834@UISnapLayoutManagerExtensionStatics@PlatformExtensions@7834@@std@@@impl@winrt@@QEAA@XZ @ 0x1801D3064 (--0-$producers_base@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Interna.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::make<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,>(
        _QWORD *a1)
{
  _OWORD *v2; // rax
  __int64 v3; // r10
  __int64 v4; // r9
  _QWORD *v5; // r10

  v2 = operator new(0x38uLL);
  *v2 = 0LL;
  v2[1] = 0LL;
  v2[2] = 0LL;
  *((_QWORD *)v2 + 6) = 0LL;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics2,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>>::producers_base<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,std::tuple<winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerStatics2,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>>(v2 + 1);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v3 + 8, 1LL);
  *a1 = v4;
  *v5 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager>::`vftable';
  return a1;
}
