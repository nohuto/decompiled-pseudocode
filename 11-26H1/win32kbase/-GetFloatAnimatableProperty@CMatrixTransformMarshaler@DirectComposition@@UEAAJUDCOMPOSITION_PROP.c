/*
 * XREFs of ?GetFloatAnimatableProperty@CMatrixTransformMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023D1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023AFC0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID.c)
 */

__int64 __fastcall DirectComposition::CMatrixTransformMarshaler::GetFloatAnimatableProperty(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v4; // rax

  v3 = 0;
  v4 = a2 - 1;
  if ( (unsigned int)v4 > 5 )
    return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(a1, a2, a3);
  else
    *a3 = *(_DWORD *)(a1 + 4 * ((((_BYTE)a2 - 1) & 1) + 2 * (v4 >> 1)) + 72);
  return v3;
}
