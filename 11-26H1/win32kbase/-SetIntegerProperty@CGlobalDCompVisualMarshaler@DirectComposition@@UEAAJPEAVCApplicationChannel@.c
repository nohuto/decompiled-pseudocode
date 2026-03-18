/*
 * XREFs of ?SetIntegerProperty@CGlobalDCompVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140236D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGlobalDCompVisualMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _BYTE *a5)
{
  unsigned int v5; // edx
  int v6; // r8d

  v5 = 0;
  if ( a3 )
  {
    v6 = a3 - 2;
    if ( v6 )
    {
      if ( v6 != 1 )
        return (unsigned int)-1073741811;
      if ( *(_DWORD *)(a1 + 84) == (_DWORD)a4 )
        return v5;
      *(_DWORD *)(a1 + 16) |= 0x200u;
      *(_DWORD *)(a1 + 84) = a4;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 80) == ((_DWORD)a4 != 0) )
        return v5;
      *(_DWORD *)(a1 + 16) |= 0x100u;
      *(_BYTE *)(a1 + 80) = (_DWORD)a4 != 0;
    }
    *a5 = 1;
    return v5;
  }
  if ( *(_QWORD *)(a1 + 56) != a4 )
  {
    *(_DWORD *)(a1 + 16) |= 0x40u;
    *(_QWORD *)(a1 + 56) = a4;
    *a5 = 1;
  }
  return v5;
}
