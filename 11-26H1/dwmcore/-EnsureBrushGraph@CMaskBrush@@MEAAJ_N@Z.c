/*
 * XREFs of ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x18015A460
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180158FC0 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18015B284 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 */

__int64 __fastcall CMaskBrush::EnsureBrushGraph(CMaskBrush *this, char a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  bool v6; // [rsp+48h] [rbp+10h] BYREF

  if ( (!a2 || (unsigned __int8)CMaskBrush::IsReadyToDraw(this, 0LL, &v6))
    && (Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 10),
        v3 = CBrushRenderingGraphBuilder::Build(this, (struct CBrushRenderingGraph **)this + 10),
        v4 = v3,
        v3 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x138u, 0LL);
  }
  else
  {
    return 0;
  }
  return v4;
}
