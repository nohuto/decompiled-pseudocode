/*
 * XREFs of ?VidMmPbmmTransferMemoryCB@@YAXPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUVIDMM_PHYSICAL_ALLOC@@III_KI2@Z @ 0x1400B0D6C
 * Callers:
 *     ?PbmmEvictPage@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@_N@Z @ 0x140052EAC (-PbmmEvictPage@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@_N@Z.c)
 *     ?PbmmMakePageResident@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z @ 0x140052FE4 (-PbmmMakePageResident@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@@Z.c)
 * Callees:
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_DXGK_TRANSFERFLAGS@@@Z @ 0x1400A0274 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAUVIDMM_TRANSFER_PARAMETER@@2U_D.c)
 *     AcquireTemporaryResourcesForAllocation @ 0x1400AE5A8 (AcquireTemporaryResourcesForAllocation.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

void __fastcall VidMmPbmmTransferMemoryCB(
        struct VIDMM_PHYSICAL_ADAPTER *a1,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int a7,
        VIDMM_GLOBAL *a8)
{
  struct VIDMM_PHYSICAL_ADAPTER *v8; // rbx
  VIDMM_GLOBAL *v9; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rsi
  unsigned __int64 LogicalAddress; // rax
  struct VIDMM_PHYSICAL_ADAPTER **v17; // rcx
  __int64 v18; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-41h]
  __int64 v20; // [rsp+58h] [rbp-39h]
  __int64 v21; // [rsp+60h] [rbp-31h]
  __int128 v22; // [rsp+68h] [rbp-29h]
  unsigned __int64 v23; // [rsp+78h] [rbp-19h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp-11h]
  __int64 v25; // [rsp+88h] [rbp-9h]
  __int64 v26; // [rsp+90h] [rbp-1h]
  __int128 v27; // [rsp+98h] [rbp+7h]
  unsigned __int64 v30; // [rsp+100h] [rbp+6Fh]
  VIDMM_GLOBAL *v31; // [rsp+110h] [rbp+7Fh]

  v8 = 0LL;
  v23 = 0LL;
  v9 = (VIDMM_GLOBAL *)*((_QWORD *)a1 + 7);
  v11 = *((_QWORD *)a1 + 219);
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v12 = a6 << 12;
  v13 = (_QWORD)a8 << 12;
  v31 = v9;
  v27 = 0LL;
  v22 = 0LL;
  v14 = (*(_QWORD *)(v11 + 8LL * a5) + 8LL) & -(__int64)(*(_QWORD *)(v11 + 8LL * a5) != 0LL);
  v15 = (*(_QWORD *)(v11 + 8LL * a7) + 8LL) & -(__int64)(*(_QWORD *)(v11 + 8LL * a7) != 0LL);
  v30 = (unsigned __int64)a3 << 12;
  if ( a5 && a7 )
  {
    v23 = v12;
    v25 = v14;
LABEL_6:
    v18 = v13;
    v20 = v15;
    goto LABEL_9;
  }
  v8 = (struct VIDMM_PHYSICAL_ADAPTER *)AcquireTemporaryResourcesForAllocation((__int64)a1, (__int64 *)a2, a3, a4);
  LogicalAddress = VidMmiGetLogicalAddress(*(void **)(*(_QWORD *)a2 + 344LL), v30);
  if ( !a5 )
  {
    *((_QWORD *)&v27 + 1) = *((_QWORD *)v8 + 2);
    v24 = LogicalAddress;
    goto LABEL_6;
  }
  if ( !a7 )
  {
    v23 = v12;
    v25 = v14;
    *((_QWORD *)&v22 + 1) = *((_QWORD *)v8 + 2);
    v19 = LogicalAddress;
  }
LABEL_9:
  VIDMM_GLOBAL::MemoryTransfer(
    v31,
    *(struct VIDMM_GLOBAL_ALLOC **)a2,
    (unsigned __int64)a4 << 12,
    v30,
    (struct VIDMM_TRANSFER_PARAMETER *)&v23,
    (struct VIDMM_TRANSFER_PARAMETER *)&v18,
    0);
  if ( v8 )
  {
    v17 = (struct VIDMM_PHYSICAL_ADAPTER **)*((_QWORD *)a1 + 225);
    if ( *v17 != (struct VIDMM_PHYSICAL_ADAPTER *)((char *)a1 + 1792) )
      __fastfail(3u);
    *(_QWORD *)v8 = (char *)a1 + 1792;
    *((_QWORD *)v8 + 1) = v17;
    *v17 = v8;
    *((_QWORD *)a1 + 225) = v8;
  }
}
