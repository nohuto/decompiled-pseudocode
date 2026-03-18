/*
 * XREFs of ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1401084D4
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140106E1C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAUVIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x140107850 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400302B0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct _VIDSCH_CONTEXT *a3,
        struct VIDMM_ALLOC *a4,
        struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *a5)
{
  char *v6; // rdi
  char *v10; // rax
  __int128 v11; // xmm1

  v6 = (char *)this + 41144;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v6, 0LL);
  *((_QWORD *)v6 + 1) = KeGetCurrentThread();
  v10 = operator new(96, (VIDMM_GLOBAL *)((char *)this + 41168), 0x12u, 0);
  if ( v10 )
  {
    *(_QWORD *)v10 = *((_QWORD *)a2 + 2);
    *((_QWORD *)v10 + 1) = *((_QWORD *)a2 + 9);
    *((_QWORD *)v10 + 2) = a3;
    *((_OWORD *)v10 + 2) = *(_OWORD *)&a5->OperationType;
    *((_OWORD *)v10 + 3) = *(_OWORD *)&a5->Copy.SizeInBytes;
    *((_OWORD *)v10 + 4) = *(_OWORD *)(&a5->Copy + 1);
    v11 = *(_OWORD *)((char *)&a5->Copy + 40);
    *((_QWORD *)v10 + 3) = a4;
    *((_OWORD *)v10 + 5) = v11;
  }
  *((_QWORD *)v6 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
}
