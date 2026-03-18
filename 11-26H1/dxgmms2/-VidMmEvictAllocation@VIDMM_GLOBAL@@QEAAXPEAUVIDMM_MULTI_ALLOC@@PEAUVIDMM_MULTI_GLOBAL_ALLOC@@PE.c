/*
 * XREFs of ?VidMmEvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1400A2D54
 * Callers:
 *     VidMmEvictAllocation @ 0x14004D560 (VidMmEvictAllocation.c)
 * Callees:
 *     ?VidMmiAllocationMeetsCriteria@@YA_NPEAUVIDMM_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1400A3774 (-VidMmiAllocationMeetsCriteria@@YA_NPEAUVIDMM_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z.c)
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1400E591C (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400E72E0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmEvictAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_MULTI_ALLOC *a2,
        struct VIDMM_MULTI_GLOBAL_ALLOC *a3,
        struct _D3DKMT_EVICTION_CRITERIA *a4)
{
  struct VIDMM_GLOBAL_ALLOC *v7; // rdi
  struct VIDMM_DEVICE *v8; // rdx
  __int64 v9; // rdx
  struct VIDMM_MULTI_GLOBAL_ALLOC *v10; // r14
  struct VIDMM_MULTI_GLOBAL_ALLOC *v11; // rbx
  int *v12; // rdi
  int *v13; // r13
  struct VIDMM_DEVICE *v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v17; // [rsp+78h] [rbp+48h] BYREF
  struct VIDMM_MULTI_ALLOC *v18; // [rsp+80h] [rbp+50h] BYREF

  if ( a2 )
  {
    v7 = **(struct VIDMM_GLOBAL_ALLOC ***)a2;
    if ( VidMmiAllocationMeetsCriteria(v7, a4) && *((int *)a2 + 172) > 0 )
    {
      v8 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 1);
      v17 = 0LL;
      v18 = a2;
      VIDMM_GLOBAL::Evict(this, v8, &v18, 1u, 0, &v17);
      v9 = *(_QWORD *)(32LL * ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v7 + 52LL) >> 2)
                     + *(_QWORD *)(*((_QWORD *)a2 + 1) + 80LL));
      v18 = *(struct VIDMM_MULTI_ALLOC **)(v9 + 88);
      v17 = *(_QWORD *)(v9 + 64);
      VIDMM_GLOBAL::WaitForFences(this, &v18, &v17, 1u, 0LL, 0LL);
    }
  }
  else if ( a3 )
  {
    if ( VidMmiAllocationMeetsCriteria(a3, a4) )
    {
      v10 = (struct VIDMM_MULTI_GLOBAL_ALLOC *)((char *)a3 + 112);
      v11 = (struct VIDMM_MULTI_GLOBAL_ALLOC *)*((_QWORD *)a3 + 14);
      if ( v11 != (struct VIDMM_MULTI_GLOBAL_ALLOC *)((char *)a3 + 112) )
      {
        do
        {
          v12 = (int *)*((_QWORD *)v11 - 2);
          if ( v12 != (int *)((char *)v11 - 16) )
          {
            do
            {
              v13 = v12 - 10;
              if ( v12[162] > 0 )
              {
                v14 = (struct VIDMM_DEVICE *)*((_QWORD *)v13 + 1);
                v17 = 0LL;
                v18 = (struct VIDMM_MULTI_ALLOC *)(v12 - 10);
                VIDMM_GLOBAL::Evict(this, v14, &v18, 1u, 0, &v17);
                v15 = *(_QWORD *)(32LL * ((unsigned __int8)*(_DWORD *)(*(_QWORD *)a3 + 52LL) >> 2)
                                + *(_QWORD *)(*((_QWORD *)v13 + 1) + 80LL));
                v18 = *(struct VIDMM_MULTI_ALLOC **)(v15 + 88);
                v17 = *(_QWORD *)(v15 + 64);
                VIDMM_GLOBAL::WaitForFences(this, &v18, &v17, 1u, 0LL, 0LL);
              }
              v12 = *(int **)v12;
            }
            while ( v12 != (int *)((char *)v11 - 16) );
            v10 = (struct VIDMM_MULTI_GLOBAL_ALLOC *)((char *)a3 + 112);
          }
          v11 = *(struct VIDMM_MULTI_GLOBAL_ALLOC **)v11;
        }
        while ( v11 != v10 );
      }
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 7274;
  }
}
