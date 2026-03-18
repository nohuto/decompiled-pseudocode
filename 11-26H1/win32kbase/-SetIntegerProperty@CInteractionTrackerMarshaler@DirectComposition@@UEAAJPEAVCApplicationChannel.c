/*
 * XREFs of ?SetIntegerProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140243C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        _BYTE *a5)
{
  unsigned int v5; // edx
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d

  v5 = 0;
  if ( a3 > 0x13 )
  {
    switch ( a3 )
    {
      case 0x16u:
        if ( *(_DWORD *)(a1 + 212) != a4 )
        {
          *(_DWORD *)(a1 + 16) &= ~0x2000u;
          *(_DWORD *)(a1 + 212) = a4;
          *a5 = 1;
        }
        return v5;
      case 0x20u:
        *(_DWORD *)(a1 + 16) &= ~0x40000u;
        *(_DWORD *)(a1 + 184) = a4;
        goto LABEL_30;
      case 0x22u:
        *(_BYTE *)(a1 + 428) &= ~2u;
        *(_DWORD *)(a1 + 16) &= ~0x80000u;
        *(_DWORD *)(a1 + 188) = a4;
        goto LABEL_30;
      case 0x2Fu:
        *(_DWORD *)(a1 + 16) &= ~0x80u;
        *(_DWORD *)(a1 + 96) = a4;
        goto LABEL_30;
      case 0x33u:
        *(_DWORD *)(a1 + 16) &= ~0x100u;
        *(_DWORD *)(a1 + 112) = a4;
        goto LABEL_30;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 19 )
  {
    *(_DWORD *)(a1 + 16) &= ~0x800u;
    *(_DWORD *)(a1 + 156) = a4;
    goto LABEL_30;
  }
  v6 = a3 - 10;
  if ( !v6 )
  {
    if ( a4 > 1 )
      return (unsigned int)-1073741811;
    if ( *(_DWORD *)(a1 + 216) == (_DWORD)a4 )
      return v5;
    *(_DWORD *)(a1 + 216) = a4;
    goto LABEL_14;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( a4 > 1 )
      return (unsigned int)-1073741811;
    if ( *(_DWORD *)(a1 + 224) == (_DWORD)a4 )
      return v5;
    *(_DWORD *)(a1 + 224) = a4;
LABEL_14:
    *(_DWORD *)(a1 + 16) &= ~0x400u;
    goto LABEL_30;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    *(_DWORD *)(a1 + 140) = a4;
    goto LABEL_14;
  }
  v9 = v8 - 4;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      *(_DWORD *)(a1 + 152) = a4;
LABEL_9:
      *(_DWORD *)(a1 + 16) &= ~0x200u;
LABEL_30:
      *a5 = 1;
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4 > 1 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)(a1 + 220) != (_DWORD)a4 )
  {
    *(_DWORD *)(a1 + 220) = a4;
    goto LABEL_9;
  }
  return v5;
}
