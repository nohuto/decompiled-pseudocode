/*
 * XREFs of ?IsPropertyAnimatable@CSaturationEffectMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140234270
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14023B0B0 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4D.c)
 */

char __fastcall DirectComposition::CSaturationEffectMarshaler::IsPropertyAnimatable(__int64 a1, int a2, int a3)
{
  if ( a2 == 10 )
    return a3 == 18;
  else
    return DirectComposition::CResourceMarshaler::IsPropertyAnimatable();
}
