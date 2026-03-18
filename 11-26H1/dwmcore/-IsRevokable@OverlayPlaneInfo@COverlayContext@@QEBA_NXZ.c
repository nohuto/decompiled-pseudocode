/*
 * XREFs of ?IsRevokable@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x1801DE730
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x1801E6704 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall COverlayContext::OverlayPlaneInfo::IsRevokable(COverlayContext::OverlayPlaneInfo *this)
{
  char v1; // bl

  v1 = 0;
  if ( !*((_DWORD *)this + 87) )
    return (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 152LL))(*((_QWORD *)this + 2)) != 0;
  return v1;
}
