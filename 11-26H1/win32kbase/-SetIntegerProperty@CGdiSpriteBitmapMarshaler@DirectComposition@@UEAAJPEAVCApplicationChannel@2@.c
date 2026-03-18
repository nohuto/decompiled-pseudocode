/*
 * XREFs of ?SetIntegerProperty@CGdiSpriteBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14019B6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGdiSpriteBitmapMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
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
      if ( *(_QWORD *)(a1 + 88) == a4 )
        return v5;
      *(_DWORD *)(a1 + 16) |= 0x100u;
      *(_QWORD *)(a1 + 88) = a4;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 84) == ((_DWORD)a4 != 0) )
        return v5;
      *(_DWORD *)(a1 + 16) |= 0x80u;
      *(_BYTE *)(a1 + 84) = (_DWORD)a4 != 0;
    }
    *a5 = 1;
    return v5;
  }
  if ( *(_DWORD *)(a1 + 80) != (_DWORD)a4 )
  {
    *(_DWORD *)(a1 + 16) |= 0x40u;
    *(_DWORD *)(a1 + 80) = a4;
    *a5 = 1;
  }
  return v5;
}
