/*
 * XREFs of ??0VIDMM_ALLOC@@QEAA@XZ @ 0x14003949C
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DE210 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 */

VIDMM_ALLOC *__fastcall VIDMM_ALLOC::VIDMM_ALLOC(VIDMM_ALLOC *this)
{
  memset(this, 0, 0x308uLL);
  KeInitializeEvent((PRKEVENT)this + 3, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)((char *)this + 704), SynchronizationEvent, 0);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 96);
  return this;
}
