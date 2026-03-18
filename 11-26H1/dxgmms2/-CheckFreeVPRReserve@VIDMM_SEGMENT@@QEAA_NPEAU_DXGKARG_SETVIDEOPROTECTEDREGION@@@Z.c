/*
 * XREFs of ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1400B5F20
 * Callers:
 *     ?DeferredSetVprCallback@@YAXPEAX@Z @ 0x1400BE2A0 (-DeferredSetVprCallback@@YAXPEAX@Z.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x140116E50 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x140126570 (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x14012C3C4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_NPEAUVIDMM_LOCAL_.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x14009B7C8 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E499C (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

char __fastcall VIDMM_SEGMENT::CheckFreeVPRReserve(VIDMM_SEGMENT *this, struct _DXGKARG_SETVIDEOPROTECTEDREGION *a2)
{
  char v2; // di
  VIDMM_GLOBAL *v6; // r14
  _QWORD v7[12]; // [rsp+20h] [rbp-68h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 58) )
    return 0;
  if ( *((_QWORD *)this + 53) + *((_QWORD *)this + 59) == *((_QWORD *)this + 54) )
  {
    v6 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)v6 + 8LL) )
    {
      VIDMM_SEGMENT::FreeVPRReserve(this);
    }
    else
    {
      memset(v7, 0, 0x58uLL);
      v2 = 1;
      LODWORD(v7[0]) = 128;
      v7[5] = this;
      LODWORD(v7[6]) = 0;
      VIDMM_GLOBAL::QueueSystemCommandAndWait(v6, (struct _VIDMM_SYSTEM_COMMAND *)v7, 1);
    }
    a2->NewSize = 0LL;
    a2->NewStartOffset = *((_QWORD *)this + 54);
  }
  return v2;
}
