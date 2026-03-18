/*
 * XREFs of ?GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z @ 0x1400E6884
 * Callers:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140038F20 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E6030 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14001D9F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x140038588 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 */

__int64 __fastcall VIDMM_PROCESS::GetKmdProcessHandle(VIDMM_PROCESS *this, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  DXGGLOBAL *Global; // rax
  unsigned int MaximumGlobalAdapterCount; // eax
  __int64 v6; // rcx

  v2 = *((_QWORD *)this + 9);
  v3 = a2;
  Global = DXGGLOBAL::GetGlobal();
  MaximumGlobalAdapterCount = DXGGLOBAL::GetMaximumGlobalAdapterCount(Global);
  v6 = 0LL;
  if ( (unsigned int)v3 < MaximumGlobalAdapterCount && *(_QWORD *)(*(_QWORD *)(v2 + 48) + 8 * v3) )
  {
    _mm_lfence();
    return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 48) + 8 * v3) + 48LL);
  }
  return v6;
}
