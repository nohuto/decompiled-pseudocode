/*
 * XREFs of ?HasBlurredWallpaperBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x18015D318
 * Callers:
 *     ?HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18015D560 (-HasBlurredWallpaperBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 * Callees:
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x18015D454 (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CRenderingTechniqueFragment::HasBlurredWallpaperBackdropInput(
        CRenderingTechniqueFragment *this,
        const struct CBrushRenderingGraph *a2)
{
  char v2; // bl
  __int64 v4; // rsi
  unsigned int i; // edi
  __int64 v7; // rax
  struct CBrush *NamedInput; // rax

  v2 = 0;
  v4 = (__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 4;
  for ( i = 0; i < (unsigned int)v4; ++i )
  {
    v7 = *((_QWORD *)this + 4);
    if ( !*(_QWORD *)(v7 + 16LL * i + 8) && !*(_BYTE *)(v7 + 16LL * i + 4) )
    {
      NamedInput = CBrushRenderingGraph::GetNamedInput(a2, *(_DWORD *)(v7 + 16LL * i));
      if ( NamedInput )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)NamedInput + 64LL))(
               NamedInput,
               14LL) )
        {
          return 1;
        }
      }
    }
  }
  return v2;
}
