/*
 * XREFs of ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400E5664
 * Callers:
 *     UpdateAllocationProperty @ 0x1400B2A2C (UpdateAllocationProperty.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1400E3EA4 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1400E4308 (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400E4D38 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1400E591C (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(VIDMM_PROCESS_ADAPTER_INFO *this)
{
  unsigned int i; // r8d
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx

  if ( (byte_14008A201 & 0x20) != 0 )
  {
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)this + 6952LL); *(_QWORD *)(v5 + v3 + 184) = *(_QWORD *)(304 * v4 + v3 + 160) )
    {
      v3 = *((_QWORD *)this + 1);
      v4 = (unsigned __int16)i++;
      v5 = 304 * v4;
      *(_QWORD *)(v5 + v3 + 168) = *(_QWORD *)(304 * v4 + v3 + 144);
      *(_QWORD *)(v5 + v3 + 176) = *(_QWORD *)(304 * v4 + v3 + 152);
    }
  }
}
