/*
 * XREFs of ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1401275CC
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX77KE7PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAVVIDMM_FENCE_STORAGE_PAGE@@PEAPEAUVIDMM_GLOBAL_ALLOC@@PEAE@Z @ 0x1400DEEC4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SE.c)
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x14010CF0C (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z @ 0x14003B56C (--0VIDMM_PROCESS_AUTOATTACH@@QEAA@PEAVVIDMM_PROCESS@@_N@Z.c)
 *     ??1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ @ 0x14003BA5C (--1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ.c)
 *     Feature_Opportunistic64KBSysMemMappings__private_ReportDeviceUsage @ 0x14004CBD8 (Feature_Opportunistic64KBSysMemMappings__private_ReportDeviceUsage.c)
 *     ?DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z @ 0x14004CEE0 (-DdiSetAllocationBackingStore@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETALLOCATIONBACKINGSTORE@@@Z.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitGlobalBackingStore(
        VIDMM_GLOBAL *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_PROCESS *a3,
        void *a4,
        unsigned __int8 *a5)
{
  __int64 v5; // r15
  int v9; // r14d
  int v10; // eax
  int v11; // ebx
  _QWORD *v12; // rsi
  int v13; // eax
  __int64 v14; // r8
  ADAPTER_RENDER *v15; // rcx
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  bool v20; // dl
  _DWORD *v21; // rax
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rdx
  _QWORD v25[2]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v26[64]; // [rsp+70h] [rbp-98h] BYREF

  v5 = *(_QWORD *)a2;
  v9 = 0;
  VIDMM_PROCESS_AUTOATTACH::VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v26, a3, 1);
  v10 = *((_DWORD *)a2 + 7);
  if ( (v10 & 2) != 0 )
  {
    v11 = 0;
    v12 = (_QWORD *)((char *)a2 + 208);
LABEL_3:
    *((_DWORD *)a2 + 8) |= 0x20u;
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(v5 + 52) >> 2) & 0x3F))
                                + 1696LL),
      *(_QWORD *)(v5 + 16));
    v13 = *((_DWORD *)a2 + 7);
    if ( (v13 & 0x1000) != 0 )
    {
      v14 = *v12;
      if ( *v12 )
      {
        if ( (v13 & 0x2000) == 0 )
        {
          v15 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
          v25[0] = *(_QWORD *)(*((_QWORD *)a2 + 46) + 48LL);
          v25[1] = v14;
          v11 = ADAPTER_RENDER::DdiSetAllocationBackingStore(
                  v15,
                  (const struct _DXGKARG_SETALLOCATIONBACKINGSTORE *)v25);
        }
      }
    }
    goto LABEL_7;
  }
  if ( (v10 & 0x70) != 0 )
  {
    v18 = ((**((_BYTE **)a2 + 46) & 4) != 0) + 9;
  }
  else
  {
    v17 = *((_DWORD *)a2 + 6);
    if ( (v17 & 4) != 0 )
    {
      v18 = ((**((_DWORD **)a2 + 46) & 4) != 0) + 5;
    }
    else if ( (v17 & 0x8000000) != 0 )
    {
      v19 = **((_DWORD **)a2 + 46) & 0x800;
      if ( (**((_DWORD **)a2 + 46) & 4) != 0 )
        v18 = v19 != 0 ? 8 : 2;
      else
        v18 = v19 != 0 ? 7 : 1;
    }
    else if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 8) != 0 || (**((_DWORD **)a2 + 46) & 4) != 0 )
    {
      v18 = 4;
    }
    else
    {
      v18 = 3;
    }
  }
  v20 = (*((_DWORD *)a2 + 6) & 0x10000000) != 0;
  if ( g_Feature_Largify64KBPrototype )
  {
    if ( (*((_DWORD *)a2 + 6) & 0x10000000) != 0 || (v20 = 0, (*((_DWORD *)a2 + 6) & 0x20000000) != 0) )
      v20 = 1;
  }
  if ( (unsigned int)(v18 - 3) > 3
    && (*((_DWORD *)a2 + 6) & 2) == 0
    && ((*(_DWORD *)(*((_QWORD *)this + 3) + 444LL) & 8) != 0 || (**((_DWORD **)a2 + 46) & 1) != 0)
    && (*((_DWORD *)a2 + 7) & 0x400) != 0 )
  {
    v20 = 0;
  }
  if ( (unsigned int)(v18 - 9) > 1 && v20 )
  {
    v9 = 1;
    Feature_Opportunistic64KBSysMemMappings__private_ReportDeviceUsage();
    v21 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(v5 + 52) >> 2) & 0x3F)) + 560LL);
    if ( v21 )
    {
      if ( (*v21 & 0x4000) != 0 )
        v9 = 3;
    }
  }
  v12 = (_QWORD *)((char *)a2 + 208);
  v22 = v9 | 4;
  if ( (*((_DWORD *)a2 + 7) & 0x400) == 0 )
    v22 = v9;
  v11 = (*(__int64 (__fastcall **)(_QWORD, struct VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, int, void *, int, char *, char *, unsigned __int8 *))(**((_QWORD **)a2 + 27) + 128LL))(
          *((_QWORD *)a2 + 27),
          a2,
          *(_QWORD *)(v5 + 16),
          *(unsigned int *)(v5 + 32),
          v22,
          a4,
          v18,
          (char *)a2 + 224,
          (char *)a2 + 208,
          a5);
  if ( v11 >= 0 )
    goto LABEL_3;
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 27961;
  DxgkLogInternalTriageEvent(v23, 0x40000LL);
  v24 = *((_QWORD *)a2 + 28);
  if ( v24 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 27)
                                                                                             + 136LL))(
      *((_QWORD *)a2 + 27),
      v24,
      *v12,
      0LL,
      27961LL,
      0LL,
      0LL,
      0LL);
    *((_QWORD *)a2 + 28) = 0LL;
    *v12 = 0LL;
  }
LABEL_7:
  *((_DWORD *)a2 + 8) ^= ((unsigned __int8)*((_DWORD *)a2 + 8) ^ (unsigned __int8)(*((_DWORD *)a2 + 7) >> 5)) & 8;
  VIDMM_PROCESS_AUTOATTACH::~VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v26);
  return (unsigned int)v11;
}
