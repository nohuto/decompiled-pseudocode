/*
 * XREFs of ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400B7C7C
 * Callers:
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B6A80 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z.c)
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1400BEEBC (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x140007450 (VidSchMarkDeviceAsError.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14002FF98 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140038F20 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400CDBD4 (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400DA3C8 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 */

void __fastcall VIDMM_SEGMENT::UpdateVirtualAddressForNewResourceLocation(VIDMM_SEGMENT *this, VIDMM_SEGMENT **a2)
{
  VIDMM_SEGMENT *v2; // r12
  VIDMM_SEGMENT **v3; // r13
  _QWORD *v4; // rbp
  unsigned __int16 v5; // ax
  VIDMM_SEGMENT *v6; // r9
  _QWORD *v7; // r14
  __int64 v8; // rdx
  _QWORD *v9; // rdi
  char *v10; // r15
  unsigned int v11; // ebx
  bool v12; // zf
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  struct _KTHREAD *v14; // rdx
  _QWORD *v15; // rsi
  VIDMM_SEGMENT *v16; // r15
  _QWORD *v17; // r14
  struct VIDMM_ALLOC *v18; // rbp
  __int64 *v19; // rdi
  unsigned __int64 v20; // rax
  CVirtualAddressAllocator *v21; // r13
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned int v28; // edi
  CVirtualAddressAllocator *v29; // r12
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // r15
  VIDMM_SEGMENT *v32; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v33; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v34; // [rsp+70h] [rbp-98h]
  CVirtualAddressAllocator *v35; // [rsp+78h] [rbp-90h]
  unsigned __int64 v36; // [rsp+80h] [rbp-88h]
  _QWORD *v37; // [rsp+88h] [rbp-80h]
  char *v38; // [rsp+90h] [rbp-78h]
  _QWORD *v39; // [rsp+98h] [rbp-70h]
  _QWORD *v40; // [rsp+A0h] [rbp-68h]
  char *v41; // [rsp+A8h] [rbp-60h]
  _DWORD v42[2]; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v43; // [rsp+B8h] [rbp-50h]
  char v46; // [rsp+120h] [rbp+18h]
  char v47; // [rsp+128h] [rbp+20h]

  v2 = *a2;
  v3 = a2;
  v32 = *a2;
  v4 = (_QWORD *)((char *)v2 + 112);
  v5 = VIDMM_SEGMENT::DriverId(a2[8]);
  v7 = (_QWORD *)*((_QWORD *)v2 + 14);
  v34 = v5;
  v41 = (char *)v2 + 112;
  while ( v7 != v4 )
  {
    v8 = *((_QWORD *)v6 + 1);
    v9 = v7;
    v7 = (_QWORD *)*v7;
    v10 = 0LL;
    v11 = 0;
    v40 = v7;
    v35 = 0LL;
    v12 = (*(_BYTE *)(v8 + 41064) & 0x10) == 0;
    v38 = 0LL;
    v46 = 0;
    v47 = 0;
    v33 = -1LL;
    v36 = 0LL;
    if ( !v12 )
    {
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  (VIDMM_PROCESS *)*(v9 - 5),
                                  *(_DWORD *)(*(_QWORD *)(v8 + 24) + 240LL),
                                  (*(_DWORD *)(*(_QWORD *)v2 + 52LL) >> 2) & 0x3F);
      v35 = VirtualAddressAllocator;
      v10 = (char *)VirtualAddressAllocator + 64;
      v14 = (struct _KTHREAD *)*((_QWORD *)VirtualAddressAllocator + 9);
      v38 = (char *)VirtualAddressAllocator + 64;
      if ( v14 != KeGetCurrentThread() )
      {
        DXGPUSHLOCK::AcquireExclusive((struct CVirtualAddressAllocator *)((char *)VirtualAddressAllocator + 64));
        v46 = 1;
      }
      v6 = this;
    }
    v15 = (_QWORD *)*(v9 - 2);
    v37 = v9 - 2;
    if ( v15 != v9 - 2 )
    {
      v16 = v32;
      v17 = v9 - 2;
      do
      {
        v12 = (*((_DWORD *)v16 + 6) & 0x800000) == 0;
        v18 = (struct VIDMM_ALLOC *)(v15 - 5);
        v15 = (_QWORD *)*v15;
        v39 = v15;
        if ( !v12 )
        {
          VIDMM_GLOBAL::BuildInitContextAllocation(*((VIDMM_GLOBAL **)v6 + 1), v18, 0);
          v6 = this;
        }
        if ( (*(_BYTE *)(*((_QWORD *)v6 + 1) + 41064LL) & 0x10) != 0 )
        {
          if ( *((_BYTE *)v18 + 26) )
          {
            v19 = (__int64 *)*((_QWORD *)v18 + 81);
            v42[0] = *((_DWORD *)v3 + 4) >> 12;
            v20 = (unsigned __int64)v3[9] >> 12;
            v42[1] = 1;
            v43 = v20;
            if ( v19 != (__int64 *)((char *)v18 + 648) )
            {
              v21 = v35;
              v22 = v33;
              do
              {
                v23 = *(_QWORD *)v32;
                v33 = 0LL;
                v24 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                        v21,
                        v19 - 4,
                        (unsigned __int8)*(_DWORD *)(v23 + 52) >> 2,
                        v34,
                        0LL,
                        v42,
                        0,
                        &v33,
                        0LL,
                        0,
                        0LL);
                if ( v24 >= 0 )
                {
                  v26 = v19[10];
                  v47 = 1;
                  v11 |= 1 << ((*((_DWORD *)v19 + 10) >> 4) & 0x3F);
                  v27 = v19[9];
                  if ( v22 < v27 )
                    v27 = v22;
                  v22 = v27;
                  if ( v36 > v26 )
                    v26 = v36;
                  v36 = v26;
                }
                else
                {
                  WdLogSingleEntry2(3LL, v18, v24);
                  v25 = *((_QWORD *)v18 + 1);
                  WdLogGlobalForLineNumber = 6487;
                  VidSchMarkDeviceAsError(*(_QWORD *)(v25 + 32), 23);
                }
                v19 = (__int64 *)*v19;
              }
              while ( v19 != (__int64 *)((char *)v18 + 648) );
              v3 = a2;
              v17 = v37;
              v16 = v32;
              v6 = this;
              v33 = v22;
              v15 = v39;
            }
          }
        }
      }
      while ( v15 != v17 );
      v7 = v40;
      v10 = v38;
      v4 = v41;
      v2 = v32;
    }
    if ( v46 )
    {
      *((_QWORD *)v10 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v47 )
    {
      v28 = 0;
      if ( v11 )
      {
        v29 = v35;
        v30 = v33;
        v31 = v36;
        do
        {
          if ( (v11 & 1) != 0 )
            CVirtualAddressAllocator::FlushGpuVaTlb(v29, v28, v30, v31);
          ++v28;
          v11 >>= 1;
        }
        while ( v11 );
        v2 = v32;
      }
    }
    v6 = this;
  }
}
