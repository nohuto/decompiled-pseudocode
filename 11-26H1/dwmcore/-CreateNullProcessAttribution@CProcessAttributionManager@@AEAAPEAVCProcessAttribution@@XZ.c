/*
 * XREFs of ?CreateNullProcessAttribution@CProcessAttributionManager@@AEAAPEAVCProcessAttribution@@XZ @ 0x180192AC4
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800F0E50 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180110AD4 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

struct CProcessAttribution *__fastcall CProcessAttributionManager::CreateNullProcessAttribution(
        CProcessAttributionManager *this)
{
  char *v1; // rax
  char *v2; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (char *)DefaultHeap::AllocClear(0x88uLL);
  v2 = v1;
  if ( !v1 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *((_DWORD *)v1 + 2) = 0;
  *(_QWORD *)v1 = &CProcessAttribution::`vftable';
  *((_DWORD *)v1 + 32) = -1;
  *((_QWORD *)v1 + 2) = qword_1803DEA70;
  *(_OWORD *)(v1 + 24) = xmmword_1803DEA78;
  *((_DWORD *)v1 + 10) = dword_1803DEA88;
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v1 + 8));
  return (struct CProcessAttribution *)v2;
}
