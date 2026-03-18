/*
 * XREFs of ?IsPropertyAnimatable@CRectangleClipMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14023EAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14023B0B0 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4D.c)
 */

bool __fastcall DirectComposition::CRectangleClipMarshaler::IsPropertyAnimatable(__int64 a1, unsigned int a2, int a3)
{
  if ( a2 - 5 > 0xB )
    return DirectComposition::CResourceMarshaler::IsPropertyAnimatable(a1, a2, a3);
  else
    return a3 == 18;
}
