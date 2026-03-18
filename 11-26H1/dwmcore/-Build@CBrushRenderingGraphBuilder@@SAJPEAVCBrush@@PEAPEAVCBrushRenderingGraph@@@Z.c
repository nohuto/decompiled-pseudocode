/*
 * XREFs of ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18015B284
 * Callers:
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x18015A460 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x18015AB10 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z @ 0x1801D79E0 (-EnsureBrushGraph@CNineGridBrush@@MEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z @ 0x18027EBA0 (-EnsureBrushGraph@CRadialGradientBrush@@EEAAJ_N@Z.c)
 *     ?EnsureBrushGraph@CClipBrush@@MEAAJ_N@Z @ 0x180289320 (-EnsureBrushGraph@CClipBrush@@MEAAJ_N@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBrushRenderingGraph@@IEAA@XZ @ 0x18015B360 (--0CBrushRenderingGraph@@IEAA@XZ.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x18015B3D0 (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraphBuilder::Build(struct CBrush *a1, struct CBrushRenderingGraph **a2)
{
  CBrushRenderingGraph *v4; // rax
  CBrushRenderingGraph *v5; // rax
  struct CBrushRenderingGraph *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  struct CBrushRenderingGraph *v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+38h] [rbp-10h]

  v4 = (CBrushRenderingGraph *)MIDL_user_allocate(0xD8uLL);
  if ( v4 && (v5 = CBrushRenderingGraph::CBrushRenderingGraph(v4), (v6 = v5) != 0LL) )
  {
    (**(void (__fastcall ***)(CBrushRenderingGraph *))v5)(v5);
    v10 = v6;
    v11 = 0;
    v7 = CBrushRenderingGraphBuilder::Build((CBrushRenderingGraphBuilder *)&v10, a1);
    v8 = v7;
    if ( v7 >= 0 )
    {
      *a2 = v6;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x19u, 0LL);
      (*(void (__fastcall **)(struct CBrushRenderingGraph *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v8;
}
