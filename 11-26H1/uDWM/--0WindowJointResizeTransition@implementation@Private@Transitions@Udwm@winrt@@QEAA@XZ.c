/*
 * XREFs of ??0WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002F718
 * Callers:
 *     ??$create_and_initialize@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@$$V@impl@winrt@@YAPEAUWindowJointResizeTransition@implementation@Private@Transitions@Udwm@1@XZ @ 0x18002FF64 (--$create_and_initialize@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@wi.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x18002FB94 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransitionType@Transitions@Udwm@winrt@@UITransition@234@@std@@@std@@@std@@@2@@Z @ 0x18002FCC0 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??0?$producers_base@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@V?$tuple@UWindowJointResizeTransition@Private@Transitions@Udwm@winrt@@UIBitmapManager@@@std@@@impl@winrt@@QEAA@XZ @ 0x180088544 (--0-$producers_base@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@.c)
 *     ??0?$unordered_map@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@U?$hash@PEAUHWND__@@@std@@U?$equal_to@PEAUHWND__@@@7@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@7@@std@@QEAA@XZ @ 0x18008D044 (--0-$unordered_map@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@U-$hash@PEAUHWND__@@@st.c)
 */

// Hidden C++ exception states: #wind=6
winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *__fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::WindowJointResizeTransition(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *this)
{
  _QWORD *v2; // rax

  winrt::impl::producers_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,std::tuple<winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>>::producers_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,std::tuple<winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>>();
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&`winrt::get_module_lock'::`2'::s_lock));
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((char *)this + 24);
  *(_QWORD *)this = &winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,std::tuple<winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>>'};
  *((_QWORD *)this + 2) = &winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition,winrt::Udwm::Transitions::Private::WindowJointResizeTransition,IBitmapManager>'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits>(0x20uLL);
  *v2 = v2;
  v2[1] = v2;
  *((_QWORD *)this + 7) = v2;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 7LL;
  *((_QWORD *)this + 13) = 8LL;
  *((_DWORD *)this + 12) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::Udwm::Transitions::ShellTransitionType const,winrt::Udwm::Transitions::ITransition>>>>>>::_Assign_grow(
    (char *)this + 72,
    16LL,
    *((_QWORD *)this + 7));
  std::unordered_map<HWND__ *,winrt::Udwm::Transitions::UserResizeVisual>::unordered_map<HWND__ *,winrt::Udwm::Transitions::UserResizeVisual>((char *)this + 112);
  *((_DWORD *)this + 44) = 0;
  return this;
}
