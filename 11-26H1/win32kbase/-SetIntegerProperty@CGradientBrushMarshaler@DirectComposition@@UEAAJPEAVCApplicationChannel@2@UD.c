/*
 * XREFs of ?SetIntegerProperty@CGradientBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140236DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGradientBrushMarshaler::SetIntegerProperty(
        _DWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d

  v5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return (unsigned int)-1073741811;
      if ( a1[18] == a4 )
        return v5;
      a1[4] |= 0x200u;
      a1[18] = a4;
    }
    else
    {
      if ( a1[17] == a4 )
        return v5;
      a1[4] |= 0x100u;
      a1[17] = a4;
    }
    *a5 = 1;
    return v5;
  }
  if ( a1[16] != a4 )
  {
    a1[4] |= 0x80u;
    a1[16] = a4;
    *a5 = 1;
  }
  return v5;
}
