/*
 * XREFs of ?SetFloatProperty@CVisualCaptureMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x140244B40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x1401B3040 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CVisualCaptureMarshaler::SetFloatProperty(
        __int64 a1,
        unsigned int a2,
        float a3,
        char *a4)
{
  unsigned int v4; // r8d
  char v5; // al

  v4 = 0;
  if ( a2 == 6 )
  {
    if ( *(float *)(a1 + 104) == a3 )
    {
      v5 = 0;
    }
    else
    {
      *(float *)(a1 + 104) = a3;
      v5 = 1;
    }
    *a4 = v5;
  }
  else
  {
    return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(a1, a2, a3, a4);
  }
  return v4;
}
