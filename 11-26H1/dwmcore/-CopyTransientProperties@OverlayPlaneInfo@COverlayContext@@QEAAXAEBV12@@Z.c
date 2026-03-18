/*
 * XREFs of ?CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z @ 0x18019E18C
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x1801E6704 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
        COverlayContext::OverlayPlaneInfo *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  *(_OWORD *)((char *)this + 260) = *(_OWORD *)((char *)a2 + 260);
  *((_DWORD *)this + 69) = *((_DWORD *)a2 + 69);
  *((_BYTE *)this + 362) = *((_BYTE *)a2 + 362);
  *((_DWORD *)this + 92) = *((_DWORD *)a2 + 92);
  *((_BYTE *)this + 365) = *((_BYTE *)a2 + 365);
  *((_DWORD *)this + 96) = *((_DWORD *)a2 + 96);
  *((_BYTE *)this + 363) = *((_BYTE *)a2 + 363);
  *((_BYTE *)this + 364) = *((_BYTE *)a2 + 364);
  *((_DWORD *)this + 93) = *((_DWORD *)a2 + 93);
  *((_DWORD *)this + 94) = *((_DWORD *)a2 + 94);
  *((_BYTE *)this + 366) = *((_BYTE *)a2 + 366);
  *((_DWORD *)this + 95) = *((_DWORD *)a2 + 95);
}
