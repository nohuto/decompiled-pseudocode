/*
 * XREFs of ?SetIntegerProperty@CCompositionSurfaceBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14019FF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSurfaceBitmapMarshaler::SetIntegerProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _BYTE *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d
  int v7; // r8d
  void *v8; // rcx

  v5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        v8 = *(void **)(a1 + 56);
        if ( v8 )
          return (unsigned int)DxgkSetCompositionSurfaceInkCookie(v8, a4);
        else
          return (unsigned int)-1073741811;
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
    else if ( (a4 != 0) != *(_BYTE *)(a1 + 65) )
    {
      *(_BYTE *)(a1 + 65) = a4 != 0;
      *a5 = 1;
    }
  }
  else if ( (a4 != 0) != *(_BYTE *)(a1 + 64) )
  {
    *(_BYTE *)(a1 + 64) = a4 != 0;
    *a5 = 1;
  }
  return v5;
}
