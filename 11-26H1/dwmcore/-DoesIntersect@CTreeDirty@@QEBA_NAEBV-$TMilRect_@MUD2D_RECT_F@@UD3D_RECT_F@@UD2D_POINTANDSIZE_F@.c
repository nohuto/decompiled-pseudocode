/*
 * XREFs of ?DoesIntersect@CTreeDirty@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180190228
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x1801E6704 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?GetSyncLockCount@CLegacyRenderTarget@@UEBAI_KI@Z @ 0x180252F30 (-GetSyncLockCount@CLegacyRenderTarget@@UEBAI_KI@Z.c)
 *     ?GetSyncLockCount@CDDisplayRenderTarget@@UEBAI_KI@Z @ 0x180253EC0 (-GetSyncLockCount@CDDisplayRenderTarget@@UEBAI_KI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CTreeDirty::DoesIntersect(__int64 a1, float *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  float *v4; // rax
  float *i; // rcx
  float *v6; // r8
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm2_4

  if ( *(_BYTE *)(a1 + 2324) )
    return 1;
  v2 = *(unsigned int *)(a1 + 16);
  v3 = a1 + 20;
  if ( !v3 && v2 )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  v4 = (float *)(v3 + 16 * v2);
  for ( i = (float *)(v3 + 4); ; i += 4 )
  {
    v6 = i - 1;
    if ( i - 1 == v4 )
      break;
    v7 = a2[2];
    if ( v7 > *a2 )
    {
      v8 = a2[3];
      if ( v8 > a2[1] )
      {
        v9 = i[1];
        if ( v9 > *v6 )
        {
          v10 = i[2];
          if ( v10 > *i && v7 > *v6 && v9 > *a2 && v8 > *i && v10 > a2[1] )
            return 1;
        }
      }
    }
  }
  return 0;
}
