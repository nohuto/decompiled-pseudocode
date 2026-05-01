/*
 * XREFs of ?Windows_Internal_Shell_DesktopTaskGroups_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800323C4
 * Callers:
 *     ?winrt_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18016947C (-winrt_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??$equal@V?$reverse_iterator@V?$_String_view_iterator@U?$char_traits@G@std@@@std@@@std@@V12@U?$equal_to@X@2@@std@@YA_NV?$reverse_iterator@V?$_String_view_iterator@U?$char_traits@G@std@@@std@@@0@000U?$equal_to@X@0@@Z @ 0x180032384 (--$equal@V-$reverse_iterator@V-$_String_view_iterator@U-$char_traits@G@std@@@std@@@std@@V12@U-$e.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$producers_base@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@V?$tuple@UIActivationFactory@Foundation@Windows@winrt@@@std@@@impl@winrt@@QEAA@XZ @ 0x18028E01C (--0-$producers_base@UDesktopTaskGroupsSwitchItemController@factory_implementation@DesktopTaskGro.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

_QWORD *Windows_Internal_Shell_DesktopTaskGroups_get_activation_factory()
{
  __int64 v0; // rax
  __int64 v1; // r10
  __int64 v2; // r9
  _QWORD *v3; // rax
  __int64 v4; // r9
  _QWORD *v5; // r9

  v0 = std::_WChar_traits<wchar_t>::length((__int64)L"Windows.Internal.Shell.DesktopTaskGroups.DesktopTaskGroupsSwitchItemController");
  if ( !std::equal<std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::equal_to<void>>(
          *(_QWORD *)v1 + 2LL * *(_QWORD *)(v1 + 8),
          *(_WORD **)v1,
          v2 + 2 * v0,
          v2) )
    return 0LL;
  v3 = operator new(0x18uLL);
  *(_OWORD *)v3 = 0LL;
  v3[2] = 0LL;
  winrt::impl::producers_base<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,std::tuple<winrt::Windows::Foundation::IActivationFactory>>::producers_base<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,std::tuple<winrt::Windows::Foundation::IActivationFactory>>(v3 + 2);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v4 + 8, 1LL);
  *v5 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController>::`vftable';
  return v5 + 2;
}
