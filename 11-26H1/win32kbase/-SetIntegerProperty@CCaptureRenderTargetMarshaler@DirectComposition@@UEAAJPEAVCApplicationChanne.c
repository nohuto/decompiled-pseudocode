/*
 * XREFs of ?SetIntegerProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x140245BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        _BYTE *a5)
{
  unsigned int v5; // r11d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d

  v5 = 0;
  *a5 = 0;
  v6 = a3 - 4;
  if ( !v6 )
  {
    if ( (a4 != 0) == *(_BYTE *)(a1 + 56) )
      return v5;
    *(_DWORD *)(a1 + 16) |= 0x400u;
    *(_BYTE *)(a1 + 56) = a4 != 0;
    goto LABEL_14;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    if ( a4 == *(_DWORD *)(a1 + 116) )
      return v5;
    *(_DWORD *)(a1 + 16) |= 0x1000u;
    *(_DWORD *)(a1 + 116) = a4;
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a4 == *(_DWORD *)(a1 + 120) )
      return v5;
    *(_DWORD *)(a1 + 16) |= 0x2000u;
    *(_DWORD *)(a1 + 120) = a4;
    goto LABEL_14;
  }
  if ( v8 == 1 )
  {
    if ( (a4 != 0) == *(_BYTE *)(a1 + 124) )
      return v5;
    *(_DWORD *)(a1 + 16) |= 0x4000u;
    *(_BYTE *)(a1 + 124) = a4 != 0;
LABEL_14:
    *a5 = 1;
    return v5;
  }
  return (unsigned int)-1073741811;
}
