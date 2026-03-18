/*
 * XREFs of ?AddVidMmProcess@VIDMM_GLOBAL@@SAXPEAU_LIST_ENTRY@@@Z @ 0x14011AEEC
 * Callers:
 *     ??0VIDMM_PROCESS@@QEAA@XZ @ 0x14011ADF8 (--0VIDMM_PROCESS@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::AddVidMmProcess(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rax

  ExAcquirePushLockExclusiveEx(&g_VidMmProcessListHeadLock, 0LL);
  Flink = g_VidMmProcessListHead.Flink;
  if ( g_VidMmProcessListHead.Flink->Blink != &g_VidMmProcessListHead )
    __fastfail(3u);
  a1->Blink = &g_VidMmProcessListHead;
  a1->Flink = Flink;
  Flink->Blink = a1;
  g_VidMmProcessListHead.Flink = a1;
  ExReleasePushLockExclusiveEx(&g_VidMmProcessListHeadLock, 0LL);
}
