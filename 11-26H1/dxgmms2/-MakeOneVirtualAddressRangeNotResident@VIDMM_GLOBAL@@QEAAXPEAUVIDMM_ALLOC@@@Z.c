/*
 * XREFs of ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E6030
 * Callers:
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z @ 0x1400E5F94 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ForceUncommitVirtualAddress@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z @ 0x140126BC0 (-ForceUncommitVirtualAddress@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140030174 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x140038904 (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBA_NXZ @ 0x140039020 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1400E6514 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEBAKXZ @ 0x1400E6870 (-AdapterId@VIDMM_GLOBAL@@QEBAKXZ.c)
 *     ?GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z @ 0x1400E6884 (-GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@EE@Z @ 0x140106574 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

void __fastcall VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  VIDMM_GLOBAL *v2; // rsi
  __int64 v4; // rcx
  char *v5; // r15
  unsigned __int64 v6; // rbx
  _QWORD *v7; // r12
  __int64 **v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // rax
  _QWORD *v12; // rdi
  unsigned int v13; // eax
  size_t v14; // rbx
  struct _KTHREAD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // r14
  _QWORD *v19; // r13
  unsigned int v20; // esi
  unsigned int v21; // edi
  unsigned int v22; // r14d
  unsigned __int64 v23; // rbx
  __int64 **v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // rsi
  __int64 v29; // r13
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  void *KmdProcessHandle; // rax
  unsigned int v34; // eax
  struct VIDMM_PROCESS *v35; // r9
  __int64 v36; // rdi
  __int64 **v37; // r13
  __int64 v38; // rcx
  __int64 v39; // rcx
  unsigned int v40; // r8d
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  unsigned int v44; // [rsp+40h] [rbp-488h] BYREF
  int v45; // [rsp+44h] [rbp-484h] BYREF
  unsigned __int64 v46; // [rsp+48h] [rbp-480h]
  unsigned __int64 v47; // [rsp+50h] [rbp-478h]
  struct _D3DGPU_PHYSICAL_ADDRESS v48; // [rsp+60h] [rbp-468h]
  struct _D3DGPU_PHYSICAL_ADDRESS v49; // [rsp+70h] [rbp-458h] BYREF
  _QWORD v50[64]; // [rsp+80h] [rbp-448h] BYREF
  _QWORD v51[64]; // [rsp+280h] [rbp-248h] BYREF

  v2 = this;
  *((_BYTE *)a2 + 26) = 0;
  v46 = (unsigned __int64)this;
  v4 = *(_QWORD *)a2;
  v5 = (char *)v2 + 24;
  v6 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  v47 = v6;
  v7 = (_QWORD *)(v6 + 32);
  if ( (*(_DWORD *)(v6 + 136) & 2) != 0 )
  {
    v36 = (unsigned __int8)*(_DWORD *)(**(_QWORD **)v4 + 52LL) >> 2;
    v37 = (__int64 **)(*v7 + 8LL * *(unsigned int *)(*(_QWORD *)v5 + 240LL));
    if ( *v37 )
    {
      v38 = **v37;
      if ( *(_DWORD *)(v38 + 41056) )
      {
        v39 = *(_QWORD *)(v38 + 24);
        v44 = 0;
        SysMmQueryIommuState(*(const struct SYSMM_ADAPTER **)(v39 + 224), (union SYSMM_IOMMU_STATE *)&v44);
        if ( (v44 & 8) != 0 )
        {
          v12 = *(_QWORD **)(**v37 + 44920);
        }
        else
        {
          v11 = *v37;
          if ( (*(_DWORD *)(v6 + 136) & 2) == 0 )
            goto LABEL_6;
          v12 = *(_QWORD **)(*v11 + 8 * v36 + 40544);
        }
        goto LABEL_7;
      }
    }
LABEL_54:
    v12 = 0LL;
    goto LABEL_7;
  }
  v8 = (__int64 **)(*v7 + 8LL * *(unsigned int *)(*(_QWORD *)v5 + 240LL));
  if ( !*v8 )
    goto LABEL_54;
  v9 = **v8;
  if ( !*(_DWORD *)(v9 + 41056) )
    goto LABEL_54;
  v10 = *(_QWORD *)(v9 + 24);
  v44 = 0;
  SysMmQueryIommuState(*(const struct SYSMM_ADAPTER **)(v10 + 224), (union SYSMM_IOMMU_STATE *)&v44);
  if ( (v44 & 8) != 0 )
  {
    v12 = *(_QWORD **)(**v8 + 44920);
  }
  else
  {
    v11 = *v8;
    if ( (*(_DWORD *)(v6 + 136) & 2) == 0 )
    {
LABEL_6:
      v12 = (_QWORD *)v11[3];
      goto LABEL_7;
    }
    v12 = *(_QWORD **)(*v11 + 0x800009E58LL);
  }
LABEL_7:
  if ( v12 )
  {
    v13 = *((_DWORD *)v2 + 1738);
    if ( v13 )
    {
      v14 = 8LL * v13;
      memset(v50, -1, v14);
      memset(v51, 0, v14 & 0xFFFFFFFFFFFFFFF8uLL);
    }
    v15 = (struct _KTHREAD *)v12[9];
    v44 = 0;
    v45 = 0;
    if ( v15 != KeGetCurrentThread() )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v12 + 8, 0LL) )
      {
        DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)(v12 + 8), v16, v17);
        ExAcquirePushLockExclusiveEx(v12 + 8, 0LL);
      }
      v12[9] = KeGetCurrentThread();
      v45 = 2;
    }
    v18 = (_QWORD *)((char *)a2 + 648);
    v19 = (_QWORD *)*v18;
    if ( (_QWORD *)*v18 != v18 )
    {
      v20 = v44;
      do
      {
        if ( (v19[5] & 0x1C00) != 0 )
        {
          CVirtualAddressAllocator::UncommitVirtualAddressRange(
            (CVirtualAddressAllocator *)v12,
            (struct VIDMM_MAPPED_VA_RANGE *)(v19 - 4),
            0LL,
            0,
            0);
          v40 = *((_DWORD *)v19 + 10);
          v41 = v50[(v40 >> 4) & 0x3F];
          if ( v41 >= v19[9] )
            v41 = v19[9];
          v42 = v19[10];
          v50[(*((_DWORD *)v19 + 10) >> 4) & 0x3F] = v41;
          v43 = v51[(v40 >> 4) & 0x3F];
          if ( v43 <= v42 )
            v43 = v42;
          v51[(v40 >> 4) & 0x3F] = v43;
          _bittestandset((int *)&v20, (v40 >> 4) & 0x3F);
        }
        v19 = (_QWORD *)*v19;
      }
      while ( v19 != v18 );
      v44 = v20;
      v2 = (VIDMM_GLOBAL *)v46;
    }
    if ( v45 == 2 )
    {
      v12[9] = 0LL;
      ExReleasePushLockExclusiveEx(v12 + 8, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (*((_BYTE *)v2 + 41064) & 2) != 0 )
    {
      v21 = v44;
      v22 = 0;
      if ( v44 )
      {
        v23 = v47;
        do
        {
          if ( (v21 & 1) != 0 )
          {
            v24 = (__int64 **)(*v7 + 8LL * *(unsigned int *)(*(_QWORD *)v5 + 240LL));
            if ( *v24 && (v25 = **v24, *(_DWORD *)(v25 + 41056)) )
            {
              v26 = *(_QWORD *)(v25 + 24);
              v45 = 0;
              SysMmQueryIommuState(*(const struct SYSMM_ADAPTER **)(v26 + 224), (union SYSMM_IOMMU_STATE *)&v45);
              if ( (v45 & 8) != 0 )
              {
                v28 = *(_QWORD *)(**v24 + 44920);
              }
              else
              {
                v27 = *v24;
                if ( (*(_DWORD *)(v23 + 136) & 2) != 0 )
                  v28 = *(_QWORD *)(*v27 + 8LL * v22 + 40544);
                else
                  v28 = v27[3];
              }
            }
            else
            {
              v28 = 0LL;
            }
            v29 = *(_QWORD *)(v28 + 96);
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v29 + 40320) + 8LL * v22) + 556LL) & 4) != 0
              && !*(_BYTE *)(v29 + 41068) )
            {
              v30 = v51[v22];
              v46 = v50[v22];
              v47 = v30;
              if ( v46 <= v30
                && VIDMM_PAGE_TABLE_BASE::IsResident(*(VIDMM_PAGE_TABLE_BASE **)(32LL * v22 + *(_QWORD *)(v28 + 128))) )
              {
                *(_QWORD *)&v48.SegmentId = *(unsigned int *)(v32 + 24);
                v48.SegmentOffset = *(_QWORD *)(v31 + 8);
                KmdProcessHandle = *(void **)(v28 + 120);
                if ( !KmdProcessHandle )
                {
                  v34 = VIDMM_GLOBAL::AdapterId((VIDMM_GLOBAL *)v29);
                  KmdProcessHandle = VIDMM_PROCESS::GetKmdProcessHandle(*(VIDMM_PROCESS **)(v28 + 104), v34);
                  *(_QWORD *)(v28 + 120) = KmdProcessHandle;
                }
                v35 = *(struct VIDMM_PROCESS **)(v28 + 104);
                v49 = v48;
                VIDMM_GLOBAL::FlushGpuVaTlb((VIDMM_GLOBAL *)v29, v22, &v49, v35, KmdProcessHandle, v46, v47);
              }
            }
          }
          ++v22;
          v21 >>= 1;
        }
        while ( v21 );
      }
    }
  }
}
