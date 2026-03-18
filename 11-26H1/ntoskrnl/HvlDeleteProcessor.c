/*
 * XREFs of HvlDeleteProcessor @ 0x140791814
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407B9978 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140CC8ACC (KeStartAllProcessors.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x140308D40 (MmFreeIndependentPages.c)
 *     MmUnmapIoSpace @ 0x140343610 (MmUnmapIoSpace.c)
 *     HvlpFreeOverlayPages @ 0x140344280 (HvlpFreeOverlayPages.c)
 *     HvlpSetRegister64 @ 0x140493EC0 (HvlpSetRegister64.c)
 *     HvlpGetRegister64 @ 0x1404D0D20 (HvlpGetRegister64.c)
 */

void __fastcall HvlDeleteProcessor(struct _KPRCB *a1, SIZE_T a2, MEMORY_CACHING_TYPE a3)
{
  bool v3; // zf
  void *VirtualApicAssist; // rcx
  void *SchedulerAssist; // rcx
  unsigned __int64 HypercallCachedPages; // rcx
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1->VirtualApicAssist == 0LL;
  v8 = 0LL;
  if ( !v3 )
  {
    if ( a1 == KeGetCurrentPrcb() )
    {
      HvlpGetRegister64(589843, &v8);
      HvlpSetRegister64(589843, v8 & 0xFFFFFFFFFFFFFFFEuLL);
    }
    VirtualApicAssist = a1->VirtualApicAssist;
    if ( (HvlpFlags & 2) != 0 )
      MmUnmapIoSpace(VirtualApicAssist, 1uLL);
    else
      HvlpFreeOverlayPages(VirtualApicAssist, a2, a3);
    a1->VirtualApicAssist = 0LL;
  }
  SchedulerAssist = a1->SchedulerAssist;
  if ( SchedulerAssist )
    HvlpFreeOverlayPages(SchedulerAssist, a2, a3);
  HypercallCachedPages = (unsigned __int64)a1->HypercallCachedPages;
  if ( HypercallCachedPages )
    MmFreeIndependentPages(HypercallCachedPages, 0x5000uLL);
}
