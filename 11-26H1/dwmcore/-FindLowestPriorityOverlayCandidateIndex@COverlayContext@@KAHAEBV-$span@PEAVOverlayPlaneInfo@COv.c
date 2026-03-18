/*
 * XREFs of ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@KAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x18023B370
 * Callers:
 *     ?TrimCheckCandidatesList@COverlayContext@@KA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023DFE8 (-TrimCheckCandidatesList@COverlayContext@@KA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x180146DA8 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?IsHigherProprity@COverlayContext@@KA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x18023CFD0 (-IsHigherProprity@COverlayContext@@KA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 */

__int64 __fastcall COverlayContext::FindLowestPriorityOverlayCandidateIndex(unsigned __int64 *a1)
{
  int v1; // edi
  unsigned int i; // ebp
  const struct COverlayContext::OverlayPlaneInfo *v4; // rbx
  const struct COverlayContext::OverlayPlaneInfo **v5; // rax
  bool IsHigherProprity; // al
  int v7; // ecx

  v1 = -1;
  if ( *a1 )
  {
    v1 = 0;
    for ( i = 1; i < *(_DWORD *)a1; v1 = v7 )
    {
      v4 = *(const struct COverlayContext::OverlayPlaneInfo **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                                                 a1,
                                                                 v1);
      v5 = (const struct COverlayContext::OverlayPlaneInfo **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                                                a1,
                                                                i);
      IsHigherProprity = COverlayContext::IsHigherProprity(*v5, v4);
      v7 = i;
      if ( IsHigherProprity )
        v7 = v1;
      ++i;
    }
  }
  return (unsigned int)v1;
}
