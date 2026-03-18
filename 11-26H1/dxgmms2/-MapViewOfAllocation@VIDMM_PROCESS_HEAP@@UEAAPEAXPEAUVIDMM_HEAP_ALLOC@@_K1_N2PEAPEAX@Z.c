/*
 * XREFs of ?MapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAPEAXPEAUVIDMM_HEAP_ALLOC@@_K1_N2PEAPEAX@Z @ 0x1400BB410
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
char *__fastcall VIDMM_PROCESS_HEAP::MapViewOfAllocation(
        VIDMM_PROCESS_HEAP *this,
        struct VIDMM_HEAP_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        bool a5,
        bool a6,
        void **a7)
{
  __int64 v7; // rax
  char *v8; // r14
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // r12d
  void *v14; // rsi
  __int64 v15; // rbx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  ULONG_PTR v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 CurrentProcess; // rsi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v27; // rdx
  char *v28; // r14
  __int64 v29; // rbx
  NTSTATUS v30; // eax
  char *v31; // r14
  __int64 v32; // rcx
  char *result; // rax
  __int64 v34; // [rsp+60h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+B0h] [rbp+40h] BYREF
  ULONG_PTR ViewSize; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v37; // [rsp+C8h] [rbp+58h] BYREF

  v37 = a4;
  v7 = *((_QWORD *)this + 1);
  v8 = 0LL;
  MappedBase = 0LL;
  v11 = *(_QWORD *)(v7 + 16);
  if ( PsGetCurrentProcess(this) != v11 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 30LL, 0LL, 0LL, 0LL);
    WdLogGlobalForLineNumber = 213;
  }
  v13 = 4;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v14 = (void *)*((_QWORD *)a2 + 4);
    v15 = a3;
    v16 = *((_DWORD *)a2 + 6);
    ViewSize = (ULONG_PTR)v14;
    if ( v16 != 4 && v16 != 6 )
      v13 = 1028;
  }
  else
  {
    v12 = *((_QWORD *)a2 + 1);
    v15 = a3 + *((_QWORD *)a2 + 2);
    v14 = *(void **)(v12 + 88);
    v17 = *(_DWORD *)(v12 + 80);
    ViewSize = (ULONG_PTR)v14;
    if ( v17 != 4 )
    {
      v18 = 4;
      if ( v17 != 6 )
        v18 = 1028;
      v13 = v18;
    }
  }
  v34 = v15;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    _InterlockedIncrement(&dword_14008A80C);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2373;
    DxgkLogInternalTriageEvent(v19, 262145LL);
    v20 = -1073741823;
  }
  else
  {
    v24 = v37;
    CurrentProcess = PsGetCurrentProcess(v12);
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v27 = CurrentProcess;
    v14 = (void *)ViewSize;
    v20 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, PVOID *, _QWORD, __int64, __int64 *, __int64 *, int, _DWORD, int))VirtualMemoryInterface
           + 3))(
            ViewSize,
            v27,
            &MappedBase,
            0LL,
            v24,
            &v34,
            &v37,
            2,
            0,
            v13);
    if ( v20 >= 0 )
    {
      v28 = (char *)MappedBase;
      *(_DWORD *)a2 |= 2u;
      v29 = v15 - v34;
      *((_QWORD *)a2 + 11) = v28;
      v8 = &v28[v29];
      goto LABEL_23;
    }
  }
  _InterlockedIncrement(&dword_14008A80C);
  WdLogSingleEntry2(6LL, a5, v20);
  WdLogGlobalForLineNumber = 2419;
  DxgkLogInternalTriageEvent(v21, 262145LL);
  if ( a5 )
  {
    v8 = (char *)MappedBase;
  }
  else
  {
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      v22 = *((_QWORD *)a2 + 7);
      v23 = 0LL;
    }
    else
    {
      v23 = *((_QWORD *)a2 + 2);
      v22 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 40LL);
    }
    ViewSize = v22;
    v30 = MmMapViewInSystemSpace(v14, &MappedBase, &ViewSize);
    if ( v30 < 0 )
    {
      _InterlockedIncrement(&dword_14008A80C);
      WdLogSingleEntry1(6LL, v30);
      WdLogGlobalForLineNumber = 2469;
      DxgkLogInternalTriageEvent(v32, 262145LL);
    }
    else
    {
      v31 = (char *)MappedBase;
      *(_DWORD *)a2 |= 4u;
      *((_QWORD *)a2 + 11) = v31;
      v8 = &v31[v23 + a3];
    }
  }
LABEL_23:
  result = v8;
  *a7 = v8;
  return result;
}
