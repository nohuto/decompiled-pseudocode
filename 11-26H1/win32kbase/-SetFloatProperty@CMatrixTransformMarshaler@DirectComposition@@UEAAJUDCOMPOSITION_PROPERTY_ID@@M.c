/*
 * XREFs of ?SetFloatProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023D2C0
 * Callers:
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCMatrixTransformMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023C070 (-SetFloatProperty@-$CSharedResourceMarshaler@VCMatrixTransformMarshaler@DirectComposition@@$01@D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CMatrixTransformMarshaler::SetFloatProperty(
        __int64 a1,
        int a2,
        float a3,
        char *a4)
{
  unsigned int v4; // r8d
  char v6; // al
  unsigned __int64 v7; // r9

  v4 = 0;
  if ( (unsigned int)(a2 - 1) <= 5 )
  {
    v6 = 1;
    v7 = ((a2 - 1) & 1LL) + 2 * ((unsigned __int64)(unsigned int)(a2 - 1) >> 1);
    if ( *(float *)(a1 + 4 * v7 + 72) == a3 )
      v6 = 0;
    else
      *(float *)(a1 + 4 * v7 + 72) = a3;
    *a4 = v6;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
