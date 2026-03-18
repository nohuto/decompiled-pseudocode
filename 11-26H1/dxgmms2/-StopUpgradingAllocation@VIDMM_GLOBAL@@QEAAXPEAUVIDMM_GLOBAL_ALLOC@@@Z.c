/*
 * XREFs of ?StopUpgradingAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A7EAC
 * Callers:
 *     ?DoUpgrade64KPages@@YAXPEAUVIDMM_WORKER_THREAD@@@Z @ 0x140099884 (-DoUpgrade64KPages@@YAXPEAUVIDMM_WORKER_THREAD@@@Z.c)
 *     ?VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A8668 (-VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14012A730 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14012ACD0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCA.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1400417C8 (McTemplateK0_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2_N@Z @ 0x1400A2004 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K2_N@.c)
 */

void __fastcall VIDMM_GLOBAL::StopUpgradingAllocation(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  int v2; // eax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  struct VIDMM_LOCAL_ALLOC *v10; // rdx
  __int64 i; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  v2 = *((_DWORD *)a2 + 6);
  if ( v2 < 0 )
  {
    *((_QWORD *)a2 + 8) = 0LL;
    *((_DWORD *)a2 + 6) = v2 & 0x7FFFFFFF;
  }
  if ( a2 == *((struct VIDMM_GLOBAL_ALLOC **)this + 5579) )
  {
    v5 = (_QWORD *)((char *)a2 + 352);
    *((_QWORD *)this + 5579) = 0LL;
    v6 = *((_QWORD *)a2 + 44);
    if ( v6 )
    {
      if ( *(_QWORD **)(v6 + 8) != v5 || (v7 = (_QWORD *)*((_QWORD *)a2 + 45), (_QWORD *)*v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      *v5 = 0LL;
      v5[1] = 0LL;
    }
  }
  v8 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
  v9 = *((_QWORD *)a2 + 6);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(v9 + 8) + 16LL), &ApcState);
  VIDMM_GLOBAL::ProbeAndLockAllocation(this, v10, a2, 0LL, v8, 0);
  memset((void *)(*((_QWORD *)this + 5577) + 48LL), 0, 8 * (v8 >> 12));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 11163); i = (unsigned int)(i + 1) )
  {
    v12 = *(_QWORD *)(*((_QWORD *)this + 5584) + 8 * i);
    if ( v12 && (*(_BYTE *)(v12 + 10) & 2) != 0 )
      MmUnlockPages((PMDL)v12);
  }
  *((_DWORD *)this + 11163) = 0;
  KeUnstackDetachProcess(&ApcState);
  if ( (byte_14008A201 & 1) != 0 )
    McTemplateK0_EtwWriteTransfer(v13, &VidMmUpgradeAllocationEnd, v14);
}
