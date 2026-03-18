/*
 * XREFs of ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x14003BC10
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400DA3C8 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@EE@Z @ 0x140106574 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

struct DXGPROCESS_RENDER_ADAPTER_INFO *__fastcall DXGPROCESS::GetRenderAdapterInfo(DXGPROCESS *this, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  v3 = a2;
  v4 = ((__int64 (*)(void))DxgCoreInterface[3])();
  if ( (unsigned int)v3 >= ((unsigned int (__fastcall *)(__int64))DxgCoreInterface[5])(v4) )
    return 0LL;
  else
    return *(struct DXGPROCESS_RENDER_ADAPTER_INFO **)(*((_QWORD *)this + 6) + 8 * v3);
}
