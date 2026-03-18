/*
 * XREFs of ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1400FA25C
 * Callers:
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAUVIDMM_PHYSICAL_ALLOC@@PEAPEAX@Z @ 0x14009B2A0 (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAUVIDMM_PHYSICAL_ALLOC@@PEAPEAX@Z.c)
 *     ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z @ 0x1400B5BF0 (-AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z.c)
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAJ_KI_NW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400BA5B8 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAJ_KI_NW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDM.c)
 *     ?ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400BDB40 (-ReserveTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z @ 0x1400BE210 (-AllocateScratchRange@VIDMM_MEMORY_SEGMENT@@UEAAJKPEAPEAXPEA_K@Z.c)
 *     ?AllocateOutside@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1400BF6E0 (-AllocateOutside@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@P.c)
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EEEW4VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1400F98E0 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EEEW4VIDMM_PLACEMENT_RESTR.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z @ 0x1400FB3E4 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1400FA770 (-FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLO.c)
 *     ?SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAXPEAPEAU2@E@Z @ 0x1400FAEE4 (-SplitBlock@VIDMM_LINEAR_POOL@@IEAAJPEAU_VIDMM_POOL_BLOCK@@_K1PEAXPEAPEAU2@E@Z.c)
 *     ?FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z @ 0x1400FC0EC (-FreeBlock@VIDMM_LINEAR_POOL@@IEAAXPEAU_VIDMM_POOL_BLOCK@@@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::Allocate(
        VIDMM_LINEAR_POOL *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        char a8,
        struct VIDMM_PHYSICAL_ALLOC *a9,
        union _LARGE_INTEGER *a10,
        void **a11)
{
  int BlockRun; // eax
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // r14
  __int64 v16; // r12
  _QWORD *v17; // r14
  _QWORD *v18; // rdi
  __int64 v19; // rcx
  struct _VIDMM_POOL_BLOCK *v20; // rdx
  __int64 v22; // rdi
  _QWORD *v23; // r15
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rcx
  _QWORD *v38; // r14
  __int64 v39; // rcx
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int8 v46; // [rsp+38h] [rbp-59h]
  struct _VIDMM_POOL_BLOCK *v47; // [rsp+88h] [rbp-9h] BYREF

  v47 = 0LL;
  if ( !a8 )
  {
    v46 = 0;
    BlockRun = VIDMM_LINEAR_POOL::FindBlockRun(this);
    v13 = 0LL;
    v14 = BlockRun;
    if ( BlockRun >= 0 )
      goto LABEL_3;
    if ( a7 || !*((_DWORD *)this + 4) )
      return (unsigned int)v14;
  }
  if ( !*((_QWORD *)this + 5) || (v46 = 1, (int)VIDMM_LINEAR_POOL::FindBlockRun(this) < 0) )
  {
    v46 = 2;
    v14 = VIDMM_LINEAR_POOL::FindBlockRun(this);
    if ( v14 < 0 )
      return (unsigned int)v14;
  }
LABEL_3:
  v15 = 24LL;
  v16 = MEMORY[0x18];
  while ( v15 != v16 )
  {
    v22 = v15 - 24;
    v23 = (_QWORD *)v15;
    v24 = *(_BYTE *)(v15 - 24 + 56) == 4;
    v15 = *(_QWORD *)v15;
    if ( v24 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v13) + 24) = v22;
        WdLogGlobalForLineNumber = 542;
      }
      (*((void (__fastcall **)(_QWORD, _QWORD))this + 4))(*((_QWORD *)this + 3), *(_QWORD *)(v22 + 16));
      *(_BYTE *)(v22 + 56) = 2;
      *(_QWORD *)(v22 + 16) = 0LL;
      if ( !*((_DWORD *)this + 4) )
      {
        WdLogSingleEntry0(1LL);
        v46 = 0;
        WdLogGlobalForLineNumber = 545;
        DxgkLogInternalTriageEvent(v44, 0x40000LL);
      }
      --*((_DWORD *)this + 4);
    }
    if ( v22 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v25 = WdLogNewEntry5_WdTrace(v13);
        *(_QWORD *)(v25 + 24) = v22;
        *(_QWORD *)(v25 + 32) = 0LL;
        WdLogGlobalForLineNumber = 556;
      }
      MEMORY[8] += *(_QWORD *)(v22 + 8);
      v26 = *v23;
      if ( *(_QWORD **)(*v23 + 8LL) != v23 )
        goto LABEL_51;
      v27 = (_QWORD *)v23[1];
      if ( (_QWORD *)*v27 != v23 )
        goto LABEL_51;
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      v28 = (_QWORD *)(v22 + 40);
      *v23 = 0LL;
      v23[1] = 0LL;
      v29 = *(_QWORD *)(v22 + 40);
      if ( *(_QWORD *)(v29 + 8) != v22 + 40 )
        goto LABEL_51;
      v30 = *(_QWORD **)(v22 + 48);
      if ( (_QWORD *)*v30 != v28 )
        goto LABEL_51;
      *v30 = v29;
      *(_QWORD *)(v29 + 8) = v30;
      *v28 = 0LL;
      *(_QWORD *)(v22 + 48) = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)v22);
    }
  }
  v17 = (_QWORD *)MEMORY[0x20];
  if ( (VIDMM_LINEAR_POOL *)MEMORY[0x20] != (VIDMM_LINEAR_POOL *)((char *)this + 48) )
  {
    v31 = (_QWORD *)(MEMORY[0x20] - 24LL);
    if ( *(_BYTE *)(MEMORY[0x20] - 24LL + 56) == 2 && *v31 + v31[1] == MEMORY[0] )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v32 = WdLogNewEntry5_WdTrace(v13);
        *(_QWORD *)(v32 + 24) = 0LL;
        *(_QWORD *)(v32 + 32) = v31;
        WdLogGlobalForLineNumber = 580;
      }
      MEMORY[0] = *v31;
      MEMORY[8] += v31[1];
      v33 = *v17;
      if ( *(_QWORD **)(*v17 + 8LL) != v17 )
        goto LABEL_51;
      v34 = (_QWORD *)v17[1];
      if ( (_QWORD *)*v34 != v17 )
        goto LABEL_51;
      *v34 = v33;
      *(_QWORD *)(v33 + 8) = v34;
      v35 = v31 + 5;
      *v17 = 0LL;
      v17[1] = 0LL;
      v36 = v31[5];
      if ( *(_QWORD **)(v36 + 8) != v31 + 5 )
        goto LABEL_51;
      v37 = (_QWORD *)v31[6];
      if ( (_QWORD *)*v37 != v35 )
        goto LABEL_51;
      *v37 = v36;
      *(_QWORD *)(v36 + 8) = v37;
      *v35 = 0LL;
      v31[6] = 0LL;
      VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)(v17 - 3));
    }
  }
  v18 = (_QWORD *)MEMORY[0x18];
  if ( (VIDMM_LINEAR_POOL *)MEMORY[0x18] != (VIDMM_LINEAR_POOL *)((char *)this + 48) )
  {
    v38 = (_QWORD *)(MEMORY[0x18] - 24LL);
    if ( *(_BYTE *)(MEMORY[0x18] - 24LL + 56) == 2 && *v38 == MEMORY[0] + MEMORY[8] )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v45 = WdLogNewEntry5_WdTrace(v13);
        *(_QWORD *)(v45 + 24) = 0LL;
        *(_QWORD *)(v45 + 32) = v38;
        WdLogGlobalForLineNumber = 605;
      }
      MEMORY[8] += v38[1];
      v39 = *v18;
      if ( *(_QWORD **)(*v18 + 8LL) == v18 )
      {
        v40 = (_QWORD *)v18[1];
        if ( (_QWORD *)*v40 == v18 )
        {
          *v40 = v39;
          *(_QWORD *)(v39 + 8) = v40;
          v41 = v38 + 5;
          *v18 = 0LL;
          v18[1] = 0LL;
          v42 = v38[5];
          if ( *(_QWORD **)(v42 + 8) == v38 + 5 )
          {
            v43 = (_QWORD *)v38[6];
            if ( (_QWORD *)*v43 == v41 )
            {
              *v43 = v42;
              *(_QWORD *)(v42 + 8) = v43;
              *v41 = 0LL;
              v38[6] = 0LL;
              VIDMM_LINEAR_POOL::FreeBlock(this, (struct _VIDMM_POOL_BLOCK *)(v18 - 3));
              goto LABEL_7;
            }
          }
        }
      }
LABEL_51:
      __fastfail(3u);
    }
  }
LABEL_7:
  v14 = VIDMM_LINEAR_POOL::SplitBlock(this, 0LL, 0LL, 0LL, a9, &v47, v46);
  if ( v14 < 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v19);
      WdLogGlobalForLineNumber = 634;
    }
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v19);
      WdLogGlobalForLineNumber = 621;
    }
    v20 = v47;
    *a10 = *(union _LARGE_INTEGER *)v47;
    *a11 = v20;
  }
  return (unsigned int)v14;
}
