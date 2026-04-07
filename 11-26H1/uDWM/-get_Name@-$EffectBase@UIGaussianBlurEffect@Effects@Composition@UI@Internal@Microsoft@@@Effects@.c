/*
 * XREFs of ?get_Name@?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800E6AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::get_Name(
        __int64 a1,
        HSTRING *a2)
{
  return WindowsDuplicateString(*(HSTRING *)(a1 + 56), a2);
}
