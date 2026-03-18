/*
 * XREFs of ?SetIntegerProperty@CCompositionSurfaceBitmapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140116BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSurfaceBitmapMarshaler::SetIntegerProperty(
        DirectComposition::CCompositionSurfaceBitmapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d
  void *v9; // rcx

  v5 = 0;
  v6 = a3 - 1;
  if ( !v6 )
  {
    if ( (a4 != 0) == *((_BYTE *)this + 64) )
      return v5;
    *((_BYTE *)this + 64) = a4 != 0;
    goto LABEL_5;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 == 1 && (v9 = (void *)*((_QWORD *)this + 7)) != 0LL )
      return (unsigned int)DxgkSetCompositionSurfaceInkCookie(v9, a4);
    else
      return (unsigned int)-1073741811;
  }
  else if ( (a4 != 0) != *((_BYTE *)this + 65) )
  {
    *((_BYTE *)this + 65) = a4 != 0;
LABEL_5:
    *a5 = 1;
  }
  return v5;
}
