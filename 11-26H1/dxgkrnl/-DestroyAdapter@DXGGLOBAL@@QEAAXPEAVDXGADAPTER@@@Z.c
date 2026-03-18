/*
 * XREFs of ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14037C198
 * Callers:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x140045F64 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     DXGGLOBAL_DestroyAdapter @ 0x140074F90 (DXGGLOBAL_DestroyAdapter.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1402E91E4 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x14037AFC0 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 *     ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x14037B2A8 (--1DXGADAPTERSYNCOBJECT@@QEAA@XZ.c)
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x14037B3A0 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 *     DxgkGetDisplayModeList @ 0x140438C50 (DxgkGetDisplayModeList.c)
 * Callees:
 *     ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x14037C1C0 (-QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 */

void __fastcall DXGGLOBAL::DestroyAdapter(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
    (DXGGLOBAL *)((char *)this + 305368),
    (void (*)(void *))DXGGLOBAL::DelayDestroyAdapterWork,
    a2);
}
