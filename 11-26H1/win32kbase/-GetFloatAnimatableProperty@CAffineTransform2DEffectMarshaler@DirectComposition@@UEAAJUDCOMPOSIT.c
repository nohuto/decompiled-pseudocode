/*
 * XREFs of ?GetFloatAnimatableProperty@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x1402338B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023AFC0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID.c)
 */

__int64 __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::GetFloatAnimatableProperty(
        _DWORD *a1,
        __int64 a2,
        _DWORD *a3)
{
  unsigned int v3; // r9d
  int v4; // eax

  v3 = 0;
  switch ( (_DWORD)a2 )
  {
    case 0xD:
      v4 = a1[67];
      goto LABEL_14;
    case 0xE:
      v4 = a1[68];
      goto LABEL_14;
    case 0xF:
      v4 = a1[69];
      goto LABEL_14;
    case 0x10:
      v4 = a1[70];
      goto LABEL_14;
    case 0x11:
      v4 = a1[71];
      goto LABEL_14;
    case 0x12:
      v4 = a1[72];
LABEL_14:
      *a3 = v4;
      return v3;
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(a1, a2, a3, 0LL);
}
