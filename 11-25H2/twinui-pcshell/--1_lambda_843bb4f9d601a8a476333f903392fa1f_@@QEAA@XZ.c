/*
 * XREFs of ??1_lambda_843bb4f9d601a8a476333f903392fa1f_@@QEAA@XZ @ 0x1805BF150
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805BB040 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor$2 @ 0x1806D5899 (_winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemA_ea_1806D5899.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ @ 0x1805BF858 (--1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ.c)
 */

void __fastcall _lambda_843bb4f9d601a8a476333f903392fa1f_::~_lambda_843bb4f9d601a8a476333f903392fa1f_(void **this)
{
  std::_Ref_count_base *v2; // rcx

  PinManagerTelemetry::PinManagerRequestPinItem::~PinManagerRequestPinItem((PinManagerTelemetry::PinManagerRequestPinItem *)(this + 6));
  std::wstring::_Tidy_deallocate(this + 2);
  v2 = (std::_Ref_count_base *)this[1];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
