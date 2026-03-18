/*
 * XREFs of ?OpenFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@UEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1400A5A70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140031E00 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?GetFenceStorageAllocInfo@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1400A51E4 (-GetFenceStorageAllocInfo@@YAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAU_DXGK_ALL.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400D4C18 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@_NU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D51C0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400DE210 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX77KE7PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAVVIDMM_FENCE_STORAGE_PAGE@@PEAPEAUVIDMM_GLOBAL_ALLOC@@PEAE@Z @ 0x1400DEEC4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SE.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400E4D38 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400E72E0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::OpenFenceStorageSlot(
        struct VIDMM_DEVICE **this,
        struct VIDMM_DEVICE *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3)
{
  struct VIDMM_GLOBAL *v7; // r15
  unsigned int v8; // edi
  __int64 v9; // rcx
  struct _VIDSCH_SYNC_OBJECT ***v10; // rax
  struct _VIDSCH_SYNC_OBJECT **v11; // r13
  struct VIDMM_DEVICE *v12; // r14
  UINT Value; // ecx
  __int64 v14; // r8
  int v15; // eax
  int v16; // esi
  __int64 v17; // rcx
  struct VIDMM_GLOBAL_ALLOC *v18; // r8
  int v19; // eax
  int Resident; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  struct VIDMM_GLOBAL_ALLOC *v23; // [rsp+D0h] [rbp-80h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v24; // [rsp+D8h] [rbp-78h] BYREF
  unsigned __int64 v25; // [rsp+E0h] [rbp-70h] BYREF
  unsigned __int64 v26; // [rsp+E8h] [rbp-68h] BYREF
  _BYTE v27[16]; // [rsp+F0h] [rbp-60h] BYREF
  struct _DXGK_ALLOCATIONINFO v28; // [rsp+100h] [rbp-50h] BYREF
  char v29; // [rsp+1B0h] [rbp+60h] BYREF
  struct VIDMM_ALLOC *v30; // [rsp+1B8h] [rbp+68h] BYREF

  if ( (*((_BYTE *)a3 + 40) & 4) == 0 )
    return 0LL;
  v7 = *(struct VIDMM_GLOBAL **)a2;
  v8 = 0;
  v9 = *((unsigned int *)this + 41);
  v26 = 0LL;
  v25 = 0LL;
  v24 = *(struct _VIDSCH_SYNC_OBJECT **)(*((_QWORD *)v7 + 5040) + 8 * v9);
  v10 = (struct _VIDSCH_SYNC_OBJECT ***)*((_QWORD *)a2 + 9);
  v30 = 0LL;
  v23 = 0LL;
  v11 = *v10;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v27,
    (struct DXGPUSHLOCKFAST *)(this + 10),
    1);
  if ( this[18] != a2 )
    goto LABEL_26;
  v12 = this[19];
  if ( !v12 )
  {
    memset(&v28, 0, sizeof(v28));
    GetFenceStorageAllocInfo(v7, a3, &v28);
    if ( (v28.SupportedWriteSegmentSet & *((_DWORD *)v24 + 21)) != 0 )
    {
      Value = v28.Flags.Value;
      if ( ((_DWORD)this[20] & 1) != 0 )
        Value = v28.Flags.Value | 1;
      v14 = *((unsigned int *)this + 41);
      v29 = 0;
      v15 = VIDMM_GLOBAL::CreateOneAllocation(
              v7,
              0LL,
              v14,
              4096LL,
              4096LL,
              4096,
              0,
              0,
              v28.SupportedWriteSegmentSet,
              v28.EvictionSegmentSet,
              0,
              v28.PreferredSegment.Value,
              Value | 0x20400000,
              *(&v28.AllocationPriority + 1),
              0LL,
              this[14],
              0LL,
              0LL,
              0,
              0,
              0LL,
              0LL,
              0LL,
              this,
              &v23,
              &v29);
      v16 = v15;
      if ( v15 >= 0 )
      {
        v18 = v23;
        this[24] = this[15];
        v19 = VIDMM_GLOBAL::OpenOneAllocation(v7, a2, v18, 0LL, ((_DWORD)this[20] & 2) == 0, 0LL, &v30);
        v16 = v19;
        if ( v19 >= 0 )
        {
          Resident = VIDMM_GLOBAL::MakeResident(v7, (struct VIDMM_PAGING_QUEUE *)v11, &v30, 1uLL, 1u, &v26, &v25);
          v16 = Resident;
          if ( Resident == 259 )
          {
            v24 = v11[11];
            v25 = v26;
            VIDMM_GLOBAL::WaitForFences(v7, &v24, &v25, 1u, 0LL, 0LL);
            v16 = 0;
          }
          else if ( Resident < 0 )
          {
            WdLogSingleEntry1(1LL, Resident);
            WdLogGlobalForLineNumber = 1011;
            goto LABEL_11;
          }
          v21 = operator new(72LL, 0x66336956u, 64LL);
          if ( v21 )
          {
            *(_QWORD *)v21 = v30;
            *(_QWORD *)(v21 + 8) = v23;
            *(_QWORD *)(v21 + 16) = a2;
            *(_DWORD *)(v21 + 28) = 1;
            *(_DWORD *)(v21 + 24) = *((_DWORD *)this + 40);
            this[19] = (struct VIDMM_DEVICE *)v21;
LABEL_25:
            v8 = v16;
            goto LABEL_27;
          }
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1018;
          DxgkLogInternalTriageEvent(v22, 0x40000LL);
          v16 = -1073741801;
LABEL_21:
          if ( v30 )
            VIDMM_GLOBAL::CloseOneAllocation(v7, v30, 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)3, 0LL);
          if ( v23 )
            VIDMM_GLOBAL::DestroyOneAllocation(v7, 0LL, v23, 0);
          goto LABEL_25;
        }
        WdLogSingleEntry1(1LL, v19);
        WdLogGlobalForLineNumber = 991;
      }
      else
      {
        WdLogSingleEntry1(1LL, v15);
        WdLogGlobalForLineNumber = 973;
      }
LABEL_11:
      DxgkLogInternalTriageEvent(v17, 0x40000LL);
      goto LABEL_21;
    }
LABEL_26:
    v8 = -1073741823;
    goto LABEL_27;
  }
  ++*((_DWORD *)v12 + 7);
LABEL_27:
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v27);
  return v8;
}
