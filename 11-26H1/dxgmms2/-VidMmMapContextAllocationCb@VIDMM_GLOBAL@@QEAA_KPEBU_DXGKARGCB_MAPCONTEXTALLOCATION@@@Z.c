/*
 * XREFs of ?VidMmMapContextAllocationCb@VIDMM_GLOBAL@@QEAA_KPEBU_DXGKARGCB_MAPCONTEXTALLOCATION@@@Z @ 0x14010EC44
 * Callers:
 *     VidMmMapContextAllocation @ 0x140043410 (VidMmMapContextAllocation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@_NI@Z @ 0x14010ED7C (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAUVIDMM_MULTI_ALLOC@@PEA.c)
 */

D3DGPU_VIRTUAL_ADDRESS __fastcall VIDMM_GLOBAL::VidMmMapContextAllocationCb(
        VIDMM_GLOBAL *this,
        const struct _DXGKARGCB_MAPCONTEXTALLOCATION *a2)
{
  int v4; // eax
  __int64 v6; // rcx
  D3DDDI_MAPGPUVIRTUALADDRESS v7; // [rsp+50h] [rbp-88h] BYREF

  memset(&v7, 0, sizeof(v7));
  v7.BaseAddress = a2->BaseAddress;
  v7.DriverProtection = a2->DriverProtection;
  v7.MaximumAddress = a2->MaximumAddress;
  v7.MinimumAddress = a2->MinimumAddress;
  v7.OffsetInPages = a2->OffsetInPages;
  v7.SizeInPages = a2->SizeInPages;
  v7.Protection.Value = a2->Protection.Value;
  v4 = VIDMM_GLOBAL::VidMmMapGpuVirtualAddress(
         this,
         0LL,
         *((struct VIDMM_MULTI_ALLOC **)a2->hAllocation + 3),
         &v7,
         0,
         (*(_DWORD *)(****((_QWORD ****)a2->hAllocation + 3) + 52LL) >> 2) & 0x3F);
  if ( v4 >= 0 )
    return v7.VirtualAddress;
  WdLogSingleEntry1(1LL, v4);
  WdLogGlobalForLineNumber = 23554;
  DxgkLogInternalTriageEvent(v6, 0x40000LL);
  return 0LL;
}
