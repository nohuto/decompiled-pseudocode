/*
 * XREFs of ?SetIntegerProperty@CVisualSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1401A0100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualSurfaceMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d

  v5 = 0;
  v6 = a3 - 4;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        *(_DWORD *)(a1 + 92) = a4;
      else
        return (unsigned int)-1073741811;
    }
    else if ( a4 && !*(_BYTE *)(a1 + 96) )
    {
      *(_DWORD *)(a1 + 16) |= 0x800u;
      *(_BYTE *)(a1 + 96) = 1;
      *a5 = 1;
    }
  }
  else if ( *(_DWORD *)(a1 + 88) != a4 )
  {
    *(_DWORD *)(a1 + 88) = a4;
    if ( !*(_BYTE *)(a1 + 96) )
    {
      *a5 = 1;
      *(_DWORD *)(a1 + 16) |= 0x400u;
    }
  }
  return v5;
}
