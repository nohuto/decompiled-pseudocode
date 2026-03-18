/*
 * XREFs of ?IsAllocationInUse@VIDMM_GLOBAL@@QEBAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D8388
 * Callers:
 *     ?MemoryTransferPhysical@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0514 (-MemoryTransferPhysical@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAME.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1G1@Z @ 0x1400D80D8 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1G1@Z.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D8328 (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x14003B0B8 (VidSchIsMonitoredFenceSignaled.c)
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::IsAllocationInUse(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  unsigned __int64 v3; // r8
  char v4; // r9
  __int64 v5; // rcx
  unsigned __int64 v6; // rax

  v3 = *((_QWORD *)a2 + 11);
  v4 = 0;
  v5 = (*(_DWORD *)(*(_QWORD *)a2 + 52LL) >> 2) & 0x3F;
  v6 = *((_QWORD *)this + v5 + 677);
  if ( (v6 <= v3 || v6 - v3 < 0x7FFFFFFF)
    && !VidSchIsMonitoredFenceSignaled(*((_QWORD *)this + v5 + 741), *((_QWORD *)a2 + 11)) )
  {
    return 1;
  }
  return v4;
}
