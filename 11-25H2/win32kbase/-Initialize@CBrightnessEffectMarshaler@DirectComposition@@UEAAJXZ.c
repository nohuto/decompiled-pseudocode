/*
 * XREFs of ?Initialize@CBrightnessEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x140231920
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x14019CB70 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

int __fastcall DirectComposition::CBrightnessEffectMarshaler::Initialize(
        DirectComposition::CBrightnessEffectMarshaler *this)
{
  int result; // eax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( result >= 0 )
  {
    result = 0;
    *((_DWORD *)this + 30) = 0;
    *((_DWORD *)this + 31) = 0;
    *((_DWORD *)this + 28) = 1065353216;
    *((_DWORD *)this + 29) = 1065353216;
  }
  return result;
}
