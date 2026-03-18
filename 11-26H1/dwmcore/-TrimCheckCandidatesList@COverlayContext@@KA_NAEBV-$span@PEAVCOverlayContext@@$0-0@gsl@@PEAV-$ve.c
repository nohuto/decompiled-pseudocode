/*
 * XREFs of ?TrimCheckCandidatesList@COverlayContext@@KA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023DFE8
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@KAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x1801B0D5C (-ComputeOverlayConfigurationForAdapter@COverlayContext@@KAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ?clear@?$vector_facade@PEAVCResponseItemBase@@V?$buffer_impl@PEAVCResponseItemBase@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800316C4 (-clear@-$vector_facade@PEAVCResponseItemBase@@V-$buffer_impl@PEAVCResponseItemBase@@$01$00Vliber.c)
 *     ??1?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180140ECC (--1-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$01$00Vliberal_expan.c)
 *     ?erase@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@QEAVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x180184314 (-erase@-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPlaneInfo.c)
 *     ??$?0$0?0V?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEAA@AEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18018D148 (--$-0$0-0V-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPlaneI.c)
 *     ?AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ @ 0x180194BF8 (-AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?CalcDesktopPlaneClip@COverlayContext@@IEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x180239620 (-CalcDesktopPlaneClip@COverlayContext@@IEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-.c)
 *     ?DowngradeDesktopPlaneScaling@COverlayContext@@QEAAXXZ @ 0x18023B004 (-DowngradeDesktopPlaneScaling@COverlayContext@@QEAAXXZ.c)
 *     ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@KAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x18023B370 (-FindLowestPriorityOverlayCandidateIndex@COverlayContext@@KAHAEBV-$span@PEAVOverlayPlaneInfo@COv.c)
 *     ?GetContextCandidates@COverlayContext@@KAXPEAV1@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023BE04 (-GetContextCandidates@COverlayContext@@KAXPEAV1@AEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@.c)
 */

char __fastcall COverlayContext::TrimCheckCandidatesList(_QWORD *a1, __int64 *a2)
{
  char v2; // di
  __int64 v4; // rax
  COverlayContext **v6; // rdx
  COverlayContext **v7; // r8
  __int64 v8; // rdx
  COverlayContext *v9; // rcx
  COverlayContext **v10; // r14
  char v11; // r15
  COverlayContext **v12; // r12
  COverlayContext *v13; // rbx
  __int64 v15[2]; // [rsp+20h] [rbp-99h] BYREF
  __int64 v16[2]; // [rsp+30h] [rbp-89h] BYREF
  __int64 v17[3]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v18[128]; // [rsp+58h] [rbp-61h] BYREF
  __int64 v19; // [rsp+D8h] [rbp+1Fh] BYREF

  v2 = 0;
  v4 = (a2[1] - *a2) >> 3;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      detail::vector_facade<CResponseItemBase *,detail::buffer_impl<CResponseItemBase *,2,1,detail::liberal_expansion_policy>>::clear(a2);
    }
    else
    {
      gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(v15, a2);
      v16[0] = *a2 + 8LL * (int)COverlayContext::FindLowestPriorityOverlayCandidateIndex((unsigned __int64 *)v15);
      detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::erase(
        a2,
        v15,
        v16);
    }
LABEL_11:
    v10 = (COverlayContext **)a1[1];
    v11 = 0;
    v12 = &v10[*a1];
    while ( v10 != v12 )
    {
      v13 = *v10;
      v17[0] = (__int64)v18;
      v17[1] = (__int64)v18;
      v17[2] = (__int64)&v19;
      gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(v15, a2);
      COverlayContext::GetContextCandidates((__int64)v13, (__int64)v15, v17);
      gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(v16, v17);
      COverlayContext::CalcDesktopPlaneClip((__int64)v13, (unsigned __int64 *)v16);
      if ( COverlayContext::AnyDesktopPlaneScaling(v13) )
        v11 = 1;
      detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,2,1,detail::liberal_expansion_policy>>::~vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,2,1,detail::liberal_expansion_policy>>(v17);
      ++v10;
    }
    if ( a2[1] != *a2 || v11 )
      return 1;
  }
  else
  {
    v6 = (COverlayContext **)a1[1];
    v7 = &v6[*a1];
    while ( v6 != v7 )
    {
      if ( COverlayContext::AnyDesktopPlaneScaling(*v6) )
      {
        COverlayContext::DowngradeDesktopPlaneScaling(v9);
        goto LABEL_11;
      }
      v6 = (COverlayContext **)(v8 + 8);
    }
  }
  return v2;
}
