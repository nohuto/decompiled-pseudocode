/*
 * XREFs of ?EnableDirectFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K_NPEAVIOverlaySwapChain@@@Z @ 0x1801DF8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NPEAVIOverlaySwapChain@@@Z @ 0x1801DC4FC (-EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NPEAVIOverlaySwapChain@@@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::EnableDirectFlip(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        unsigned __int8 a3,
        struct IOverlaySwapChain *a4)
{
  int v4; // eax
  unsigned int v5; // ebx

  if ( a2 != *((_QWORD *)this + 17) || *((_BYTE *)this + 299) )
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x137u, 0LL);
  }
  else
  {
    v4 = CGlobalCompositionSurfaceInfo::CBindInfo::EnableDirectFlip(
           (CGlobalCompositionSurfaceInfo *)((char *)this + 112),
           a3,
           a4);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x133u, 0LL);
  }
  return v5;
}
