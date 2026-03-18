/*
 * XREFs of ?EnableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_KII@Z @ 0x1801C11B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJI@Z @ 0x1801C1230 (-EnableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJI@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::EnableIndependentFlip(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        int a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // ebx

  if ( a2 == *((_QWORD *)this + 17) && !*((_BYTE *)this + 292) && a3 == *((_DWORD *)this + 80) )
  {
    v4 = CGlobalCompositionSurfaceInfo::CBindInfo::EnableIndependentFlip(
           (CGlobalCompositionSurfaceInfo *)((char *)this + 112),
           a4);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x1CFu, 0LL);
  }
  else
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x1D3u, 0LL);
  }
  return v5;
}
