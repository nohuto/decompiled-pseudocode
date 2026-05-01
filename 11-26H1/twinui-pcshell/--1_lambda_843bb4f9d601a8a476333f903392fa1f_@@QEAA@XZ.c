/*
 * XREFs of ??1_lambda_843bb4f9d601a8a476333f903392fa1f_@@QEAA@XZ @ 0x1805E3128
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805DE960 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor$2 @ 0x1806FDB01 (_winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemA_ea_1806FDB01.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ @ 0x1805E3868 (--1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ.c)
 */

void __fastcall _lambda_843bb4f9d601a8a476333f903392fa1f_::~_lambda_843bb4f9d601a8a476333f903392fa1f_(
        _lambda_843bb4f9d601a8a476333f903392fa1f_ *this)
{
  std::_Ref_count_base *v2; // rcx

  PinManagerTelemetry::PinManagerRequestPinItem::~PinManagerRequestPinItem((_lambda_843bb4f9d601a8a476333f903392fa1f_ *)((char *)this + 48));
  std::wstring::_Tidy_deallocate((_QWORD *)this + 2);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
