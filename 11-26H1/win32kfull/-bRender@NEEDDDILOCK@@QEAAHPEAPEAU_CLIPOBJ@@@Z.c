/*
 * XREFs of ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1401D5038
 * Callers:
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140313750 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140313DF0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall NEEDDDILOCK::bRender(NEEDDDILOCK *this, struct _CLIPOBJ **a2)
{
  __int64 v2; // rcx
  BOOL result; // eax
  SURFOBJ *v4; // rcx

  v2 = *(_QWORD *)this;
  result = 1;
  if ( v2 )
  {
    v4 = (SURFOBJ *)(v2 + 24);
    if ( v4->iType == 1 )
      return EngUpdateDeviceSurface(v4, a2);
  }
  return result;
}
