/*
 * XREFs of ??0VIDMM_ALLOC_DEBUG@@QEAA@XZ @ 0x1400395D4
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DE210 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 */

VIDMM_ALLOC_DEBUG *__fastcall VIDMM_ALLOC_DEBUG::VIDMM_ALLOC_DEBUG(VIDMM_ALLOC_DEBUG *this)
{
  memset(this, 0, 0x308uLL);
  KeInitializeEvent((PRKEVENT)this + 3, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)((char *)this + 704), SynchronizationEvent, 0);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 96);
  *((_DWORD *)this + 7) |= 0x20u;
  *((_QWORD *)this + 97) = 0LL;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 101) = 0LL;
  *((_QWORD *)this + 102) = 0LL;
  return this;
}
