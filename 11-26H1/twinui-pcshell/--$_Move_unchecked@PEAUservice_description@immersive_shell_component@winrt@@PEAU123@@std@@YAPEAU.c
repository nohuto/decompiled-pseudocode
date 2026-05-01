/*
 * XREFs of ??$_Move_unchecked@PEAUservice_description@immersive_shell_component@winrt@@PEAU123@@std@@YAPEAUservice_description@immersive_shell_component@winrt@@PEAU123@00@Z @ 0x1802D83FC
 * Callers:
 *     _std::vector_winrt::immersive_shell_component::service_description_std::allocator_winrt::immersive_shell_component::service_description___::_Insert_counted_range_winrt::immersive_shell_component::service_description_const____::_1_::catch$3 @ 0x1806D83A5 (_std--vector_winrt--immersive_shell_component--service_description_std--allocator_w_ea_1806D83A5.c)
 * Callees:
 *     ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800B7B54 (--4-$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::_Move_unchecked<winrt::immersive_shell_component::service_description *,winrt::immersive_shell_component::service_description *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi
  int v6; // eax

  for ( i = a1; i != a2; a3 += 32LL )
  {
    *(_OWORD *)a3 = *(_OWORD *)i;
    winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=((__int64 *)(a3 + 16), (__int64 *)(i + 16));
    v6 = *(_DWORD *)(i + 24);
    i += 32LL;
    *(_DWORD *)(a3 + 24) = v6;
  }
  return a3;
}
