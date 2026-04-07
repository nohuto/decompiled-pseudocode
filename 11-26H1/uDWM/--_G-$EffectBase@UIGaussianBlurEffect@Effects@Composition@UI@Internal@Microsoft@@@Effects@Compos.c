/*
 * XREFs of ??_G?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@UEAAPEAXI@Z @ 0x1800E63E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@UEAA@XZ @ 0x180075D04 (--1-$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composi.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::~EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
