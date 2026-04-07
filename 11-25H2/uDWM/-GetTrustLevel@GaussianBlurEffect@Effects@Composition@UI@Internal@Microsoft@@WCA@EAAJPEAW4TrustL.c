/*
 * XREFs of ?GetTrustLevel@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x1800EAC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  return Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::GetSourceCount(
           a1 - 32,
           a2);
}
