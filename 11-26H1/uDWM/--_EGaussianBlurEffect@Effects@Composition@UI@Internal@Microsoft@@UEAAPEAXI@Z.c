/*
 * XREFs of ??_EGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAPEAXI@Z @ 0x180075CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAA@XZ @ 0x180075CDC (--1GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *__fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::`vector deleting destructor'(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this,
        char a2)
{
  Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::~GaussianBlurEffect(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x58uLL);
  return this;
}
