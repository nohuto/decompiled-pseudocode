/*
 * XREFs of VidSchiUpdateDdiHwContextPriority @ 0x14011C670
 * Callers:
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x14002C758 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchSetAbsolutePriorityHwContext @ 0x1400C42E0 (VidSchSetAbsolutePriorityHwContext.c)
 *     VidSchSetInProcessPriorityHwContext @ 0x14011C4B0 (VidSchSetInProcessPriorityHwContext.c)
 *     VidSchSetPriorityHwContext @ 0x14011C570 (VidSchSetPriorityHwContext.c)
 * Callees:
 *     ?VidSchiUpdateHwQueueInteractiveState@@YAXPEAUVIDSCH_HW_CONTEXT@@W4_DXGK_SCHEDULING_PRIORITY_BAND@@1@Z @ 0x140057700 (-VidSchiUpdateHwQueueInteractiveState@@YAXPEAUVIDSCH_HW_CONTEXT@@W4_DXGK_SCHEDULING_PRIORITY_BAN.c)
 *     VidSchiUpdateDdiHwContextPriorityUnifiedModel @ 0x14009B61C (VidSchiUpdateDdiHwContextPriorityUnifiedModel.c)
 *     VidSchiUpdateDdiHwContextPriorityLegacyModel @ 0x14012381C (VidSchiUpdateDdiHwContextPriorityLegacyModel.c)
 */

void __fastcall VidSchiUpdateDdiHwContextPriority(struct VIDSCH_HW_CONTEXT *a1)
{
  enum _DXGK_SCHEDULING_PRIORITY_BAND v2; // edi

  v2 = *((_DWORD *)a1 + 26);
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 40LL) + 7085LL) )
    VidSchiUpdateDdiHwContextPriorityUnifiedModel((__int64)a1);
  else
    VidSchiUpdateDdiHwContextPriorityLegacyModel();
  VidSchiUpdateHwQueueInteractiveState(a1, v2, *((enum _DXGK_SCHEDULING_PRIORITY_BAND *)a1 + 26));
}
