/*
 * XREFs of ?EnsureBrushGraph@CClipBrush@@MEAAJ_N@Z @ 0x180289320
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18015B284 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CClipBrush::EnsureBrushGraph(CClipBrush *this, char a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  char v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  if ( (!a2
     || (*(unsigned __int8 (__fastcall **)(CClipBrush *, _QWORD, char *))(*(_QWORD *)this + 320LL))(this, 0LL, &v6))
    && (Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 10),
        v3 = CBrushRenderingGraphBuilder::Build(this, (struct CBrushRenderingGraph **)this + 10),
        v4 = v3,
        v3 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x80u, 0LL);
  }
  else
  {
    return 0;
  }
  return v4;
}
