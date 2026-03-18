/*
 * XREFs of ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x14010864C
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x140106E1C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAUVIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x140107850 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1400302B0 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
        VIDMM_GLOBAL *this,
        char a2,
        struct VIDMM_PROCESS *a3,
        struct _VIDSCH_CONTEXT *a4,
        unsigned int a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        unsigned __int64 a7)
{
  char *v8; // rsi
  char *v12; // rax

  v8 = (char *)this + 41144;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v8, 0LL);
  *((_QWORD *)v8 + 1) = KeGetCurrentThread();
  v12 = operator new(48, (VIDMM_GLOBAL *)((char *)this + 41168), a2 != 0 ? 19 : 17, 0);
  if ( v12 )
  {
    *(_QWORD *)v12 = *((_QWORD *)a3 + 2);
    *((_QWORD *)v12 + 1) = *((_QWORD *)a3 + 9);
    *((_DWORD *)v12 + 6) = a5;
    *((_QWORD *)v12 + 4) = a6;
    *((_QWORD *)v12 + 5) = a7;
    *((_QWORD *)v12 + 2) = a4;
  }
  *((_QWORD *)v8 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
}
