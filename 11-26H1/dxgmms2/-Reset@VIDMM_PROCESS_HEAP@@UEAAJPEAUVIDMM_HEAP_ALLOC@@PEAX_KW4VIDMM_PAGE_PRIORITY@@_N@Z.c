/*
 * XREFs of ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_KW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400BB700
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKKK@Z @ 0x1400A4AD8 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKKK@Z.c)
 *     ?GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEA_N@Z @ 0x1400BB180 (-GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEA_N.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAX_KW4VIDMM_PAGE_PRIORITY@@@Z @ 0x1400F7960 (-VidMmiSetPriorityForMemoryPages@@YAXPEAX_KW4VIDMM_PAGE_PRIORITY@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PROCESS_HEAP::Reset(
        _QWORD *a1,
        struct _VIDMM_PROCESS_HEAP_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  __int64 v6; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int AllocationInfo; // ebx
  __int64 v13; // r8
  int v14; // eax
  __int64 v16; // r15
  _QWORD *v17; // rax
  void *v18; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR NumberOfBytesToUnlock[2]; // [rsp+40h] [rbp-10h] BYREF
  bool v21; // [rsp+70h] [rbp+20h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+28h] BYREF

  v6 = a1[1];
  v18 = 0LL;
  v19 = 0LL;
  LODWORD(BaseAddress) = 0;
  v9 = *(_QWORD *)(v6 + 16);
  v21 = 0;
  if ( PsGetCurrentProcess(a1) != v9 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10) + 24) = a2;
    WdLogGlobalForLineNumber = 1337;
  }
  AllocationInfo = VIDMM_PROCESS_HEAP::GetAllocationInfo(
                     (unsigned __int64)a1,
                     a2,
                     &v19,
                     &v18,
                     (unsigned int *)&BaseAddress,
                     &v21);
  if ( AllocationInfo < 0 )
    goto LABEL_8;
  v14 = VidMmAllocateVirtualMemory(&v18, &v19, 0x80000u, (int)BaseAddress, 0);
  AllocationInfo = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry1(2LL, v14);
    WdLogGlobalForLineNumber = 1352;
LABEL_8:
    if ( AllocationInfo == -1071775472 && (byte_14008A201 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventPerformanceWarning, v13, 18);
    goto LABEL_11;
  }
  VidMmiSetPriorityForMemoryPages(v18, v19, a5);
  if ( a6 )
  {
    if ( v21 )
      goto LABEL_12;
    BaseAddress = v18;
    NumberOfBytesToUnlock[0] = v19;
    v16 = ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, NumberOfBytesToUnlock, 1u);
    if ( g_IsInternalReleaseOrDbg )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
      v17[3] = BaseAddress;
      v17[4] = NumberOfBytesToUnlock[0];
      v17[5] = v16;
      WdLogGlobalForLineNumber = 1376;
    }
  }
LABEL_11:
  if ( v21 )
LABEL_12:
    (*(void (__fastcall **)(_QWORD *, struct _VIDMM_PROCESS_HEAP_ALLOC *, _QWORD))(*a1 + 64LL))(a1, a2, 0LL);
  return (unsigned int)AllocationInfo;
}
