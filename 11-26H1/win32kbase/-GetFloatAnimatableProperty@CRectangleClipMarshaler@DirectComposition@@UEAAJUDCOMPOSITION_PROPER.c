/*
 * XREFs of ?GetFloatAnimatableProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023EA30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023AFC0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID.c)
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::GetFloatAnimatableProperty(
        _DWORD *a1,
        unsigned int a2,
        _DWORD *a3)
{
  unsigned int v3; // r9d
  int v4; // eax

  v3 = 0;
  if ( a2 > 0xB )
  {
    switch ( a2 )
    {
      case 0xCu:
        v4 = a1[31];
        goto LABEL_27;
      case 0xDu:
        v4 = a1[32];
        goto LABEL_27;
      case 0xEu:
        v4 = a1[33];
        goto LABEL_27;
      case 0xFu:
        v4 = a1[34];
        goto LABEL_27;
      case 0x10u:
        v4 = a1[35];
        goto LABEL_27;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 0xBu:
        v4 = a1[30];
        goto LABEL_27;
      case 5u:
        v4 = a1[24];
        goto LABEL_27;
      case 6u:
        v4 = a1[25];
        goto LABEL_27;
      case 7u:
        v4 = a1[26];
        goto LABEL_27;
      case 8u:
        v4 = a1[27];
        goto LABEL_27;
      case 9u:
        v4 = a1[28];
        goto LABEL_27;
      case 0xAu:
        v4 = a1[29];
LABEL_27:
        *a3 = v4;
        return v3;
    }
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty((__int64)a1, a2, a3);
}
