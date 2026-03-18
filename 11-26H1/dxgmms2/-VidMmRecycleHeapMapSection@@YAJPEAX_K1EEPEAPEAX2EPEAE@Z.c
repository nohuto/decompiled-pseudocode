/*
 * XREFs of ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EEPEAPEAX2EPEAE@Z @ 0x1400F66AC
 * Callers:
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1400F3360 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400F58E8 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_GLOBAL@@_K3@Z @ 0x1400F6B6C (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEBUVIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEA.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1400F7508 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidMmRecycleHeapMapSection(
        PVOID Section,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        void **a6,
        void **a7,
        unsigned __int8 a8,
        unsigned __int8 *ViewSize)
{
  unsigned __int8 *v9; // r15
  int v12; // edi
  __int64 CurrentProcess; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v16; // r14d
  char *v17; // rdx
  unsigned __int8 v19; // si
  __int64 v20; // rcx
  NTSTATUS v21; // eax
  char *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // [rsp+60h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v26; // [rsp+C0h] [rbp+50h] BYREF

  v26 = a3;
  v9 = ViewSize;
  v24 = a2;
  v12 = a4 != 0 ? 4 : 1028;
  MappedBase = 0LL;
  if ( ViewSize )
    *ViewSize = 0;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    v16 = -1073741823;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(Section);
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v16 = (*((__int64 (__fastcall **)(PVOID, __int64, PVOID *, _QWORD, __int64, __int64 *, __int64 *, int, _DWORD, int))VirtualMemoryInterface
           + 3))(
            Section,
            CurrentProcess,
            &MappedBase,
            0LL,
            a3,
            &v24,
            &v26,
            2,
            0,
            v12);
    if ( v16 >= 0 )
    {
      v17 = (char *)MappedBase;
      *a7 = MappedBase;
      *a6 = &v17[a2 - v24];
      return (unsigned int)v16;
    }
  }
  _InterlockedIncrement(&dword_14008A80C);
  v19 = a8;
  WdLogSingleEntry2(6LL, a8, v16);
  WdLogGlobalForLineNumber = 995;
  DxgkLogInternalTriageEvent(v20, 262145LL);
  if ( !v19 )
  {
    ViewSize = 0LL;
    v21 = MmMapViewInSystemSpace(Section, &MappedBase, (PSIZE_T)&ViewSize);
    v16 = v21;
    if ( v21 < 0 )
    {
      _InterlockedIncrement(&dword_14008A80C);
      WdLogSingleEntry1(6LL, v21);
      WdLogGlobalForLineNumber = 1020;
      DxgkLogInternalTriageEvent(v23, 262145LL);
    }
    else
    {
      if ( v9 )
        *v9 = 1;
      v22 = (char *)MappedBase;
      *a7 = MappedBase;
      *a6 = &v22[a2];
    }
  }
  return (unsigned int)v16;
}
