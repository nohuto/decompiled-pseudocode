/*
 * XREFs of ?VidMmVerifyBudgetGroups@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IPEBUVIDMM_SEGMENT_BASE@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x140111AB8
 * Callers:
 *     UpdateAllocationProperty @ 0x1400B2A2C (UpdateAllocationProperty.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX77KE7PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAVVIDMM_FENCE_STORAGE_PAGE@@PEAPEAUVIDMM_GLOBAL_ALLOC@@PEAE@Z @ 0x1400DEEC4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SE.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBUVIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x140126110 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEBU.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?VidMmCheckAllSegmentsAnyFlags@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IU_DXGK_SEGMENTFLAGS@@@Z @ 0x140111C5C (-VidMmCheckAllSegmentsAnyFlags@@YA_NPEBUVIDMM_PHYSICAL_ADAPTER@@IU_DXGK_SEGMENTFLAGS@@@Z.c)
 */

char __fastcall VidMmVerifyBudgetGroups(
        const struct VIDMM_PHYSICAL_ADAPTER *a1,
        unsigned int a2,
        const struct VIDMM_SEGMENT_BASE *a3,
        struct _VIDMM_VERIFY_BUDGET_GROUPS *a4)
{
  __int64 v4; // rsi
  _QWORD *v6; // r10
  unsigned int v9; // r11d
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int8 v13; // r9
  unsigned int v14; // r8d
  __int64 v15; // r11
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int8 v18; // cl
  int v19; // ebx
  __int64 v20; // rdi
  bool v22; // zf
  __int64 v23; // rcx

  v4 = a2;
  v6 = (_QWORD *)((char *)a1 + 1752);
  v9 = a2;
  if ( a2 )
  {
    while ( v9 )
    {
      _BitScanForward((unsigned int *)&v10, v9);
      v11 = *(_QWORD *)(*v6 + 8 * v10);
      v12 = v11 + 64;
      if ( !v11 )
        v12 = 56LL;
      if ( (*(_DWORD *)v12 & 0x80000) != 0 )
      {
        v13 = 1;
        v14 = v4;
        goto LABEL_9;
      }
      v9 &= ~(1 << v10);
    }
  }
  v13 = 0;
  v14 = v4;
  if ( (_DWORD)v4 )
  {
LABEL_9:
    while ( v14 )
    {
      _BitScanForward((unsigned int *)&v15, v14);
      v16 = *(_QWORD *)(*v6 + 8 * v15);
      v17 = v16 + 64;
      if ( !v16 )
        v17 = 56LL;
      if ( (*(_DWORD *)v17 & 0x100000) != 0 )
      {
        v18 = 1;
        goto LABEL_14;
      }
      v14 &= ~(1 << v15);
    }
  }
  v18 = 0;
LABEL_14:
  if ( a3 )
  {
    if ( (*((_DWORD *)a3 + 14) & 0x80000) != 0 )
    {
LABEL_16:
      v19 = 0;
      v20 = 2 * (unsigned int)v18;
      goto LABEL_17;
    }
    v22 = (*((_DWORD *)a3 + 14) & 0x100000) == 0;
  }
  else
  {
    if ( v13 )
      goto LABEL_16;
    v22 = v18 == 0;
  }
  if ( v22 )
  {
    v19 = 2;
    LODWORD(v20) = 3;
LABEL_19:
    *(_DWORD *)a4 = v19 | (16 * v20) | *(_DWORD *)a4 & 0xFFFFFF00;
    return 1;
  }
  v19 = 1;
  v20 = (unsigned int)v13 + 1;
LABEL_17:
  if ( (_DWORD)v20 == 3 || VidMmCheckAllSegmentsAnyFlags(a1, v4, (struct _DXGK_SEGMENTFLAGS)1572864) )
    goto LABEL_19;
  WdLogSingleEntry2(1LL, v20, v4);
  WdLogGlobalForLineNumber = 12533;
  DxgkLogInternalTriageEvent(v23, 0x40000LL);
  return 0;
}
