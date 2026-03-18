/*
 * XREFs of ?SetIntegerProperty@CSurfaceBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14018FD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSurfaceBrushMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d

  v5 = 0;
  if ( a3 )
  {
    v6 = a3 - 6;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 2;
        if ( v8 )
        {
          if ( v8 != 1 )
            return (unsigned int)-1073741811;
          if ( *(_BYTE *)(a1 + 129) == (a4 != 0) )
            return v5;
          *(_DWORD *)(a1 + 16) |= 0x10000u;
          *(_BYTE *)(a1 + 129) = a4 != 0;
        }
        else
        {
          if ( *(_BYTE *)(a1 + 128) == (a4 != 0) )
            return v5;
          *(_DWORD *)(a1 + 16) |= 0x8000u;
          *(_BYTE *)(a1 + 128) = a4 != 0;
        }
      }
      else
      {
        if ( *(_DWORD *)(a1 + 116) == a4 )
          return v5;
        *(_DWORD *)(a1 + 16) |= 0x2000u;
        *(_DWORD *)(a1 + 116) = a4;
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 112) == a4 )
        return v5;
      *(_DWORD *)(a1 + 16) |= 0x1000u;
      *(_DWORD *)(a1 + 112) = a4;
    }
    *a5 = 1;
    return v5;
  }
  if ( *(_BYTE *)(a1 + 56) != (a4 != 0) )
  {
    *(_DWORD *)(a1 + 16) |= 0x40u;
    *(_BYTE *)(a1 + 56) = a4 != 0;
    *a5 = 1;
  }
  return v5;
}
