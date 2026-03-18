/*
 * XREFs of ?IsCandidateSupportedSingleton@COverlayContext@@KA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAVOverlayPlaneInfo@1@@Z @ 0x18023CC48
 * Callers:
 *     ?InitCheckCandidatesList@COverlayContext@@KA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801E6DD4 (-InitCheckCandidatesList@COverlayContext@@KA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ?CalcDesktopPlaneClip@COverlayContext@@IEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x180239620 (-CalcDesktopPlaneClip@COverlayContext@@IEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@KA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@3@@Z @ 0x18023A8A0 (-CheckMultiPlaneOverlaySupport@COverlayContext@@KA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@AE.c)
 */

bool __fastcall COverlayContext::IsCandidateSupportedSingleton(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // r8
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 *v6; // rsi
  unsigned __int64 *v7; // rdx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = (_QWORD *)a2;
  v2 = (_QWORD *)a2;
  if ( *(_BYTE *)(a2 + 362) )
    return 1;
  v4 = (__int64 *)a1[1];
  v9[1] = &v10;
  v5 = *a1;
  v9[0] = 1LL;
  v6 = &v4[v5];
  if ( v4 != v6 )
  {
    while ( 1 )
    {
      v7 = v9;
      if ( *v2 != *v4 )
        v7 = (unsigned __int64 *)&unk_180377528;
      COverlayContext::CalcDesktopPlaneClip(*v4++, v7);
      if ( v4 == v6 )
        break;
      v2 = v10;
    }
  }
  return COverlayContext::CheckMultiPlaneOverlaySupport(a1, (unsigned int *)v9) != 0;
}
