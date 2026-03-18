/*
 * XREFs of ?EvictionTest@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x14009E524
 * Callers:
 *     VidMmEvictionTest @ 0x14004D580 (VidMmEvictionTest.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E53F0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

int __fastcall VIDMM_GLOBAL::EvictionTest(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MULTI_ALLOC *a3,
        struct VIDMM_MULTI_GLOBAL_ALLOC *a4)
{
  struct VIDMM_PAGING_QUEUE **v7; // rdx
  _QWORD v9[12]; // [rsp+30h] [rbp-68h] BYREF

  memset(v9, 0, 0x58uLL);
  v7 = (struct VIDMM_PAGING_QUEUE **)*((_QWORD *)a2 + 9);
  LODWORD(v9[0]) = 213;
  v9[1] = a2;
  v9[2] = a3;
  return VIDMM_GLOBAL::QueueDeferredCommand(this, *v7, (struct _VIDMM_DEFERRED_COMMAND *)v9, 1, 0LL);
}
