/*
 * XREFs of ?DowngradeDesktopPlaneScaling@COverlayContext@@QEAAXXZ @ 0x18023B004
 * Callers:
 *     ?TrimCheckCandidatesList@COverlayContext@@KA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023DFE8 (-TrimCheckCandidatesList@COverlayContext@@KA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CalcAttributes@DesktopPlaneInfo@COverlayContext@@QEAAXPEBVIOverlayMonitorTarget@@AEBVOverlayCaps@@_N@Z @ 0x1802392A0 (-CalcAttributes@DesktopPlaneInfo@COverlayContext@@QEAAXPEBVIOverlayMonitorTarget@@AEBVOverlayCap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::DowngradeDesktopPlaneScaling(COverlayContext *this)
{
  __int64 v2; // rax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 256LL))(*((_QWORD *)this + 7));
  if ( *(_DWORD *)(v2 + 272) == 3 )
  {
    *(_BYTE *)(v2 + 282) = 1;
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 320LL))(*((_QWORD *)this + 7));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        254LL,
        (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\engine\\global\\GlobalOverlayContext.h",
        (const char *)(unsigned int)v3);
    COverlayContext::DesktopPlaneInfo::CalcAttributes(
      (COverlayContext *)((char *)this + 18984),
      *((const struct IOverlayMonitorTarget **)this + 7),
      this,
      *((_BYTE *)this + 19360));
    *((_DWORD *)this + 4762) = 0;
  }
  else
  {
    COverlayContext::DesktopPlaneInfo::DowngradeScaling((COverlayContext *)((char *)this + 18984), this);
  }
}
