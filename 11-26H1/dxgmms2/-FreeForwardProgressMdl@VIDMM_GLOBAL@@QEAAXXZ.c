/*
 * XREFs of ?FreeForwardProgressMdl@VIDMM_GLOBAL@@QEAAXXZ @ 0x14009E5A0
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x14009CB9C (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DA8 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14004CB04 (-SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FreeForwardProgressMdl(VIDMM_GLOBAL *this)
{
  __int64 v2; // rbx
  unsigned __int64 LogicalAddress; // rax
  void *v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  struct _MDL *v8; // rcx
  char v9; // [rsp+20h] [rbp-28h]

  if ( *((_BYTE *)this + 40098) )
  {
    v2 = *((_QWORD *)this + 5660);
    LogicalAddress = VidMmiGetLogicalAddress(*((void **)this + 5661), 0LL);
    v9 = 0;
    SysMmUnmapPagesFromIommu(
      *(_QWORD *)(*((_QWORD *)this + 3) + 224LL),
      LogicalAddress,
      v2 + 48,
      (unsigned __int64)*(unsigned int *)(v2 + 40) >> 12,
      v9,
      8,
      this);
    v4 = (void *)*((_QWORD *)this + 5661);
    if ( v4 )
      SysMmFreeLogicalMemory(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), v4);
  }
  v5 = *((_QWORD *)this + 5659);
  if ( v5 )
  {
    v6 = *((_QWORD *)this + 5660);
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, __int64))VirtualMemoryInterface + 6))(v5, v6);
    *((_QWORD *)this + 5659) = 0LL;
  }
  v8 = (struct _MDL *)*((_QWORD *)this + 5660);
  if ( v8 )
  {
    MmFreePagesFromMdl(v8);
    ExFreePoolWithTag(*((PVOID *)this + 5660), 0);
    *((_QWORD *)this + 5660) = 0LL;
  }
}
