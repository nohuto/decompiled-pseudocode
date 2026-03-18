/*
 * XREFs of ?IsPropertyAnimatable@CTableTransferEffectMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x140234330
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14023B0B0 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4D.c)
 */

char __fastcall DirectComposition::CTableTransferEffectMarshaler::IsPropertyAnimatable(__int64 a1, int a2, int a3)
{
  if ( (unsigned int)(a2 - 16) > 0x3FF
    && (unsigned int)(a2 - 1041) > 0x3FF
    && (unsigned int)(a2 - 2066) > 0x3FF
    && (unsigned int)(a2 - 3091) > 0x3FF )
  {
    return DirectComposition::CResourceMarshaler::IsPropertyAnimatable();
  }
  else
  {
    return a3 == 18;
  }
}
