/*
 * XREFs of ?AllocateGlobal@VIDMM_EXISTINGSYSMEM_HEAP@@UEAAJPEAUVIDMM_GLOBAL_ALLOC@@_KIW4VIDMM_HEAP_ALLOCATE_FLAGS@@PEAXW4VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAXPEAE@Z @ 0x1400AC3A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXISTINGSYSMEM_HEAP::AllocateGlobal(
        __int64 a1,
        __int64 a2,
        SIZE_T a3,
        __int64 a4,
        __int64 a5,
        volatile void *Address,
        __int64 a7,
        __int64 *a8,
        _QWORD *a9,
        _BYTE *a10)
{
  int v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // rcx
  BOOL v15; // r12d

  v12 = *(_DWORD *)(a2 + 24) & 0x40;
  v13 = operator new(40LL, 0x66316956u, 256LL);
  if ( v13 )
  {
    v15 = (unsigned __int8)MmIsUserAddress(Address) != 0;
    if ( (**(_DWORD **)(a2 + 368) & 0x10) != 0 )
    {
      if ( v12 )
        ProbeForRead(Address, a3, 1u);
      else
        ProbeForWrite(Address, a3, 1u);
    }
    *(_DWORD *)(v13 + 32) = v15 | *(_DWORD *)(v13 + 32) & 0xFFFFFFFE;
    *(_QWORD *)(v13 + 8) = Address;
    *a10 = 1;
    *a8 = v13;
    if ( (*(_DWORD *)(v13 + 32) & 1) == 0 )
      *a9 = *(_QWORD *)(v13 + 8);
    *(_QWORD *)v13 = a3;
    return 0LL;
  }
  else
  {
    _InterlockedIncrement(&dword_14008A8E0);
    WdLogSingleEntry1(6LL, a2);
    WdLogGlobalForLineNumber = 538;
    DxgkLogInternalTriageEvent(v14, 262145LL);
    *a10 = 0;
    *a8 = 0LL;
    *a9 = 0LL;
    return 3221225495LL;
  }
}
