/*
 * XREFs of ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1400DAA80
 * Callers:
 *     ?SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x14012F260 (-SetIntegerProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JP.c)
 *     ?SetIntegerProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140198630 (-SetIntegerProperty@CWindowNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPE.c)
 *     ?SetIntegerProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140228B80 (-SetIntegerProperty@CHostVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPE.c)
 *     ?SetIntegerProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x14022E2D0 (-SetIntegerProperty@CCursorVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_J.c)
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1400DAF90 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetIntegerProperty(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        unsigned __int64 a4,
        bool *a5)
{
  unsigned int v5; // r11d
  char v7; // al
  char v8; // cl
  char v9; // al
  char v10; // al
  char v11; // cl
  char v13; // cl
  int v14; // ecx
  char v15; // al
  char v16; // dl
  char v17; // al
  char v18; // cl
  char v19; // dl
  char v20; // al
  char v21; // cl
  char v22; // cl

  v5 = 0;
  *a5 = 0;
  if ( a3 <= 0x1B )
  {
    if ( a3 == 27 )
    {
      v7 = *((_BYTE *)this + 308);
      v8 = v7 & 8;
      if ( (_DWORD)a4 )
      {
        if ( v8 )
          return v5;
        v9 = v7 | 8;
        goto LABEL_28;
      }
      if ( v8 )
      {
        v9 = v7 & 0xF7;
LABEL_28:
        *((_DWORD *)this + 4) |= 0x10000u;
LABEL_29:
        *((_BYTE *)this + 308) = v9;
        goto LABEL_20;
      }
      return v5;
    }
    if ( a3 <= 0x11 )
    {
      switch ( a3 )
      {
        case 0x11u:
          if ( *((_DWORD *)this + 76) == a4 )
            return v5;
          *((_DWORD *)this + 4) |= 0x40000u;
          *((_DWORD *)this + 76) = a4;
          goto LABEL_20;
        case 8u:
          if ( a4 + 1 <= 2 || a4 == 6 )
          {
            if ( *((_DWORD *)this + 65) == (_DWORD)a4 )
              return v5;
            *((_DWORD *)this + 65) = a4;
            goto LABEL_17;
          }
          return (unsigned int)-1073741811;
        case 9u:
          if ( a4 + 1 <= 2 )
          {
            if ( *((_DWORD *)this + 64) == (_DWORD)a4 )
              return v5;
            *((_DWORD *)this + 64) = a4;
LABEL_17:
            *a5 = 1;
            *((_DWORD *)this + 4) |= 0x8000u;
            return v5;
          }
          return (unsigned int)-1073741811;
        case 0xAu:
          if ( a4 == -1LL )
          {
            v14 = 5;
          }
          else if ( a4 )
          {
            v14 = 2;
            if ( a4 != 1 )
            {
              if ( a4 != 2 )
                return (unsigned int)-1073741811;
              v14 = 4;
            }
          }
          else
          {
            v14 = 0;
          }
          if ( *((_DWORD *)this + 66) == v14 )
            return v5;
          *((_DWORD *)this + 66) = v14;
          goto LABEL_17;
        case 0xEu:
          if ( a4 + 1 <= 2 )
          {
            if ( *((_DWORD *)this + 67) == (_DWORD)a4 )
              return v5;
            *((_DWORD *)this + 67) = a4;
            goto LABEL_17;
          }
          return (unsigned int)-1073741811;
        case 0x10u:
          if ( a4 <= 2 )
          {
            if ( *((_DWORD *)this + 75) == a4 )
              return v5;
            *((_DWORD *)this + 4) |= 0x40000u;
            *((_DWORD *)this + 75) = a4;
            goto LABEL_20;
          }
          return (unsigned int)-1073741811;
      }
      return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
    }
    switch ( a3 )
    {
      case 0x12u:
        v17 = *((_BYTE *)this + 308);
        v18 = 2;
        v19 = v17 & 2;
        if ( !(_DWORD)a4 )
        {
          if ( !v19 )
            return v5;
          v9 = v17 & 0xFD;
LABEL_77:
          *((_DWORD *)this + 4) |= 0x80000u;
          goto LABEL_29;
        }
        break;
      case 0x13u:
        v17 = *((_BYTE *)this + 308);
        v18 = 4;
        v19 = v17 & 4;
        if ( !(_DWORD)a4 )
        {
          if ( !v19 )
            return v5;
          v9 = v17 & 0xFB;
          goto LABEL_77;
        }
        break;
      case 0x14u:
        if ( a4 + 1 <= 2 )
        {
          if ( *((_DWORD *)this + 68) == (_DWORD)a4 )
            return v5;
          *((_DWORD *)this + 68) = a4;
          goto LABEL_17;
        }
        return (unsigned int)-1073741811;
      default:
        if ( a3 - 21 <= 1 )
        {
          if ( a4 + 1 <= 2 )
          {
            if ( *((_DWORD *)this + 69) == (_DWORD)a4 )
              return v5;
            *((_DWORD *)this + 69) = a4;
            goto LABEL_17;
          }
          return (unsigned int)-1073741811;
        }
        return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                               this,
                               a2,
                               a3,
                               a4,
                               a5);
    }
    if ( v19 )
      return v5;
    v9 = v18 | v17;
    goto LABEL_77;
  }
  if ( a3 != 37 )
  {
    switch ( a3 )
    {
      case '&':
        v13 = *((_BYTE *)this + 308) & 0xBF | (a4 != 0 ? 0x40 : 0);
        *((_DWORD *)this + 4) |= 0x800000u;
        *((_BYTE *)this + 308) = v13;
LABEL_20:
        *a5 = 1;
        return v5;
      case ')':
        v22 = *((_BYTE *)this + 308);
        if ( (v22 & 1) == ((_DWORD)a4 != 0) )
          return v5;
        *((_DWORD *)this + 4) |= 0x8000000u;
        *((_BYTE *)this + 308) = ((_DWORD)a4 != 0) | v22 & 0xFE;
        goto LABEL_20;
      case '*':
        if ( *((_DWORD *)this + 70) == (_DWORD)a4 )
          return v5;
        *((_DWORD *)this + 4) |= 0x10000000u;
        *((_DWORD *)this + 70) = a4;
        goto LABEL_20;
      case '+':
        if ( ((_DWORD)a4 != 0) == (*((_BYTE *)this + 309) & 1) )
          return v5;
        v15 = (_DWORD)a4 != 0;
        v16 = *((_BYTE *)this + 309) & 0xFE;
        break;
      case '0':
        v20 = *((_BYTE *)this + 308);
        v21 = v20 & 0x20;
        if ( (_DWORD)a4 )
        {
          if ( v21 )
            return v5;
          v9 = v20 | 0x20;
        }
        else
        {
          if ( !v21 )
            return v5;
          v9 = v20 & 0xDF;
        }
        *((_DWORD *)this + 4) |= 0x20000u;
        goto LABEL_29;
      case '3':
        if ( ((_DWORD)a4 != 0) == ((*((unsigned __int8 *)this + 309) >> 1) & 1) )
          return v5;
        v15 = (_DWORD)a4 != 0 ? 2 : 0;
        v16 = *((_BYTE *)this + 309) & 0xFD;
        break;
      default:
        return (unsigned int)DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
                               this,
                               a2,
                               a3,
                               a4,
                               a5);
    }
    *((_DWORD *)this + 4) |= 0x10000u;
    *((_BYTE *)this + 309) = v16 | v15;
    goto LABEL_20;
  }
  v10 = *((_BYTE *)this + 308);
  v11 = v10 & 0x10;
  if ( (_DWORD)a4 )
  {
    if ( v11 )
      return v5;
    v9 = v10 | 0x10;
    goto LABEL_28;
  }
  if ( v11 )
  {
    v9 = v10 & 0xEF;
    goto LABEL_28;
  }
  return v5;
}
