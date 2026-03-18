/*
 * XREFs of ?ComputeOverlayConfigurationForAdapter@COverlayContext@@KAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x1801B0D5C
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180141868 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180140ECC (--1-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$01$00Vliberal_expan.c)
 *     ??$?0$0?0V?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEAA@AEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18018D148 (--$-0$0-0V-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPlaneI.c)
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@IEAA_NXZ @ 0x1801B0E14 (-HaveOverlayCandidatesChanged@COverlayContext@@IEAA_NXZ.c)
 *     ?InitCheckCandidatesList@COverlayContext@@KA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801E6DD4 (-InitCheckCandidatesList@COverlayContext@@KA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@KA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18023A8A0 (-CheckMultiPlaneOverlaySupport@COverlayContext@@KA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 *     ?PushCandidates@COverlayContext@@IEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023D53C (-PushCandidates@COverlayContext@@IEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@IEAAXXZ @ 0x18023D6B4 (-ReleaseObsoletePlaneAssignments@COverlayContext@@IEAAXXZ.c)
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@IEAAJXZ @ 0x18023DDF8 (-TransferCandidatesToPlaneAssignments@COverlayContext@@IEAAJXZ.c)
 *     ?TrimCheckCandidatesList@COverlayContext@@KA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023DFE8 (-TrimCheckCandidatesList@COverlayContext@@KA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 */

__int64 __fastcall COverlayContext::ComputeOverlayConfigurationForAdapter(_QWORD *a1)
{
  COverlayContext **v1; // rdi
  unsigned int v3; // esi
  COverlayContext **v4; // r14
  char v6; // r14
  unsigned int v7; // edi
  char i; // al
  _QWORD *v9; // rdi
  _QWORD *v10; // r15
  unsigned __int64 v11; // r14
  COverlayContext **v12; // rdi
  COverlayContext **v13; // r14
  COverlayContext **v14; // rdi
  COverlayContext **v15; // rbx
  int v16; // eax
  __int64 v17[2]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v18[3]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v19[128]; // [rsp+60h] [rbp-41h] BYREF
  __int64 v20; // [rsp+E0h] [rbp+3Fh] BYREF

  v1 = (COverlayContext **)a1[1];
  v3 = 0;
  v4 = &v1[*a1];
  while ( v1 != v4 )
  {
    if ( COverlayContext::HaveOverlayCandidatesChanged(*v1) )
    {
      v6 = 0;
      v18[0] = (__int64)v19;
      v7 = 0;
      v18[1] = (__int64)v19;
      v18[2] = (__int64)&v20;
      for ( i = COverlayContext::InitCheckCandidatesList(a1, v18);
            i && v7 <= 8;
            i = COverlayContext::TrimCheckCandidatesList(a1, v18) )
      {
        gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(v17, v18);
        if ( (unsigned __int8)COverlayContext::CheckMultiPlaneOverlaySupport(a1, v17) )
        {
          v6 = 1;
          break;
        }
        ++v7;
      }
      v9 = (_QWORD *)a1[1];
      v10 = &v9[*a1];
      if ( v9 != v10 )
      {
        v11 = (unsigned __int64)v18 & -(__int64)(v6 != 0);
        do
          COverlayContext::PushCandidates(*v9++, v11);
        while ( v9 != v10 );
      }
      v12 = (COverlayContext **)a1[1];
      v13 = &v12[*a1];
      while ( v12 != v13 )
        COverlayContext::ReleaseObsoletePlaneAssignments(*v12++);
      v14 = (COverlayContext **)a1[1];
      v15 = &v14[*a1];
      while ( v14 != v15 )
      {
        v16 = COverlayContext::TransferCandidatesToPlaneAssignments(*v14);
        v3 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x81Bu, 0LL);
          break;
        }
        ++v14;
      }
      detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,2,1,detail::liberal_expansion_policy>>::~vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,2,1,detail::liberal_expansion_policy>>(v18);
      return v3;
    }
    ++v1;
  }
  return v3;
}
