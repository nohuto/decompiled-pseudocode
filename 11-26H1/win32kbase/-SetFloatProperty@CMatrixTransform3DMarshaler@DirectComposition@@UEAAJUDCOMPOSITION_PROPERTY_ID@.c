/*
 * XREFs of ?SetFloatProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023D410
 * Callers:
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCMatrixTransform3DMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023C050 (-SetFloatProperty@-$CSharedResourceMarshaler@VCMatrixTransform3DMarshaler@DirectComposition@@$01.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CMatrixTransform3DMarshaler::SetFloatProperty(
        __int64 a1,
        int a2,
        float a3,
        char *a4)
{
  unsigned int v4; // r8d
  __int64 v5; // rax
  char v6; // al

  v4 = 0;
  if ( (unsigned int)(a2 - 1) <= 0xF )
  {
    v5 = (unsigned int)(a2 - 1);
    if ( *(float *)(a1 + 4 * v5 + 72) == a3 )
    {
      v6 = 0;
    }
    else
    {
      *(float *)(a1 + 4 * v5 + 72) = a3;
      v6 = 1;
    }
    *a4 = v6;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
