/*
 * XREFs of ?GetNamedPropertyMapping@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEBGPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@2Graphics@Windows@@@Z @ 0x1800EAAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::GetNamedPropertyMapping(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this,
        const unsigned __int16 *a2,
        unsigned int *a3,
        enum Windows::Graphics::Effects::GRAPHICS_EFFECT_PROPERTY_MAPPING *a4)
{
  unsigned int v4; // ebx
  unsigned int i; // edi
  wchar_t **v9; // rsi

  v4 = 0;
  for ( i = 0; i < 3; ++i )
  {
    v9 = &(&`Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::GetNamedPropertyMapping'::`2'::s_Properties)[2 * i];
    if ( !(unsigned int)_o__wcsicmp(a2, *v9) )
    {
      *a3 = *((_DWORD *)v9 + 2);
      *(_DWORD *)a4 = *((_DWORD *)v9 + 3);
      return v4;
    }
  }
  return (unsigned int)-2147024809;
}
