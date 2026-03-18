/*
 * XREFs of ?SetFloatProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x1402438B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x1401B3040 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetFloatProperty(
        __int64 a1,
        unsigned int a2,
        float a3,
        _BYTE *a4)
{
  unsigned int v4; // r8d
  unsigned int v5; // eax

  v4 = 0;
  *a4 = 0;
  if ( a2 > 0x1E )
  {
    if ( a2 <= 0x30 )
    {
      if ( a2 != 48 )
      {
        if ( a2 == 31 )
        {
          v5 = *(_DWORD *)(a1 + 16) & 0xFFFBFFFF;
          *(float *)(a1 + 180) = a3;
          *(_QWORD *)(a1 + 100) = 0LL;
          *(_DWORD *)(a1 + 16) = v5 | 0x100;
          *(_QWORD *)(a1 + 108) = 0LL;
        }
        else if ( a2 == 35 )
        {
          *(float *)(a1 + 192) = a3;
        }
        else if ( a2 == 36 )
        {
          *(float *)(a1 + 196) = a3;
        }
        else
        {
          if ( a2 == 45 )
          {
            *(float *)(a1 + 88) = a3 + *(float *)(a1 + 88);
          }
          else
          {
            if ( a2 != 46 )
              return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(a1, a2, a3, a4);
            *(float *)(a1 + 92) = a3 + *(float *)(a1 + 92);
          }
          *(_DWORD *)(a1 + 16) &= ~0x80u;
        }
        goto LABEL_80;
      }
      *(float *)(a1 + 100) = a3 + *(float *)(a1 + 100);
LABEL_79:
      *(_DWORD *)(a1 + 16) &= ~0x100u;
      goto LABEL_80;
    }
    switch ( a2 )
    {
      case '1':
        *(float *)(a1 + 104) = a3;
        goto LABEL_79;
      case '2':
        *(float *)(a1 + 108) = a3;
        goto LABEL_79;
      case '>':
        if ( a3 < 0.0 || a3 > 1.0 )
          return (unsigned int)-1073741811;
        if ( *(float *)(a1 + 160) == a3 )
          return v4;
        *(float *)(a1 + 160) = a3;
        break;
      case '?':
        if ( a3 < 0.0 || a3 > 1.0 )
          return (unsigned int)-1073741811;
        if ( *(float *)(a1 + 164) == a3 )
          return v4;
        *(float *)(a1 + 164) = a3;
        break;
      case '@':
        if ( a3 >= 0.0 && a3 <= 1.0 )
        {
          if ( *(float *)(a1 + 200) == a3 )
            return v4;
          *(float *)(a1 + 200) = a3;
          break;
        }
        return (unsigned int)-1073741811;
      default:
        return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(a1, a2, a3, a4);
    }
    *(_DWORD *)(a1 + 16) &= ~0x1000000u;
    goto LABEL_80;
  }
  if ( a2 == 30 )
  {
    if ( *(float *)(a1 + 176) == a3 )
      return v4;
    *(_DWORD *)(a1 + 16) &= ~0x20000u;
    *(float *)(a1 + 176) = a3;
    goto LABEL_80;
  }
  if ( a2 > 0xF )
  {
    if ( a2 == 24 )
    {
      if ( *(float *)(a1 + 116) == a3 )
        return v4;
      *(float *)(a1 + 116) = a3;
    }
    else
    {
      if ( a2 != 25 )
      {
        switch ( a2 )
        {
          case 0x1Bu:
            if ( *(float *)(a1 + 124) == a3 )
              return v4;
            *(float *)(a1 + 124) = a3;
            break;
          case 0x1Cu:
            if ( *(float *)(a1 + 128) == a3 )
              return v4;
            *(float *)(a1 + 128) = a3;
            break;
          case 0x1Du:
            if ( *(float *)(a1 + 172) == a3 )
              return v4;
            *(_DWORD *)(a1 + 16) &= ~0x10000u;
            *(float *)(a1 + 172) = a3;
LABEL_80:
            *a4 = 1;
            return v4;
          default:
            return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(a1, a2, a3, a4);
        }
        *(_DWORD *)(a1 + 16) &= ~0x8000u;
        goto LABEL_80;
      }
      if ( *(float *)(a1 + 120) == a3 )
        return v4;
      *(float *)(a1 + 120) = a3;
    }
    *(_DWORD *)(a1 + 16) &= ~0x4000u;
    goto LABEL_80;
  }
  switch ( a2 )
  {
    case 0xFu:
      *(float *)(a1 + 148) = a3 + *(float *)(a1 + 148);
      goto LABEL_12;
    case 4u:
      if ( *(float *)(a1 + 168) == a3 )
        return v4;
      *(float *)(a1 + 168) = a3;
      goto LABEL_80;
    case 5u:
      if ( *(float *)(a1 + 80) == a3 )
        return v4;
      *(float *)(a1 + 80) = a3;
      goto LABEL_80;
    case 6u:
      if ( *(float *)(a1 + 84) == a3 )
        return v4;
      *(float *)(a1 + 84) = a3;
      goto LABEL_80;
    case 8u:
      *(float *)(a1 + 132) = a3;
      goto LABEL_15;
    case 9u:
      *(float *)(a1 + 136) = a3;
LABEL_15:
      *(_DWORD *)(a1 + 16) &= ~0x400u;
      *a4 = 1;
      *(_DWORD *)(a1 + 16) |= 0x280u;
      *(_QWORD *)(a1 + 144) = 0LL;
      *(_DWORD *)(a1 + 152) = 0;
      *(_DWORD *)(a1 + 220) = 0;
      goto LABEL_16;
  }
  if ( a2 != 14 )
    return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(a1, a2, a3, a4);
  *(float *)(a1 + 144) = a3 + *(float *)(a1 + 144);
LABEL_12:
  *(_DWORD *)(a1 + 16) &= ~0x200u;
  *a4 = 1;
  *(_DWORD *)(a1 + 16) |= 0x80u;
LABEL_16:
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  return v4;
}
