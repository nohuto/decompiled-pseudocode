/*
 * XREFs of ?SetIntegerProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1402420B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@QEAAJXZ @ 0x1400A44C4 (-SetDefaultConfiguration@CInteractionMarshaler@DirectComposition@@QEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _BYTE *a5)
{
  unsigned int v5; // edi
  char v7; // cl
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  char v12; // cl
  char v13; // dl
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // r8d

  v5 = 0;
  v7 = a4 != 0;
  if ( a3 > 0xB )
  {
    v14 = a3 - 13;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( !v16 )
        {
          if ( (*(_BYTE *)(a1 + 333) & 1) != v7 )
          {
            *(_BYTE *)(a1 + 333) = v7 | *(_BYTE *)(a1 + 333) & 0xFE;
            *a5 = 1;
            *(_DWORD *)(a1 + 16) |= 0x1000u;
          }
          return v5;
        }
        v17 = v16 - 2;
        if ( !v17 )
        {
          if ( *(_DWORD *)(a1 + 328) == (_DWORD)a4 )
            return v5;
          *(_DWORD *)(a1 + 328) = a4;
          goto LABEL_17;
        }
        if ( v17 == 1 && a4 )
        {
          if ( (*(_BYTE *)(a1 + 332) & 1) == v7 )
            return v5;
          *(_BYTE *)(a1 + 332) = v7 | *(_BYTE *)(a1 + 332) & 0xFE;
          DirectComposition::CInteractionMarshaler::SetDefaultConfiguration((DirectComposition::CInteractionMarshaler *)a1);
          goto LABEL_17;
        }
        return (unsigned int)-1073741811;
      }
      if ( *(_BYTE *)(a1 + 332) >> 7 == v7 )
        return v5;
      *(_BYTE *)(a1 + 332) = *(_BYTE *)(a1 + 332) & 0x7F | (v7 << 7);
      *a5 = 1;
    }
    else
    {
      if ( ((*(_BYTE *)(a1 + 332) & 0x40) != 0) == v7 )
        return v5;
      *(_BYTE *)(a1 + 332) = *(_BYTE *)(a1 + 332) & 0xBF | (v7 << 6);
      *a5 = 1;
    }
    *(_DWORD *)(a1 + 16) |= 0x800u;
    return v5;
  }
  if ( a3 == 11 )
  {
    if ( ((*(_BYTE *)(a1 + 332) & 0x20) != 0) == v7 )
      return v5;
    v12 = 32 * v7;
    v13 = *(_BYTE *)(a1 + 332) & 0xDF;
    goto LABEL_16;
  }
  v8 = a3 - 4;
  if ( !v8 )
  {
    if ( *(_DWORD *)(a1 + 272) != (_DWORD)a4 )
    {
      *(_DWORD *)(a1 + 272) = a4;
      *a5 = 1;
      *(_DWORD *)(a1 + 16) &= ~0x100u;
    }
    return v5;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( ((*(_BYTE *)(a1 + 332) & 2) != 0) != v7 )
    {
      v12 = 2 * v7;
      v13 = *(_BYTE *)(a1 + 332) & 0xFD;
      goto LABEL_16;
    }
    return v5;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( ((*(_BYTE *)(a1 + 332) & 4) != 0) != v7 )
    {
      v12 = 4 * v7;
      v13 = *(_BYTE *)(a1 + 332) & 0xFB;
      goto LABEL_16;
    }
    return v5;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 == 3 )
    {
      if ( ((*(_BYTE *)(a1 + 332) & 0x10) != 0) != v7 )
      {
        v12 = 16 * v7;
        v13 = *(_BYTE *)(a1 + 332) & 0xEF;
LABEL_16:
        *(_BYTE *)(a1 + 332) = v13 | v12;
LABEL_17:
        *a5 = 1;
        *(_DWORD *)(a1 + 16) |= 0x200u;
        return v5;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( ((*(_BYTE *)(a1 + 332) & 8) != 0) != v7 )
  {
    v12 = 8 * v7;
    v13 = *(_BYTE *)(a1 + 332) & 0xF7;
    goto LABEL_16;
  }
  return v5;
}
