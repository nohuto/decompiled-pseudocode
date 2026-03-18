/*
 * XREFs of ?SetFloatProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023F7B0
 * Callers:
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCPrimitiveColorMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14023C090 (-SetFloatProperty@-$CSharedResourceMarshaler@VCPrimitiveColorMarshaler@DirectComposition@@$01@Di.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPrimitiveColorMarshaler::SetFloatProperty(float *a1, int a2, float a3, char *a4)
{
  unsigned int v4; // r8d
  int v5; // edx
  int v6; // edx
  int v7; // edx
  char v8; // al

  v4 = 0;
  v5 = a2 - 1;
  if ( !v5 )
  {
    if ( a1[14] != a3 )
    {
      a1[14] = a3;
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( a1[15] != a3 )
    {
      a1[15] = a3;
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( a1[16] != a3 )
    {
      a1[16] = a3;
      goto LABEL_15;
    }
LABEL_13:
    v8 = 0;
LABEL_16:
    *a4 = v8;
    return v4;
  }
  if ( v7 == 1 )
  {
    if ( a1[17] != a3 )
    {
      a1[17] = a3;
LABEL_15:
      v8 = 1;
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  return (unsigned int)-1073741811;
}
