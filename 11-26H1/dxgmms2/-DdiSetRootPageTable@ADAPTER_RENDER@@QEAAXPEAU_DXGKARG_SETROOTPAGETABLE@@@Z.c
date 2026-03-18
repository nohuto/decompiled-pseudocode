/*
 * XREFs of ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1400430E4
 * Callers:
 *     VidSchiSetPagingHwContextPageDirectory @ 0x14009AE60 (VidSchiSetPagingHwContextPageDirectory.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1400E9090 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiEnsureRootPageTableUpdated @ 0x140106870 (VidSchiEnsureRootPageTableUpdated.c)
 *     VidSchSetPagingNodePageDirectory @ 0x14011A5DC (VidSchSetPagingNodePageDirectory.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall ADAPTER_RENDER::DdiSetRootPageTable(ADAPTER_RENDER *this, struct _DXGKARG_SETROOTPAGETABLE *a2)
{
  ((void (__fastcall *)(ADAPTER_RENDER *, struct _DXGKARG_SETROOTPAGETABLE *))DxgCoreInterface[53])(this, a2);
}
