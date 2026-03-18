/*
 * XREFs of ?SetFloatProperty@CSaturationEffectMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140231360
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140105310 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CSaturationEffectMarshaler::SetFloatProperty(
        DirectComposition::CSaturationEffectMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  bool v5; // al

  if ( a2 != 4 )
    return DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  if ( *((float *)this + 28) == a3 )
  {
    v5 = 0;
  }
  else
  {
    *((float *)this + 28) = a3;
    v5 = 1;
  }
  *a4 = v5;
  return 0LL;
}
