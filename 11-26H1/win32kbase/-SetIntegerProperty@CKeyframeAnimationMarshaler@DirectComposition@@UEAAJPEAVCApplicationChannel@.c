/*
 * XREFs of ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140240B50
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimationPlaybackState@@@Z @ 0x14012E750 (-UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimatio.c)
 *     ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x1401BA610 (-SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@U.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        _BYTE *a5)
{
  unsigned int updated; // ecx
  int v7; // edx

  updated = 0;
  *a5 = 0;
  if ( a3 > 0x15 )
  {
    switch ( a3 )
    {
      case 0x16u:
        if ( a4 > 4 )
          return (unsigned int)-1073741811;
        if ( *(_DWORD *)(a1 + 312) == (_DWORD)a4 )
          return updated;
        *(_DWORD *)(a1 + 312) = a4;
        break;
      case 0x1Bu:
        *(_QWORD *)(a1 + 248) = a4;
        return updated;
      case 0x1Cu:
        *(_QWORD *)(a1 + 256) = a4;
        return updated;
      case 0x1Du:
        if ( a4 > 1 )
          return (unsigned int)-1073741811;
        if ( *(_DWORD *)(a1 + 300) == (_DWORD)a4 )
          return updated;
        *(_DWORD *)(a1 + 300) = a4;
        break;
      case 0x22u:
        if ( a4 <= 1 )
        {
          if ( *(_DWORD *)(a1 + 308) != a4 )
          {
            *(_DWORD *)(a1 + 16) &= ~0x10000u;
            *(_DWORD *)(a1 + 308) = a4;
            goto LABEL_51;
          }
          return updated;
        }
        return (unsigned int)-1073741811;
      case 0x23u:
        if ( (*(_BYTE *)(a1 + 320) & 1) == (a4 != 0) )
          return updated;
        *(_BYTE *)(a1 + 320) = (a4 != 0) | *(_BYTE *)(a1 + 320) & 0xFE;
        break;
      default:
        return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(a1, a2, a3, a4, a5);
    }
LABEL_50:
    *(_DWORD *)(a1 + 16) &= ~0x1000u;
    goto LABEL_51;
  }
  if ( a3 != 21 )
  {
    switch ( a3 )
    {
      case 0xBu:
        if ( *(_DWORD *)(a1 + 264) == a4 )
          return updated;
        *(_DWORD *)(a1 + 264) = a4;
        break;
      case 0xDu:
        if ( *(_QWORD *)(a1 + 232) == a4 )
          return updated;
        *(_QWORD *)(a1 + 232) = a4;
        break;
      case 0xEu:
        if ( *(_QWORD *)(a1 + 240) == a4 )
          return updated;
        *(_QWORD *)(a1 + 240) = a4;
        break;
      case 0x12u:
        if ( a4 > 4 )
          return (unsigned int)-1073741811;
        if ( *(_DWORD *)(a1 + 292) == (_DWORD)a4 )
          return updated;
        *(_DWORD *)(a1 + 292) = a4;
        break;
      case 0x13u:
        if ( a4 > 2 )
          return (unsigned int)-1073741811;
        if ( *(_DWORD *)(a1 + 304) == (_DWORD)a4 )
          return updated;
        *(_DWORD *)(a1 + 304) = a4;
        break;
      case 0x14u:
        if ( a4 <= 2 )
        {
          if ( *(_DWORD *)(a1 + 296) == (_DWORD)a4 )
            return updated;
          v7 = a4;
          goto LABEL_12;
        }
        return (unsigned int)-1073741811;
      default:
        return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(a1, a2, a3, a4, a5);
    }
    goto LABEL_50;
  }
  if ( *(_DWORD *)(a1 + 316) == (_DWORD)a4 )
    return updated;
  *(_DWORD *)(a1 + 316) = a4;
  if ( !*(_DWORD *)(a1 + 296) )
    goto LABEL_13;
  v7 = 0;
LABEL_12:
  updated = DirectComposition::CKeyframeAnimationMarshaler::UpdatePlaybackState(a1, v7);
  if ( (updated & 0x80000000) == 0 )
  {
LABEL_13:
    *(_DWORD *)(a1 + 16) &= ~0x2000u;
LABEL_51:
    *a5 = 1;
  }
  return updated;
}
