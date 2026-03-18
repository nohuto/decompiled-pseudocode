/*
 * XREFs of ??0OverlayPlaneInfo@COverlayContext@@QEAA@AEBV01@@Z @ 0x180197194
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x1801E6704 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?PushCandidates@COverlayContext@@IEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023D53C (-PushCandidates@COverlayContext@@IEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

COverlayContext::OverlayPlaneInfo *__fastcall COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(
        COverlayContext::OverlayPlaneInfo *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = *(_QWORD *)a2;
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  v4 = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 2) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *((_QWORD *)this + 3) = *((_QWORD *)a2 + 3);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  *((_OWORD *)this + 9) = *((_OWORD *)a2 + 9);
  *((_OWORD *)this + 10) = *((_OWORD *)a2 + 10);
  *((_OWORD *)this + 11) = *((_OWORD *)a2 + 11);
  *((_OWORD *)this + 12) = *((_OWORD *)a2 + 12);
  *((_OWORD *)this + 13) = *((_OWORD *)a2 + 13);
  *((_DWORD *)this + 56) = *((_DWORD *)a2 + 56);
  *(_OWORD *)((char *)this + 228) = *(_OWORD *)((char *)a2 + 228);
  *(_OWORD *)((char *)this + 244) = *(_OWORD *)((char *)a2 + 244);
  *(_OWORD *)((char *)this + 260) = *(_OWORD *)((char *)a2 + 260);
  *((_DWORD *)this + 69) = *((_DWORD *)a2 + 69);
  *(_OWORD *)((char *)this + 280) = *(_OWORD *)((char *)a2 + 280);
  *(_OWORD *)((char *)this + 296) = *(_OWORD *)((char *)a2 + 296);
  *(_OWORD *)((char *)this + 312) = *(_OWORD *)((char *)a2 + 312);
  *(_OWORD *)((char *)this + 328) = *(_OWORD *)((char *)a2 + 328);
  *((_DWORD *)this + 86) = *((_DWORD *)a2 + 86);
  *((_DWORD *)this + 87) = *((_DWORD *)a2 + 87);
  *((_QWORD *)this + 44) = *((_QWORD *)a2 + 44);
  *((_BYTE *)this + 360) = *((_BYTE *)a2 + 360);
  *((_BYTE *)this + 361) = *((_BYTE *)a2 + 361);
  *((_BYTE *)this + 362) = *((_BYTE *)a2 + 362);
  *((_BYTE *)this + 363) = *((_BYTE *)a2 + 363);
  *((_BYTE *)this + 364) = *((_BYTE *)a2 + 364);
  *((_BYTE *)this + 365) = *((_BYTE *)a2 + 365);
  *((_BYTE *)this + 366) = *((_BYTE *)a2 + 366);
  *((_DWORD *)this + 92) = *((_DWORD *)a2 + 92);
  *((_DWORD *)this + 93) = *((_DWORD *)a2 + 93);
  *((_DWORD *)this + 94) = *((_DWORD *)a2 + 94);
  *((_DWORD *)this + 95) = *((_DWORD *)a2 + 95);
  *((_DWORD *)this + 96) = *((_DWORD *)a2 + 96);
  return this;
}
