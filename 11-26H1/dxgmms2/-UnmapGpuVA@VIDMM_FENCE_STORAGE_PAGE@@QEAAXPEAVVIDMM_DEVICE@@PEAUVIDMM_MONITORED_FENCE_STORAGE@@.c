/*
 * XREFs of ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1400E1334
 * Callers:
 *     ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1400E12E0 (-UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?UnmapGpuVaVidMmAlloc@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_DEVICE@@I_N@Z @ 0x1400A6200 (-UnmapGpuVaVidMmAlloc@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_DEVICE@@I_N@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@@@Z @ 0x1400D8FF4 (-ReleaseStoragePageGpuData@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_FENCE_STORAGE_PAGE_GPU_DATA@.c)
 *     ?QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E0F50 (-QueueLazySystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDRESS@@_NI@Z @ 0x1400E11E4 (-VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDR.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1400E2318 (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::UnmapGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        unsigned int a4,
        bool a5)
{
  __int64 v7; // r14
  char *v8; // rsi
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***v9; // rbx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **v10; // rax
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***v11; // r13
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***v12; // rcx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***v13; // r15
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***v14; // rdi
  VIDMM_PROCESS *v15; // r9
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  D3DGPU_VIRTUAL_ADDRESS v18; // r12
  struct VIDMM_PROCESS *v19; // rax
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **v20; // rcx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ****v21; // rax
  VIDMM_FENCE_STORAGE_PAGE *v22; // rcx
  int v23; // eax
  struct _D3DKMT_FREEGPUVIRTUALADDRESS v24; // [rsp+30h] [rbp-61h] BYREF
  _QWORD v25[18]; // [rsp+50h] [rbp-41h] BYREF
  VIDMM_PROCESS *v26; // [rsp+F8h] [rbp+67h]
  struct VIDMM_PROCESS *v27; // [rsp+F8h] [rbp+67h]
  struct CVirtualAddressAllocator *v28; // [rsp+100h] [rbp+6Fh]

  v7 = *(_QWORD *)a2;
  v26 = (VIDMM_PROCESS *)*((_QWORD *)a2 + 1);
  if ( (*((_BYTE *)a3 + 40) & 4) != 0 )
  {
    VIDMM_FENCE_STORAGE_PAGE::UnmapGpuVaVidMmAlloc(this, (VIDMM_GLOBAL **)a2, a4);
  }
  else if ( (*(_BYTE *)(v7 + 41064) & 0x10) != 0 )
  {
    v8 = (char *)this + 80;
    *(_QWORD *)&v24.hAdapter = (char *)this + 80;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v8, 0LL);
    v9 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***)((char *)this + 64);
    *((_QWORD *)v8 + 1) = KeGetCurrentThread();
    LOBYTE(v24.BaseAddress) = 1;
    v10 = *v9;
    while ( v10 != (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)v9 )
    {
      v11 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***)v10;
      v10 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)*v10;
      if ( (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **)v7 == v11[6] )
      {
        v12 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***)v11[4];
        while ( 1 )
        {
          v13 = v12;
          if ( v12 == v11 + 4 )
          {
            DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v24);
            return;
          }
          v14 = v12 - 5;
          v12 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***)*v12;
          v15 = (VIDMM_PROCESS *)v14[4];
          if ( v26 == v15 )
          {
            if ( !a5 )
              break;
            v23 = *((_DWORD *)v14 + 15);
            if ( _bittest(&v23, a4) )
              break;
          }
        }
        if ( (*((_DWORD *)v14 + 14))-- == 1 )
        {
          if ( *((_BYTE *)v14 + 24) )
          {
            VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                        v15,
                                        *(_DWORD *)(*(_QWORD *)(v7 + 24) + 240LL),
                                        a4);
            v18 = (D3DGPU_VIRTUAL_ADDRESS)*v14;
            v28 = VirtualAddressAllocator;
            v19 = (struct VIDMM_PROCESS *)v14[4];
            v27 = v19;
            if ( *((_BYTE *)v14 + 25) )
            {
              memset(v25, 0, 0x58uLL);
              v25[5] = v27;
              LODWORD(v25[0]) = 120;
              v25[7] = v18;
              v25[8] = 1LL;
              v25[6] = v28;
              LOBYTE(v25[9]) = 1;
              VIDMM_GLOBAL::QueueLazySystemCommandAndWait((VIDMM_GLOBAL *)v7, (struct _VIDMM_SYSTEM_COMMAND *)v25);
            }
            else
            {
              *(_QWORD *)&v24.hAdapter = 0LL;
              v24.BaseAddress = v18;
              v24.Size = 4096LL;
              VIDMM_GLOBAL::VidMmFreeGpuVirtualAddress((VIDMM_GLOBAL *)v7, v19, &v24, 1, 0);
            }
            VIDMM_PROCESS::CloseAdapter((VIDMM_PROCESS *)v14[4], (struct VIDMM_GLOBAL *)v7);
          }
          v20 = *v13;
          if ( (*v13)[1] != (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)v13
            || (v21 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ****)v13[1], *v21 != v13) )
          {
            __fastfail(3u);
          }
          *v21 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***)v20;
          v20[1] = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)v21;
          ExFreePoolWithTag(v14, 0);
          VIDMM_FENCE_STORAGE_PAGE::ReleaseStoragePageGpuData(v22, v11);
        }
        break;
      }
    }
    *((_QWORD *)v8 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
  }
}
