/*
 * XREFs of ?SetIntegerProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140236AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureControllerMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d

  v5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 3;
    if ( v7 )
    {
      if ( v7 != 5 )
        return (unsigned int)-1073741811;
      if ( *(_BYTE *)(a1 + 136) == (a4 != 0) )
        return v5;
      *(_DWORD *)(a1 + 16) |= 0x4000u;
      *(_BYTE *)(a1 + 136) = a4 != 0;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 88) == (a4 != 0) )
        return v5;
      *(_DWORD *)(a1 + 16) |= 0x400u;
      *(_BYTE *)(a1 + 88) = a4 != 0;
    }
    *a5 = 1;
    return v5;
  }
  if ( *(_BYTE *)(a1 + 64) != (a4 != 0) )
  {
    *(_DWORD *)(a1 + 16) |= 0x80u;
    *(_BYTE *)(a1 + 64) = a4 != 0;
    *a5 = 1;
  }
  return v5;
}
