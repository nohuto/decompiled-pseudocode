/*
 * XREFs of ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14018C9E0
 * Callers:
 *     ?SetIntegerProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140194050 (-SetIntegerProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOM.c)
 *     ?SetIntegerProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14022AE30 (-SetIntegerProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOM.c)
 *     ?SetIntegerProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140236BA0 (-SetIntegerProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDC.c)
 *     ?SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14023DDE0 (-SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCO.c)
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1401C4AE0 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        _BYTE *a5)
{
  unsigned int v5; // r11d
  int v7; // ecx
  char v8; // al
  char v9; // cl
  char v10; // dl
  char v11; // al
  char v12; // al
  char v13; // cl
  char v14; // al
  char v15; // dl
  char v16; // al
  char v17; // cl
  char v18; // cl
  char v19; // cl
  char v20; // al
  char v21; // cl

  v5 = 0;
  *a5 = 0;
  if ( a3 == 27 )
  {
    v12 = *(_BYTE *)(a1 + 324);
    v13 = v12 & 8;
    if ( (_DWORD)a4 )
    {
      if ( v13 )
        return v5;
      v11 = v12 | 8;
    }
    else
    {
      if ( !v13 )
        return v5;
      v11 = v12 & 0xF7;
    }
LABEL_89:
    *(_DWORD *)(a1 + 16) |= 0x20000u;
    goto LABEL_90;
  }
  if ( a3 > 0x1B )
  {
    if ( a3 != 37 )
    {
      switch ( a3 )
      {
        case '&':
          v19 = *(_BYTE *)(a1 + 324) & 0xBF | (a4 != 0 ? 0x40 : 0);
          *(_DWORD *)(a1 + 16) |= 0x1000000u;
          *(_BYTE *)(a1 + 324) = v19;
          goto LABEL_91;
        case ')':
          v18 = *(_BYTE *)(a1 + 324);
          if ( (v18 & 1) == ((_DWORD)a4 != 0) )
            return v5;
          *(_DWORD *)(a1 + 16) |= 0x10000000u;
          *(_BYTE *)(a1 + 324) = ((_DWORD)a4 != 0) | v18 & 0xFE;
          goto LABEL_91;
        case '*':
          if ( *(_DWORD *)(a1 + 296) == (_DWORD)a4 )
            return v5;
          *(_DWORD *)(a1 + 16) |= 0x20000000u;
          *(_DWORD *)(a1 + 296) = a4;
          goto LABEL_91;
        case '+':
          if ( ((_DWORD)a4 != 0) == (*(_BYTE *)(a1 + 325) & 1) )
            return v5;
          v14 = (_DWORD)a4 != 0;
          v15 = *(_BYTE *)(a1 + 325) & 0xFE;
          break;
        case '.':
          v16 = *(_BYTE *)(a1 + 324);
          v17 = v16 & 0x20;
          if ( (_DWORD)a4 )
          {
            if ( v17 )
              return v5;
            v11 = v16 | 0x20;
          }
          else
          {
            if ( !v17 )
              return v5;
            v11 = v16 & 0xDF;
          }
          *(_DWORD *)(a1 + 16) |= 0x40000u;
          goto LABEL_90;
        case '1':
          if ( ((_DWORD)a4 != 0) == ((*(unsigned __int8 *)(a1 + 325) >> 1) & 1) )
            return v5;
          v14 = (_DWORD)a4 != 0 ? 2 : 0;
          v15 = *(_BYTE *)(a1 + 325) & 0xFD;
          break;
        default:
          return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(a1);
      }
      *(_DWORD *)(a1 + 16) |= 0x20000u;
      *(_BYTE *)(a1 + 325) = v15 | v14;
      goto LABEL_91;
    }
    v20 = *(_BYTE *)(a1 + 324);
    v21 = v20 & 0x10;
    if ( (_DWORD)a4 )
    {
      if ( v21 )
        return v5;
      v11 = v20 | 0x10;
    }
    else
    {
      if ( !v21 )
        return v5;
      v11 = v20 & 0xEF;
    }
    goto LABEL_89;
  }
  if ( a3 > 0x11 )
  {
    if ( a3 == 18 )
    {
      v8 = *(_BYTE *)(a1 + 324);
      v9 = 2;
      v10 = v8 & 2;
      if ( (_DWORD)a4 )
      {
LABEL_47:
        if ( v10 )
          return v5;
        v11 = v9 | v8;
        goto LABEL_49;
      }
      if ( !v10 )
        return v5;
      v11 = v8 & 0xFD;
    }
    else
    {
      if ( a3 != 19 )
      {
        if ( a3 == 20 )
        {
          if ( a4 + 1 > 2 )
            return (unsigned int)-1073741811;
          if ( *(_DWORD *)(a1 + 288) == (_DWORD)a4 )
            return v5;
          *(_DWORD *)(a1 + 288) = a4;
        }
        else
        {
          if ( a3 - 21 > 1 )
            return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(a1);
          if ( a4 + 1 > 2 )
            return (unsigned int)-1073741811;
          if ( *(_DWORD *)(a1 + 292) == (_DWORD)a4 )
            return v5;
          *(_DWORD *)(a1 + 292) = a4;
        }
LABEL_29:
        *a5 = 1;
        *(_DWORD *)(a1 + 16) |= 0x10000u;
        return v5;
      }
      v8 = *(_BYTE *)(a1 + 324);
      v9 = 4;
      v10 = v8 & 4;
      if ( (_DWORD)a4 )
        goto LABEL_47;
      if ( !v10 )
        return v5;
      v11 = v8 & 0xFB;
    }
LABEL_49:
    *(_DWORD *)(a1 + 16) |= 0x100000u;
LABEL_90:
    *(_BYTE *)(a1 + 324) = v11;
    goto LABEL_91;
  }
  switch ( a3 )
  {
    case 0x11u:
      if ( *(_DWORD *)(a1 + 320) == a4 )
        return v5;
      *(_DWORD *)(a1 + 16) |= 0x80000u;
      *(_DWORD *)(a1 + 320) = a4;
      goto LABEL_91;
    case 8u:
      if ( a4 + 1 > 2 && a4 != 6 )
        return (unsigned int)-1073741811;
      if ( *(_DWORD *)(a1 + 276) == (_DWORD)a4 )
        return v5;
      *(_DWORD *)(a1 + 276) = a4;
      goto LABEL_29;
    case 9u:
      if ( a4 + 1 > 2 )
        return (unsigned int)-1073741811;
      if ( *(_DWORD *)(a1 + 272) == (_DWORD)a4 )
        return v5;
      *(_DWORD *)(a1 + 272) = a4;
      goto LABEL_29;
    case 0xAu:
      if ( a4 == -1LL )
      {
        v7 = 5;
      }
      else if ( a4 )
      {
        v7 = 2;
        if ( a4 != 1 )
        {
          if ( a4 != 2 )
            return (unsigned int)-1073741811;
          v7 = 4;
        }
      }
      else
      {
        v7 = 0;
      }
      if ( *(_DWORD *)(a1 + 280) == v7 )
        return v5;
      *(_DWORD *)(a1 + 280) = v7;
      goto LABEL_29;
    case 0xEu:
      if ( a4 + 1 > 2 )
        return (unsigned int)-1073741811;
      if ( *(_DWORD *)(a1 + 284) == (_DWORD)a4 )
        return v5;
      *(_DWORD *)(a1 + 284) = a4;
      goto LABEL_29;
  }
  if ( a3 != 16 )
    return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(a1);
  if ( a4 <= 2 )
  {
    if ( *(_DWORD *)(a1 + 316) == a4 )
      return v5;
    *(_DWORD *)(a1 + 16) |= 0x80000u;
    *(_DWORD *)(a1 + 316) = a4;
LABEL_91:
    *a5 = 1;
    return v5;
  }
  return (unsigned int)-1073741811;
}
