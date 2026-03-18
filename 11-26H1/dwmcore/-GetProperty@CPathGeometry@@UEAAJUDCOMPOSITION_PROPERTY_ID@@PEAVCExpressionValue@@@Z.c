/*
 * XREFs of ?GetProperty@CPathGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18027D350
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetPathValue@CExpressionValue@@QEAAXPEBVCPathData@@@Z @ 0x18011008C (-SetPathValue@CExpressionValue@@QEAAXPEBVCPathData@@@Z.c)
 *     ?GetProperty@CGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1802615A0 (-GetProperty@CGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CPathGeometry::GetProperty(__int64 a1, int a2, CExpressionValue *a3)
{
  int Property; // eax
  unsigned int v4; // ebx

  if ( a2 == 5 )
  {
    CExpressionValue::SetPathValue(a3, *(const struct CPathData **)(a1 + 136));
    return 0;
  }
  Property = CGeometry::GetProperty(a1, a2);
  v4 = Property;
  if ( Property >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Property, 0x4Fu, 0LL);
  return v4;
}
