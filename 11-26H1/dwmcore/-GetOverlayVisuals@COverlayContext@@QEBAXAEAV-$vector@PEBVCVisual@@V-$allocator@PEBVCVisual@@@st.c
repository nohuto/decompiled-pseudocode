/*
 * XREFs of ?GetOverlayVisuals@COverlayContext@@QEBAXAEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x180247790
 * Callers:
 *     ?GetOverlayVisuals@CDDisplayRenderTarget@@UEBAXAEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x180247770 (-GetOverlayVisuals@CDDisplayRenderTarget@@UEBAXAEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisua.c)
 *     ?GetOverlayVisuals@CLegacyRenderTarget@@UEBAXAEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x180247780 (-GetOverlayVisuals@CLegacyRenderTarget@@UEBAXAEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z @ 0x1801B589C (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z.c)
 */

char *__fastcall COverlayContext::GetOverlayVisuals(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdi
  __int64 *v7; // rdx
  __int64 *v8; // r8
  char *result; // rax

  v4 = *(_QWORD *)(a1 + 12688);
  v6 = *(_QWORD *)(a1 + 12696);
  while ( v4 != v6 )
  {
    v7 = *(__int64 **)(a2 + 8);
    v8 = (__int64 *)(v4 + 8);
    if ( v7 == *(__int64 **)(a2 + 16) )
    {
      result = std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(
                 (void **)a2,
                 (__int64)v7,
                 v8,
                 a4);
    }
    else
    {
      result = (char *)*v8;
      *v7 = *v8;
      *(_QWORD *)(a2 + 8) += 8LL;
    }
    v4 += 392LL;
  }
  return result;
}
