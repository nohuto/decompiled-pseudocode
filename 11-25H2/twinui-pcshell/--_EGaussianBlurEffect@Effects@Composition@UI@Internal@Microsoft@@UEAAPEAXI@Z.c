/*
 * XREFs of ??_EGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAPEAXI@Z @ 0x180539A40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAA@XZ @ 0x180538CC8 (--1GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAA@XZ.c)
 */

Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *__fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::`vector deleting destructor'(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this,
        char a2)
{
  Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::~GaussianBlurEffect(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
