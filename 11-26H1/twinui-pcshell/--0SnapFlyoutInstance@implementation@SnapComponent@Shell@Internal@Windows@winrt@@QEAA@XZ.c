/*
 * XREFs of ??0SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18029120C
 * Callers:
 *     ??$make_self@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?AU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1802194B0 (--$make_self@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??0?$producers_base@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@V?$tuple@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@UIControlWindow@23456@@std@@@impl@winrt@@QEAA@XZ @ 0x180291354 (--0-$producers_base@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::SnapFlyoutInstance(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r9

  winrt::impl::producers_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,std::tuple<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>>::producers_base<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,std::tuple<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>>(
    (char *)this + 16,
    a2,
    a3,
    this);
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>(v3 + 8, 1LL);
  *(_QWORD *)v4 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::`vftable';
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  *(_QWORD *)(v4 + 64) = 0LL;
  *(_QWORD *)(v4 + 72) = 0LL;
  *(_QWORD *)(v4 + 80) = 0LL;
  *(_QWORD *)(v4 + 88) = 0LL;
  *(_QWORD *)(v4 + 96) = 0LL;
  *(_QWORD *)(v4 + 104) = 0LL;
  *(_QWORD *)(v4 + 112) = 0LL;
  *(_QWORD *)(v4 + 120) = 0LL;
  *(_QWORD *)(v4 + 128) = 0LL;
  *(_QWORD *)(v4 + 136) = 0LL;
  *(_QWORD *)(v4 + 144) = 0LL;
  *(_QWORD *)(v4 + 152) = 0LL;
  *(_QWORD *)(v4 + 160) = 0LL;
  *(_QWORD *)(v4 + 168) = 0LL;
  *(_QWORD *)(v4 + 176) = 0LL;
  *(_QWORD *)(v4 + 184) = 0LL;
  *(_QWORD *)(v4 + 192) = 0LL;
  *(_QWORD *)(v4 + 200) = 0LL;
  *(_QWORD *)(v4 + 208) = 0LL;
  *(_QWORD *)(v4 + 216) = 0LL;
  *(_QWORD *)(v4 + 224) = 0LL;
  *(_QWORD *)(v4 + 232) = 0LL;
  *(_QWORD *)(v4 + 240) = 0LL;
  *(_QWORD *)(v4 + 248) = 0LL;
  *(_QWORD *)(v4 + 256) = 0LL;
  *(_QWORD *)(v4 + 264) = 0LL;
  *(_QWORD *)(v4 + 272) = 0LL;
  *(_QWORD *)(v4 + 280) = 0LL;
  *(_QWORD *)(v4 + 288) = 0LL;
  *(_QWORD *)(v4 + 296) = 0LL;
  *(_QWORD *)(v4 + 304) = 0LL;
  *(_QWORD *)(v4 + 312) = 0LL;
  *(_DWORD *)(v4 + 320) = 0;
  *(_QWORD *)(v4 + 328) = 0LL;
  *(_QWORD *)(v4 + 336) = 0LL;
  *(_OWORD *)(v4 + 344) = 0LL;
  *(_QWORD *)(v4 + 360) = 0LL;
  *(_QWORD *)(v4 + 368) = 0LL;
  return v4;
}
