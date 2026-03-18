/*
 * XREFs of ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x14011379C
 * Callers:
 *     ?VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A8668 (-VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400DA3C8 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1400E6514 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z @ 0x140113140 (-Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x140007690 (VidSchSuspendResumeDevice.c)
 */

void __fastcall VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
        VIDMM_PROCESS *this,
        unsigned int a2,
        unsigned __int8 a3)
{
  VIDMM_PROCESS *v3; // r14
  int v4; // r13d
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  unsigned __int16 v7; // si
  unsigned __int16 v8; // bp
  __int64 v9; // r12
  __int64 v10; // r8
  _QWORD *v11; // r15
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx

  v3 = this;
  v4 = a3;
  v5 = *(_QWORD **)(*((_QWORD *)this + 4) + 8LL * a2);
  if ( v5 )
  {
    if ( v5[1] )
    {
      v6 = *v5;
      if ( *(_BYTE *)(*(_QWORD *)*v5 + 212LL) == 1 )
      {
        v7 = 0;
        if ( *(_DWORD *)(v6 + 6952) )
        {
          do
          {
            v8 = 0;
            v9 = *(_QWORD *)(*(_QWORD *)(v6 + 40320) + 8LL * v7);
            if ( *(_DWORD *)(v9 + 136) )
            {
              v10 = 304LL * v7;
              do
              {
                v11 = (_QWORD *)(*(_QWORD *)(v10 + v5[1]) + 184LL * v8 + 40);
                v12 = (_QWORD *)*v11;
                if ( (_QWORD *)*v11 != v11 )
                {
                  do
                  {
                    v13 = v12[4];
                    v14 = *(_QWORD *)(v13 + 24);
                    if ( v14 && !*(_QWORD *)(v13 + 184) )
                      VidSchSuspendResumeDevice(*(_KEVENT **)(v14 + 800), v4, 0, 1);
                    v12 = (_QWORD *)*v12;
                  }
                  while ( v12 != v11 );
                  v10 = 304LL * v7;
                }
                ++v8;
              }
              while ( (unsigned int)v8 < *(_DWORD *)(v9 + 136) );
            }
            v6 = *v5;
            ++v7;
          }
          while ( (unsigned int)v7 < *(_DWORD *)(*v5 + 6952LL) );
          v3 = this;
        }
      }
    }
  }
  *((_DWORD *)v3 + 34) = *((_DWORD *)v3 + 34) & 0xFFFFFFFB | (4 * v4);
}
