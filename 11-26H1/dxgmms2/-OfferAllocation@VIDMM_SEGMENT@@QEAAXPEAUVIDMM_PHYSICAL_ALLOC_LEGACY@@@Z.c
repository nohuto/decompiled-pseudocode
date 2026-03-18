/*
 * XREFs of ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14011B414
 * Callers:
 *     OfferResources @ 0x14011B3B8 (OfferResources.c)
 * Callees:
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010E9E4 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_SEGMENT::OfferAllocation(VIDMM_GLOBAL **this, struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2)
{
  __int64 v3; // rdx
  char *v4; // rcx
  char **v5; // rdx
  char *v6; // rax

  v3 = *(_QWORD *)a2;
  if ( *(_DWORD *)(v3 + 288) == 1 )
  {
    if ( *(_WORD *)(*(_QWORD *)(v3 + 368) + 8LL) == 2 )
    {
      *(_DWORD *)(v3 + 24) |= 0x4000000u;
      VIDMM_GLOBAL::MarkGlobalAllocation(this[1], (struct VIDMM_GLOBAL_ALLOC *)v3);
    }
  }
  else
  {
    if ( *(_DWORD *)(v3 + 288) == 2 )
    {
      v4 = (char *)(this + 39);
    }
    else
    {
      if ( *(_DWORD *)(v3 + 288) != 3 )
        return;
      v4 = (char *)(this + 41);
    }
    v5 = (char **)*((_QWORD *)v4 + 1);
    v6 = (char *)a2 + 96;
    if ( *v5 != v4 )
      __fastfail(3u);
    *(_QWORD *)v6 = v4;
    *((_QWORD *)a2 + 13) = v5;
    *v5 = v6;
    *((_QWORD *)v4 + 1) = v6;
  }
}
