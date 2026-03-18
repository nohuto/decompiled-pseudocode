/*
 * XREFs of ?GetProperty@CRectangleGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180119F60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x180119FE0 (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1802615A0 (-GetProperty@CGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CRectangleGeometry::GetProperty(CResource *a1, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  const struct AnimationHelper::AnimatedProperty **i; // rax
  int Property; // eax

  v3 = 0;
  for ( i = (const struct AnimationHelper::AnimatedProperty **)&CRectangleGeometry::k_rgAnimDef;
        i != (const struct AnimationHelper::AnimatedProperty **)&CDrawListEntry::`vftable';
        ++i )
  {
    if ( a2 == *(_DWORD *)*i )
    {
      if ( *i )
      {
        CResource::GetPropertyImpl(a1, *i, a3);
        return v3;
      }
      break;
    }
  }
  Property = CGeometry::GetProperty();
  v3 = Property;
  if ( Property < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Property, 0xBBu, 0LL);
  return v3;
}
