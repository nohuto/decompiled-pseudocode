/*
 * XREFs of ?GetFloatAnimatableProperty@CPrimitiveColorMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023F6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023AFC0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveColorMarshaler::GetFloatAnimatableProperty(
        _DWORD *a1,
        unsigned int a2,
        _DWORD *a3)
{
  unsigned int v3; // r9d
  int v4; // eax

  v3 = 0;
  switch ( a2 )
  {
    case 1u:
      v4 = a1[14];
      goto LABEL_10;
    case 2u:
      v4 = a1[15];
      goto LABEL_10;
    case 3u:
      v4 = a1[16];
      goto LABEL_10;
    case 4u:
      v4 = a1[17];
LABEL_10:
      *a3 = v4;
      return v3;
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty((__int64)a1, a2, a3);
}
