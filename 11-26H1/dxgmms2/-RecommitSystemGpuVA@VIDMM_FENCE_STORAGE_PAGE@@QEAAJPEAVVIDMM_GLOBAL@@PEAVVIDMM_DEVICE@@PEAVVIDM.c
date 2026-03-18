/*
 * XREFs of ?RecommitSystemGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@I@Z @ 0x1400A5F58
 * Callers:
 *     ?RecommitPagingQueueSystemGpuVAs@VIDMM_DEVICE@@QEAAJI@Z @ 0x1400A5E60 (-RecommitPagingQueueSystemGpuVAs@VIDMM_DEVICE@@QEAAJI@Z.c)
 *     ?RecommitSystemFenceGpuVA@VIDMM_GLOBAL@@QEAAJI@Z @ 0x1400A5F00 (-RecommitSystemFenceGpuVA@VIDMM_GLOBAL@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140031E00 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14003B2E8 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400CB2A0 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400DA3C8 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEBU_DXGK_ADL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1400E4860 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_PAGING_QUE.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400E72E0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::RecommitSystemGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_DEVICE *a3,
        struct VIDMM_PROCESS *a4,
        unsigned int a5)
{
  int v8; // r12d
  __int64 *v9; // rsi
  __int64 *v10; // r15
  struct VIDMM_DEVICE **v11; // rbx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  __int64 v13; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v14; // r9
  struct _VIDSCH_SYNC_OBJECT **v15; // rdi
  __int64 v17; // rcx
  __int64 **v18; // rbx
  __int64 *i; // rax
  __int64 *j; // rax
  struct CVirtualAddressAllocator *v21; // rbx
  unsigned __int64 LogicalAddress; // rax
  int v23; // edi
  struct _VIDSCH_SYNC_OBJECT *v24; // [rsp+68h] [rbp-1h] BYREF
  __int64 v25; // [rsp+70h] [rbp+7h] BYREF
  _BYTE v26[16]; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v27; // [rsp+88h] [rbp+1Fh] BYREF
  unsigned __int64 v28; // [rsp+C8h] [rbp+5Fh] BYREF
  VIDMM_PROCESS *v29; // [rsp+E0h] [rbp+77h]

  v29 = a4;
  v8 = 1 << a5;
  v9 = 0LL;
  v10 = 0LL;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v26,
    (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 80),
    1);
  if ( *((_BYTE *)this + 200) )
  {
    v11 = (struct VIDMM_DEVICE **)*((_QWORD *)this + 19);
    if ( v11 && v11[2] == a3 )
    {
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  v29,
                                  *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL),
                                  a5);
      v13 = *((_QWORD *)a3 + 9);
      v14 = v11[6];
      v28 = 0LL;
      v15 = *(struct _VIDSCH_SYNC_OBJECT ***)(32LL * a5 + v13);
      if ( (unsigned int)VIDMM_GLOBAL::CommitVirtualAddressRange(
                           a2,
                           VirtualAddressAllocator,
                           (struct VIDMM_PAGING_QUEUE *)v15,
                           v14,
                           1,
                           (const struct _DXGK_ADL *)&xmmword_140060B68,
                           &v28,
                           0LL) == 259
        && (*((_DWORD *)*v11 + 7) & 0x20) != 0 )
      {
        *((_QWORD *)*v11 + 98) = v15;
        *((_QWORD *)*v11 + 101) = v28;
        v24 = v15[11];
        VIDMM_GLOBAL::WaitForFences(a2, &v24, &v28, 1u, 0LL, 0LL);
      }
LABEL_7:
      DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v26);
      return 0LL;
    }
    WdLogSingleEntry1(1LL, a3);
    WdLogGlobalForLineNumber = 2211;
    DxgkLogInternalTriageEvent(v17, 0x40000LL);
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v26);
    return 3221225473LL;
  }
  else
  {
    v18 = (__int64 **)((char *)this + 64);
    for ( i = *v18; i != (__int64 *)v18; i = (__int64 *)*i )
    {
      if ( a2 == (struct VIDMM_GLOBAL *)i[6] )
      {
        v9 = i;
        break;
      }
    }
    for ( j = (__int64 *)v9[4]; j != v9 + 4; j = (__int64 *)*j )
    {
      if ( v29 == (VIDMM_PROCESS *)*(j - 1) && *((_DWORD *)j + 5) == v8 )
      {
        v10 = j - 5;
        break;
      }
    }
    v21 = VIDMM_PROCESS::GetVirtualAddressAllocator(v29, *(_DWORD *)(*((_QWORD *)a2 + 3) + 240LL), a5);
    v27 = 0LL;
    LogicalAddress = SysMmGetLogicalAddress((void *const)v9[8]);
    VidMmiInitializeAdlForPfnArray(
      (struct _DXGK_ADL *)&v27,
      (const unsigned __int64 *)(v9[7] + 48),
      *(_DWORD *)(v9[7] + 40) >> 12,
      LogicalAddress);
    v25 = 0LL;
    v23 = CVirtualAddressAllocator::CommitVirtualAddressRange(v21, v10[2], a5, 0LL, 0LL, &v27, 0, &v25, 0LL, 0, 0LL);
    if ( v23 >= 0 )
      goto LABEL_7;
    WdLogSingleEntry3(3LL, v21, v9, v10);
    WdLogGlobalForLineNumber = 2303;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v26);
    return (unsigned int)v23;
  }
}
