/*
 * XREFs of ?SuspendSchedulerDeviceForMove@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140123E90
 * Callers:
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B6A80 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z.c)
 *     ?SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B73F0 (-SaveResourceCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z.c)
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1400BEEBC (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 * Callees:
 *     ?SuspendForMove@VIDMM_DEVICE@@QEAAXXZ @ 0x140123F10 (-SuspendForMove@VIDMM_DEVICE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::SuspendSchedulerDeviceForMove(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD **v3; // r14
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  _QWORD **v6; // rsi
  _QWORD *v7; // rdi
  VIDMM_DEVICE *v8; // rcx

  WdLogSingleEntry1(4LL, a2);
  v3 = (_QWORD **)((char *)a2 + 112);
  WdLogGlobalForLineNumber = 27180;
  v4 = *v3;
  while ( v4 != v3 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    v6 = (_QWORD **)(v5 - 2);
    v7 = *v6;
    while ( v7 != v6 )
    {
      v8 = (VIDMM_DEVICE *)*(v7 - 4);
      v7 = (_QWORD *)*v7;
      VIDMM_DEVICE::SuspendForMove(v8);
    }
  }
}
