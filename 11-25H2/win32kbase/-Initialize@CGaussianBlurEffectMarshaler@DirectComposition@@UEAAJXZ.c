/*
 * XREFs of ?Initialize@CGaussianBlurEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1402312F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x14019CB70 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

int __fastcall DirectComposition::CGaussianBlurEffectMarshaler::Initialize(
        DirectComposition::CGaussianBlurEffectMarshaler *this)
{
  int result; // eax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( result >= 0 )
  {
    result = 0;
    *((_DWORD *)this + 28) = 1077936128;
  }
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 29) = 2;
  return result;
}
