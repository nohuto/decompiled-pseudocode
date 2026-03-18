/*
 * XREFs of ?DoesContain@CTreeDirty@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A1EF8
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x1801E6704 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CTreeDirty::DoesContain(__int64 a1, float *a2)
{
  float *i; // rax
  float v3; // xmm1_4
  float v4; // xmm3_4
  float v5; // xmm2_4

  if ( *(_BYTE *)(a1 + 2324) )
    return 1;
  if ( a1 == -20 && MEMORY[0xFFFFFFFFFFFFFFFC] )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  for ( i = (float *)(a1 + 28); i - 2 != (float *)(a1 + 20 + 16LL * *(unsigned int *)(a1 + 16)); i += 4 )
  {
    v3 = a2[2];
    if ( v3 <= *a2 )
      return 1;
    v4 = a2[3];
    v5 = a2[1];
    if ( v4 <= v5 || *a2 >= *(i - 2) && v5 >= *(i - 1) && *i >= v3 && i[1] >= v4 )
      return 1;
  }
  return 0;
}
