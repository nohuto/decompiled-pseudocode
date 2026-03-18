/*
 * XREFs of ?UnmapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX@Z @ 0x1400BC040
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1400F8290 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PROCESS_HEAP::UnmapViewOfAllocation(
        VIDMM_PROCESS_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        void *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  void *v7; // rsi
  void *v8; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v10; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v12; // rcx

  v4 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( PsGetCurrentProcess(this) != v4 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  v6 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 2) != 0 )
  {
    v7 = (void *)*((_QWORD *)a2 + 11);
    if ( (v6 & 1) != 0 )
    {
      v8 = (void *)*((_QWORD *)a2 + 4);
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v5);
      VidMmUnmapViewAsync(CurrentProcess, v8, v7);
    }
    else
    {
      v10 = PsGetCurrentProcess(v5);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, void *))VirtualMemoryInterface + 4))(v10, v7);
    }
    *(_DWORD *)a2 &= ~2u;
LABEL_13:
    *((_QWORD *)a2 + 11) = 0LL;
    return;
  }
  if ( (v6 & 4) != 0 )
  {
    if ( (v6 & 1) != 0 )
      VidMmUnmapViewAsync(0LL, *((PVOID *)a2 + 4), *((void **)a2 + 11));
    else
      MmUnmapViewInSystemSpace(*((PVOID *)a2 + 11));
    *(_DWORD *)a2 &= ~4u;
    goto LABEL_13;
  }
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 2523;
  DxgkLogInternalTriageEvent(v12, 0x40000LL);
}
