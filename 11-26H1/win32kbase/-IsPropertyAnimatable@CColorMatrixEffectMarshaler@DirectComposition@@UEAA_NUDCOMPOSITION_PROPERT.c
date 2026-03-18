/*
 * XREFs of ?IsPropertyAnimatable@CColorMatrixEffectMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140234200
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14023B0B0 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4D.c)
 */

char __fastcall DirectComposition::CColorMatrixEffectMarshaler::IsPropertyAnimatable(
        __int64 a1,
        unsigned int a2,
        int a3)
{
  bool v3; // zf
  unsigned int v4; // eax
  bool v5; // zf
  unsigned int v6; // eax
  unsigned int v7; // eax

  if ( a2 > 0x14 )
  {
    if ( a2 == 21 || a2 == 22 || a2 == 23 || a2 == 24 )
      return a3 == 18;
    v4 = a2 - 25;
    v3 = a2 == 25;
LABEL_12:
    if ( v3 )
      return a3 == 18;
    v6 = v4 - 1;
    v5 = v6 == 0;
    goto LABEL_14;
  }
  if ( a2 == 20 )
    return a3 == 18;
  if ( a2 <= 0xF )
  {
    if ( a2 == 15 )
      return a3 == 18;
    v3 = a2 == 10;
    v4 = a2 - 10;
    goto LABEL_12;
  }
  v5 = a2 == 16;
  v6 = a2 - 16;
LABEL_14:
  if ( !v5 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 - 1 >= 2 )
        return DirectComposition::CResourceMarshaler::IsPropertyAnimatable();
    }
  }
  return a3 == 18;
}
