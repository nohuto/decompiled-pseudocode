/*
 * XREFs of ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x140024660
 * Callers:
 *     <none>
 * Callees:
 *     ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@XZ @ 0x1400246B0 (-Map@SURFACE@@QEAA-AW4SurfaceMapStatus@1@XZ.c)
 */

__int64 __fastcall SURFREFVIEW::bMap(SURFREFVIEW *this, struct _SURFOBJ *a2)
{
  int v3; // eax

  if ( a2 )
  {
    *(_QWORD *)this = (char *)a2 - 24;
    v3 = SURFACE::Map();
    *((_DWORD *)this + 2) = v3;
    if ( v3 != 2 )
      return 1LL;
    *(_QWORD *)this = 0LL;
  }
  return 0LL;
}
