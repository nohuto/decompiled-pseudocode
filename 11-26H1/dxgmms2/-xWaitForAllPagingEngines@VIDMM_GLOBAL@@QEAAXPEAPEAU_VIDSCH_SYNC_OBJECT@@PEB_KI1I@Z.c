/*
 * XREFs of ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1I@Z @ 0x1400E7230
 * Callers:
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CDA2C (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@@Z @ 0x14011C720 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@@Z.c)
 * Callees:
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1400E58B8 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400E72E0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::xWaitForAllPagingEngines(
        VIDMM_GLOBAL *this,
        struct _VIDSCH_SYNC_OBJECT **a2,
        void (*a3)(void *),
        void *a4,
        const unsigned __int64 *a5,
        unsigned int a6)
{
  unsigned int v7; // edi

  v7 = (unsigned int)a4;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
  {
    if ( a6 == -1 )
      VIDMM_GLOBAL::FlushPagingBuffer(this, 0, a3, a4);
    else
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, a6, 0, 0LL, 0LL, 0, 0);
  }
  VIDMM_GLOBAL::WaitForFences(this, a2, (const unsigned __int64 *)a3, v7, a5, 0LL);
}
