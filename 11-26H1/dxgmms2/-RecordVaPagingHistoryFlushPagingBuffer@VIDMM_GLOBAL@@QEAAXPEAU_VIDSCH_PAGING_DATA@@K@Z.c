/*
 * XREFs of ?RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDSCH_PAGING_DATA@@K@Z @ 0x140116158
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1400E78B8 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400302B0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryFlushPagingBuffer(
        VIDMM_GLOBAL *this,
        struct _VIDSCH_PAGING_DATA *a2,
        int a3)
{
  char *v4; // rsi
  char *v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0

  v4 = (char *)this + 41144;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  v7 = operator new(88, (VIDMM_GLOBAL *)((char *)this + 41168), 8u, 0);
  if ( v7 )
  {
    v8 = *((_OWORD *)a2 + 1);
    *(_OWORD *)v7 = *(_OWORD *)a2;
    *((_DWORD *)v7 + 20) = a3;
    v9 = *((_OWORD *)a2 + 2);
    *((_OWORD *)v7 + 1) = v8;
    v10 = *((_OWORD *)a2 + 3);
    *((_OWORD *)v7 + 2) = v9;
    v11 = *((_OWORD *)a2 + 4);
    *((_OWORD *)v7 + 3) = v10;
    *((_OWORD *)v7 + 4) = v11;
  }
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
}
