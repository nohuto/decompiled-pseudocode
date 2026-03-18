/*
 * XREFs of ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1400F7884
 * Callers:
 *     ?UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX@Z @ 0x1400ADC40 (-UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400F75BC (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 *     ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x14011CF0C (-ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x14003B5A4 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1400F8290 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::Unmap(VIDMM_RECYCLE_MULTIRANGE *this)
{
  __int64 v2; // r9
  VIDMM_RECYCLE_HEAP_MGR *v3; // rcx
  unsigned __int8 v4; // dl
  void *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  void *v10; // rbx
  struct _EPROCESS *CurrentProcess; // rax

  v2 = *((_QWORD *)this + 10);
  if ( *((_BYTE *)this + 120) )
  {
    v3 = (VIDMM_RECYCLE_HEAP_MGR *)**(unsigned int **)(v2 + 32);
    v4 = (_DWORD)v3 == 5 || (_DWORD)v3 == 6;
    v5 = (void *)*((_QWORD *)this + 16);
    if ( *((_QWORD *)this + 5) - *((_QWORD *)this + 4) > VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(v3, v4) )
    {
      v10 = *(void **)(v7 + 56);
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v6);
      VidMmUnmapViewAsync(CurrentProcess, v10, v5);
    }
    else
    {
      v8 = PsGetCurrentProcess(v6);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, void *))VirtualMemoryInterface + 4))(v8, v5);
    }
    *((_BYTE *)this + 120) = 0;
  }
  else
  {
    VidMmUnmapViewAsync(0LL, *(PVOID *)(v2 + 56), *((void **)this + 16));
    *((_BYTE *)this + 121) = 0;
  }
  *((_QWORD *)this + 16) = 0LL;
}
