/*
 * XREFs of ?GetFloatAnimatableProperty@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x140233B20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023AFC0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID.c)
 */

__int64 __fastcall DirectComposition::CLinearTransferEffectMarshaler::GetFloatAnimatableProperty(
        _DWORD *a1,
        __int64 a2,
        _DWORD *a3)
{
  unsigned int v3; // r9d
  int v4; // eax

  v3 = 0;
  switch ( (_DWORD)a2 )
  {
    case 0xA:
      v4 = a1[64];
      goto LABEL_18;
    case 0xB:
      v4 = a1[65];
      goto LABEL_18;
    case 0xD:
      v4 = a1[67];
      goto LABEL_18;
    case 0xE:
      v4 = a1[68];
      goto LABEL_18;
    case 0x10:
      v4 = a1[70];
      goto LABEL_18;
    case 0x11:
      v4 = a1[71];
      goto LABEL_18;
    case 0x13:
      v4 = a1[73];
      goto LABEL_18;
    case 0x14:
      v4 = a1[74];
LABEL_18:
      *a3 = v4;
      return v3;
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(a1, a2, a3, 0LL);
}
