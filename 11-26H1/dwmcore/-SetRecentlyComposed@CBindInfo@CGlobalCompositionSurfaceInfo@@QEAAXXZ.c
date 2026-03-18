/*
 * XREFs of ?SetRecentlyComposed@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x180191780
 * Callers:
 *     ?SetRecentlyComposed@CGlobalCompositionSurfaceInfo@@UEAAXXZ @ 0x180191770 (-SetRecentlyComposed@CGlobalCompositionSurfaceInfo@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::SetRecentlyComposed(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  __int64 v1; // rax
  bool v2; // zf

  v1 = 0LL;
  if ( g_pComposition )
    v1 = *((_QWORD *)g_pComposition + 110);
  v2 = *((_BYTE *)this + 180) == 0;
  *((_QWORD *)this + 20) = v1;
  if ( !v2 && !*((_BYTE *)this + 181) && *((int *)this + 44) >= 2 )
    CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipNotify(this, 1);
}
