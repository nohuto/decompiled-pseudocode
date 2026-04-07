/*
 * XREFs of _CDesktopManager::Initialize_::_1_::dtor$10 @ 0x1800EC45B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::Initialize_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<std::unique_ptr<CCompositionEffectCache>>::~out_param_t<std::unique_ptr<CCompositionEffectCache>>(a2 + 80);
}
