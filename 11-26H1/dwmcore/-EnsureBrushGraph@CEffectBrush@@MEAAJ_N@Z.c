/*
 * XREFs of ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x18015AB10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18015B284 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 *     ?CalculateIsOpaque@CEffectBrush@@AEBA_NXZ @ 0x18015C41C (-CalculateIsOpaque@CEffectBrush@@AEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectBrush::EnsureBrushGraph(CEffectBrush *this, char a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  char IsOpaque; // al
  char v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0;
  if ( !a2
    || (IsOpaque = (*(__int64 (__fastcall **)(CEffectBrush *, _QWORD, char *))(*(_QWORD *)this + 320LL))(this, 0LL, &v7)) != 0 )
  {
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 10);
    v3 = CBrushRenderingGraphBuilder::Build(this, (struct CBrushRenderingGraph **)this + 10);
    v4 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x2Du, 0LL);
      return v4;
    }
    IsOpaque = CEffectBrush::CalculateIsOpaque(this);
  }
  *((_BYTE *)this + 256) = IsOpaque;
  return 0;
}
