/*
 * XREFs of ?IsPropertyAnimatable@CLinearTransferEffectMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1402342A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14023B0B0 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4D.c)
 */

char __fastcall DirectComposition::CLinearTransferEffectMarshaler::IsPropertyAnimatable(__int64 a1, int a2, int a3)
{
  if ( a2 == 10 || a2 == 11 || a2 == 13 || a2 == 14 || a2 == 16 || a2 == 17 || (unsigned int)(a2 - 19) < 2 )
    return a3 == 18;
  else
    return DirectComposition::CResourceMarshaler::IsPropertyAnimatable();
}
