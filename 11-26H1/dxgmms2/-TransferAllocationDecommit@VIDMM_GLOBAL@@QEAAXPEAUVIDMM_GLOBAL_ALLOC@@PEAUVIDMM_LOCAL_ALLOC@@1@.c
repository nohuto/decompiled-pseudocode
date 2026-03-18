/*
 * XREFs of ?TransferAllocationDecommit@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@1@Z @ 0x14011D3C0
 * Callers:
 *     ?VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z @ 0x1400D198C (-VidMmOpCloseAllocationCommand@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@AEAE@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@_N@Z @ 0x140127C48 (-OpenLocalAllocation@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::TransferAllocationDecommit(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_LOCAL_ALLOC *a3,
        struct VIDMM_LOCAL_ALLOC *a4)
{
  if ( a3 )
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)a3 + 1) + 72LL) + 440LL),
      -*(_QWORD *)(*(_QWORD *)a2 + 16LL));
  if ( a4 )
  {
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)a4 + 1) + 72LL) + 440LL),
      *(_QWORD *)(*(_QWORD *)a2 + 16LL));
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)a4 + 1) + 72LL) + 432LL));
  }
}
