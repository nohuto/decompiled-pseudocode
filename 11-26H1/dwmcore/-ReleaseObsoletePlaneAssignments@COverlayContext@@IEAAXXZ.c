/*
 * XREFs of ?ReleaseObsoletePlaneAssignments@COverlayContext@@IEAAXXZ @ 0x18023D6B4
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@KAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x1801B0D5C (-ComputeOverlayConfigurationForAdapter@COverlayContext@@KAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ?GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800CDBA0 (-GetLocalClipRect@OverlayPlaneInfo@COverlayContext@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@IEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z @ 0x180216D50 (-FindOverlayCandidateIndex@COverlayContext@@IEBAHPEBVCVisual@@PEBVCCompositionSurfaceInfo@@_K@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::ReleaseObsoletePlaneAssignments(COverlayContext *this)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdi
  const struct CCompositionSurfaceInfo *v6; // r14
  _BYTE v7[16]; // [rsp+20h] [rbp-38h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 256LL))(*((_QWORD *)this + 7));
  v3 = *((_QWORD *)this + 1586);
  v4 = v2;
  v5 = *((_QWORD *)this + 1587);
  while ( v3 != v5 )
  {
    v6 = *(const struct CCompositionSurfaceInfo **)(v3 + 16);
    if ( (unsigned int)COverlayContext::FindOverlayCandidateIndex(
                         this,
                         *(const struct CVisual **)(v3 + 8),
                         v6,
                         *(_QWORD *)(v3 + 24)) == -1 )
    {
      (*(void (__fastcall **)(const struct CCompositionSurfaceInfo *, _QWORD))(*(_QWORD *)v6 + 288LL))(
        v6,
        *(_QWORD *)(v3 + 24));
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 + 16) + 464LL))(*(_QWORD *)(v3 + 16), 2LL);
      COverlayContext::OverlayPlaneInfo::GetLocalClipRect(v3, (__int64)v7, v4 + 136);
      (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 7) + 304LL))(*((_QWORD *)this + 7), v7);
    }
    v3 += 392LL;
  }
}
