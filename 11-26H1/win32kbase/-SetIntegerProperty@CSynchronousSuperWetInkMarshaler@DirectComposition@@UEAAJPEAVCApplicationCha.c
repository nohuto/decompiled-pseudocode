/*
 * XREFs of ?SetIntegerProperty@CSynchronousSuperWetInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140237500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSynchronousSuperWetInkMarshaler::SetIntegerProperty(
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
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d

  v5 = 0;
  v6 = a3 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 2;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  if ( v13 != 1 )
                    return (unsigned int)-1073741811;
                  if ( *(_DWORD *)(a1 + 116) == a4 )
                    return v5;
                  *(_DWORD *)(a1 + 16) |= 0x20000u;
                  *(_DWORD *)(a1 + 116) = a4;
                }
                else
                {
                  if ( *(_DWORD *)(a1 + 112) == a4 )
                    return v5;
                  *(_DWORD *)(a1 + 16) |= 0x10000u;
                  *(_DWORD *)(a1 + 112) = a4;
                }
              }
              else
              {
                if ( *(_BYTE *)(a1 + 108) == (a4 != 0) )
                  return v5;
                *(_DWORD *)(a1 + 16) |= 0x8000u;
                *(_BYTE *)(a1 + 108) = a4 != 0;
              }
            }
            else
            {
              if ( *(_DWORD *)(a1 + 104) == a4 )
                return v5;
              *(_DWORD *)(a1 + 16) |= 0x4000u;
              *(_DWORD *)(a1 + 104) = a4;
            }
          }
          else
          {
            if ( *(_DWORD *)(a1 + 100) == a4 )
              return v5;
            *(_DWORD *)(a1 + 16) |= 0x2000u;
            *(_DWORD *)(a1 + 100) = a4;
          }
        }
        else
        {
          if ( *(_DWORD *)(a1 + 96) == a4 )
            return v5;
          *(_DWORD *)(a1 + 16) |= 0x1000u;
          *(_DWORD *)(a1 + 96) = a4;
        }
      }
      else
      {
        if ( *(_DWORD *)(a1 + 80) == a4 )
          return v5;
        *(_DWORD *)(a1 + 16) |= 0x400u;
        *(_DWORD *)(a1 + 80) = a4;
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 76) == a4 )
        return v5;
      *(_DWORD *)(a1 + 16) |= 0x200u;
      *(_DWORD *)(a1 + 76) = a4;
    }
    *a5 = 1;
    return v5;
  }
  if ( *(_DWORD *)(a1 + 72) != a4 )
  {
    *(_DWORD *)(a1 + 16) |= 0x100u;
    *(_DWORD *)(a1 + 72) = a4;
    *a5 = 1;
  }
  return v5;
}
