/*
 * XREFs of ?GetFloatAnimatableProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x140233990
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023AFC0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID.c)
 */

__int64 __fastcall DirectComposition::CColorMatrixEffectMarshaler::GetFloatAnimatableProperty(
        _DWORD *a1,
        __int64 a2,
        _DWORD *a3)
{
  unsigned int v3; // r9d
  int v4; // eax

  v3 = 0;
  if ( (unsigned int)a2 > 0x14 )
  {
    switch ( (_DWORD)a2 )
    {
      case 0x15:
        v4 = a1[75];
        goto LABEL_43;
      case 0x16:
        v4 = a1[76];
        goto LABEL_43;
      case 0x17:
        v4 = a1[77];
        goto LABEL_43;
      case 0x18:
        v4 = a1[78];
        goto LABEL_43;
      case 0x19:
        v4 = a1[79];
        goto LABEL_43;
      case 0x1A:
        v4 = a1[80];
        goto LABEL_43;
      case 0x1B:
        v4 = a1[81];
        goto LABEL_43;
      case 0x1C:
        v4 = a1[82];
        goto LABEL_43;
      case 0x1D:
        v4 = a1[83];
        goto LABEL_43;
    }
  }
  else
  {
    if ( (_DWORD)a2 == 20 )
    {
      v4 = a1[74];
      goto LABEL_43;
    }
    if ( (unsigned int)a2 > 0xF )
    {
      switch ( (_DWORD)a2 )
      {
        case 0x10:
          v4 = a1[70];
          break;
        case 0x11:
          v4 = a1[71];
          break;
        case 0x12:
          v4 = a1[72];
          break;
        default:
          v4 = a1[73];
          break;
      }
      goto LABEL_43;
    }
    switch ( (_DWORD)a2 )
    {
      case 0xF:
        v4 = a1[69];
        goto LABEL_43;
      case 0xA:
        v4 = a1[64];
        goto LABEL_43;
      case 0xB:
        v4 = a1[65];
        goto LABEL_43;
      case 0xC:
        v4 = a1[66];
        goto LABEL_43;
      case 0xD:
        v4 = a1[67];
        goto LABEL_43;
      case 0xE:
        v4 = a1[68];
LABEL_43:
        *a3 = v4;
        return v3;
    }
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(a1, a2, a3, 0LL);
}
