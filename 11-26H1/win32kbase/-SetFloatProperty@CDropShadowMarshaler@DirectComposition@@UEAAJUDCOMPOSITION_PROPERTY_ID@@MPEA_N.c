/*
 * XREFs of ?SetFloatProperty@CDropShadowMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x1402446F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x1401B3040 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CDropShadowMarshaler::SetFloatProperty(
        __int64 a1,
        unsigned int a2,
        float a3,
        _BYTE *a4)
{
  *a4 = 0;
  if ( a2 == 1 )
  {
    *(_DWORD *)(a1 + 16) |= 0x100u;
    *(float *)(a1 + 96) = a3;
  }
  else
  {
    if ( a2 != 5 )
      return DirectComposition::CResourceMarshaler::SetFloatProperty(a1, a2, a3, a4);
    *(_DWORD *)(a1 + 16) |= 0x1000u;
    *(float *)(a1 + 112) = a3;
  }
  *a4 = 1;
  return 0LL;
}
