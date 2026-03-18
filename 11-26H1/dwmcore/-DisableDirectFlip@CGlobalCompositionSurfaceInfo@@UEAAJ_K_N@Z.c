/*
 * XREFs of ?DisableDirectFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K_N@Z @ 0x180266520
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1802664B4 (-DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::DisableDirectFlip(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        char a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a2 == *((_QWORD *)this + 17) && *((_BYTE *)this + 298) )
  {
    CGlobalCompositionSurfaceInfo::CBindInfo::DisableDirectFlip(
      (CGlobalCompositionSurfaceInfo *)((char *)this + 112),
      a3);
  }
  else
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x14Bu, 0LL);
  }
  return v3;
}
