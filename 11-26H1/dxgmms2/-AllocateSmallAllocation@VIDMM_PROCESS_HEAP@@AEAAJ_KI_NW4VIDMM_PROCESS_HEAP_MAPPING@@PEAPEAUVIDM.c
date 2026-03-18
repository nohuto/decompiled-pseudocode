/*
 * XREFs of ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@AEAAJ_KI_NW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400BA5B8
 * Callers:
 *     ?AllocateGlobal@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@@PEAXW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400B9D00 (-AllocateGlobal@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@.c)
 * Callees:
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x14001970C (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKKK@Z @ 0x1400A4AD8 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKKK@Z.c)
 *     ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@_N@Z @ 0x1400B9644 (-AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_H.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1400BAA9C (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1400BB304 (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1400FA25C (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400FBCD4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::AllocateSmallAllocation(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        char a4,
        unsigned int a5,
        union _LARGE_INTEGER **a6,
        __int64 *a7,
        _BYTE *a8)
{
  __int64 v9; // rbx
  __int64 v10; // rdi
  char v11; // r13
  _QWORD *v12; // rax
  struct _PAGED_LOOKASIDE_LIST *v13; // r12
  union _LARGE_INTEGER *v14; // rax
  union _LARGE_INTEGER *v15; // rsi
  int v16; // r15d
  __int64 v17; // rcx
  unsigned int v18; // r13d
  __int64 v19; // r8
  __int64 v20; // rcx
  _QWORD **BlockListHead; // r12
  _QWORD *v22; // r15
  VIDMM_LINEAR_POOL *v23; // rcx
  char v24; // r12
  union _LARGE_INTEGER v25; // rbx
  unsigned int v26; // r8d
  int v27; // eax
  __int64 v28; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v31; // eax
  _QWORD *v32; // rax
  _QWORD *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // [rsp+28h] [rbp-69h]
  unsigned int v38; // [rsp+28h] [rbp-69h]
  unsigned __int64 v39; // [rsp+30h] [rbp-61h]
  char v40[8]; // [rsp+38h] [rbp-59h]
  char v41[8]; // [rsp+40h] [rbp-51h]
  char v42; // [rsp+68h] [rbp-29h]
  void *v43; // [rsp+70h] [rbp-21h] BYREF
  union _LARGE_INTEGER v44; // [rsp+78h] [rbp-19h] BYREF
  __int64 v45; // [rsp+80h] [rbp-11h] BYREF
  PVOID Entry[8]; // [rsp+88h] [rbp-9h] BYREF
  char v47; // [rsp+D8h] [rbp+47h]
  unsigned __int64 v48; // [rsp+E0h] [rbp+4Fh] BYREF
  char v49; // [rsp+F0h] [rbp+5Fh]

  v49 = a4;
  v48 = a2;
  v43 = 0LL;
  v9 = a3;
  v10 = 0LL;
  v45 = 0LL;
  v11 = 0;
  Entry[0] = 0LL;
  v44.QuadPart = 0LL;
  v47 = 0;
  v42 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
    v12[3] = v48;
    v12[4] = v9;
    v12[5] = a1;
    WdLogGlobalForLineNumber = 651;
  }
  v13 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
  *a6 = 0LL;
  *a7 = 0LL;
  *a8 = 0;
  v14 = (union _LARGE_INTEGER *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v15 = v14;
  if ( v14 )
  {
    memset(v14, 0, 0x70uLL);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(a1 + 16));
    v18 = a5;
    v42 = 1;
    BlockListHead = (_QWORD **)VIDMM_PROCESS_HEAP::GetBlockListHead(a1, a5, v19);
    v22 = *BlockListHead;
    while ( v22 != BlockListHead )
    {
      v10 = (__int64)(v22 - 1);
      v23 = (VIDMM_LINEAR_POOL *)v22[8];
      v22 = (_QWORD *)*v22;
      v45 = v10;
      if ( (int)VIDMM_LINEAR_POOL::Allocate(v23, v48, v9, 1u, 0LL, 0LL, 0, 0, 0LL, &v44, Entry) >= 0 )
      {
        v24 = v49;
        goto LABEL_9;
      }
    }
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v20);
      WdLogGlobalForLineNumber = 730;
    }
    v24 = v49;
    v31 = VIDMM_PROCESS_HEAP::AllocateBlock(a1, v48, v9, v18, &v45, v49);
    v10 = v45;
    v16 = v31;
    if ( v31 >= 0 )
    {
      v47 = 1;
      v16 = VIDMM_LINEAR_POOL::Allocate(
              *(VIDMM_LINEAR_POOL **)(v45 + 72),
              v48,
              v9,
              1u,
              0LL,
              0LL,
              0,
              0,
              0LL,
              &v44,
              Entry);
      if ( v16 >= 0 )
      {
LABEL_9:
        v25 = v44;
        if ( *(_QWORD *)(v10 + 56) || *(_QWORD *)(v10 + 88) )
          goto LABEL_36;
        v26 = 8392704;
        v27 = 4096;
        if ( *(_DWORD *)(v10 + 80) != 2 )
          v27 = 8392704;
        if ( !v24 )
          v26 = v27;
        v38 = *(_DWORD *)(a1 + 288);
        v43 = (void *)(v44.QuadPart + *(_QWORD *)(v10 + 32));
        v16 = VidMmAllocateVirtualMemory(&v43, &v48, v26, *(_DWORD *)(v10 + 48), v38);
        if ( v16 >= 0 )
        {
LABEL_36:
          if ( g_IsInternalReleaseOrDbg )
          {
            v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v20);
            v32[4] = v44.HighPart;
            v32[5] = v25.LowPart;
            v32[3] = v10;
            WdLogGlobalForLineNumber = 810;
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 176LL) += v48;
          v33 = *(_QWORD **)(a1 + 8);
          if ( v18 == 1 )
          {
            v33[25] += v48;
          }
          else if ( v18 == 2 )
          {
            v33[27] += v48;
          }
          else
          {
            v33[29] += v48;
          }
          v15->LowPart &= ~1u;
          v15[7].QuadPart = v48;
          v15[3] = (union _LARGE_INTEGER)Entry[0];
          LOBYTE(v15[9].LowPart) = 0;
          v15[1].QuadPart = v10;
          v15[2] = v25;
          v15[4].QuadPart = 0LL;
          ++*(_DWORD *)(v10 + 24);
          DXGFASTMUTEX::Release((struct _KTHREAD **)(a1 + 16));
          *a6 = v15;
          if ( v18 - 5 <= 1 )
          {
            v34 = v15[2].QuadPart + *(_QWORD *)(v15[1].QuadPart + 32);
            *a7 = v34;
          }
          if ( (byte_14008A201 & 0x10) != 0 )
          {
            if ( v18 - 3 <= 3 )
              v36 = *(_QWORD *)(v10 + 88);
            else
              v36 = *(_QWORD *)(v10 + 32);
            McTemplateK0qxxx_EtwWriteTransfer(
              v34,
              &EventCreateProcessAllocationDetails,
              v35,
              *(_DWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
              (char)v15,
              v48,
              v36);
          }
          *a8 = 1;
          return 0LL;
        }
        v43 = 0LL;
        _InterlockedIncrement(&dword_14008A7E8);
        WdLogSingleEntry0(6LL);
        *(_QWORD *)v41 = 0LL;
        *(_QWORD *)v40 = 0LL;
        v39 = 0LL;
        v37 = 798LL;
        WdLogGlobalForLineNumber = 798;
        DxgkLogInternalTriageEvent(v28, 262145LL);
      }
      else if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v20);
        WdLogGlobalForLineNumber = 763;
      }
    }
    v11 = v47;
    v13 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
    goto LABEL_18;
  }
  v16 = -1073741801;
  _InterlockedIncrement(&dword_14008A744);
  WdLogSingleEntry0(6LL);
  *(_QWORD *)v41 = 0LL;
  *(_QWORD *)v40 = 0LL;
  v39 = 0LL;
  v37 = 677LL;
  WdLogGlobalForLineNumber = 677;
  DxgkLogInternalTriageEvent(v17, 262145LL);
LABEL_18:
  if ( v43 )
  {
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, void **, unsigned __int64 *, __int64, __int64, unsigned __int64, char *, char *))VirtualMemoryInterface
     + 2))(
      -1LL,
      &v43,
      &v48,
      0x4000LL,
      v37,
      v39,
      *(char **)v40,
      *(char **)v41);
  }
  if ( Entry[0] && v10 )
    VIDMM_LINEAR_POOL::Free(*(VIDMM_LINEAR_POOL **)(v10 + 72), Entry[0]);
  if ( v11 == 1 )
    VIDMM_PROCESS_HEAP::FreeBlock((VIDMM_PROCESS_HEAP *)a1, (struct _VIDMM_PROCESS_HEAP_BLOCK *)v10);
  if ( v15 )
    ExFreeToPagedLookasideList(v13, v15);
  if ( v42 )
    DXGFASTMUTEX::Release((struct _KTHREAD **)(a1 + 16));
  return (unsigned int)v16;
}
