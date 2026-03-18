/*
 * XREFs of ?Initialize@CSaturationEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x140232400
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x14019CB70 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

int __fastcall DirectComposition::CSaturationEffectMarshaler::Initialize(
        DirectComposition::CSaturationEffectMarshaler *this)
{
  int result; // eax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( result >= 0 )
  {
    result = 0;
    *((_DWORD *)this + 28) = 1056964608;
  }
  return result;
}
