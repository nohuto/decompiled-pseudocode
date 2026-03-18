/*
 * XREFs of ?DisableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x180127AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x180127C68 (-DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::DisableOverlay(CGlobalCompositionSurfaceInfo *this, __int64 a2)
{
  unsigned int v3; // ebx
  CGlobalCompositionSurfaceInfo::CBindInfo *v4; // rcx

  v3 = 0;
  v4 = (CGlobalCompositionSurfaceInfo *)((char *)this + 112);
  if ( a2 == *((_QWORD *)v4 + 3) && *((_BYTE *)this + 299) )
  {
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableOverlay(v4);
  }
  else
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x178u, 0LL);
  }
  return v3;
}
