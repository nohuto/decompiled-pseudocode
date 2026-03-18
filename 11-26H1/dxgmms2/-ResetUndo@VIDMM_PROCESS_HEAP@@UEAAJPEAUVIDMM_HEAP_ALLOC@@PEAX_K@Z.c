/*
 * XREFs of ?ResetUndo@VIDMM_PROCESS_HEAP@@UEAAJPEAUVIDMM_HEAP_ALLOC@@PEAX_K@Z @ 0x1400BB910
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1400294D8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKKK@Z @ 0x1400A4AD8 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKKK@Z.c)
 *     ?GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEA_N@Z @ 0x1400BB180 (-GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEA_N.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_PROCESS_HEAP::ResetUndo(VIDMM_PROCESS_HEAP *this, struct VIDMM_HEAP_ALLOC *a2, void *a3)
{
  __int64 v3; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int AllocationInfo; // ebx
  __int64 v10; // r8
  int v11; // eax
  unsigned __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  void *v14; // [rsp+38h] [rbp-8h] BYREF
  bool v15; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v16; // [rsp+68h] [rbp+28h] BYREF

  v3 = *((_QWORD *)this + 1);
  v14 = 0LL;
  v13 = 0LL;
  v16 = 0;
  v6 = *(_QWORD *)(v3 + 16);
  v15 = 0;
  if ( PsGetCurrentProcess(this) != v6 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7) + 24) = a2;
    WdLogGlobalForLineNumber = 1433;
  }
  AllocationInfo = VIDMM_PROCESS_HEAP::GetAllocationInfo((unsigned __int64)this, a2, &v13, &v14, &v16, &v15);
  if ( AllocationInfo >= 0 )
  {
    v11 = VidMmAllocateVirtualMemory(&v14, &v13, 0x1000000u, v16, 0);
    AllocationInfo = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(4LL, v11);
      WdLogGlobalForLineNumber = 1448;
    }
  }
  if ( AllocationInfo == -1071775472 && (byte_14008A201 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer(v8, &EventPerformanceWarning, v10, 18);
  if ( v15 )
    (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, struct VIDMM_HEAP_ALLOC *, _QWORD))(*(_QWORD *)this + 64LL))(
      this,
      a2,
      0LL);
  return (unsigned int)AllocationInfo;
}
