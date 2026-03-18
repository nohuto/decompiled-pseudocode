/*
 * XREFs of ?PbmmGetAllocationPhysicalAddress@@YA_KPEBUPBMM_PHYSICAL_ALLOC@@PEAI@Z @ 0x14005225C
 * Callers:
 *     AcquireResidentSystemAddress @ 0x1400AE4D8 (AcquireResidentSystemAddress.c)
 *     ?GetAllocationPhysicalAddress@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEBA_NPEBUVIDMM_PHYSICAL_ALLOC@@PEAIPEAT_LARGE_INTEGER@@PEA_K@Z @ 0x1400AF730 (-GetAllocationPhysicalAddress@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEBA_NPEBUVIDMM_PHYSICAL_ALLOC@@PEAIP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PbmmGetAllocationPhysicalAddress(const struct PBMM_PHYSICAL_ALLOC *a1, unsigned int *a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rcx

  v2 = *((_QWORD *)a1 + 4);
  v3 = *(unsigned int *)(v2 + 52);
  *a2 = *(_DWORD *)(v2 + 52) & 0x1F;
  v4 = *(__int64 **)(v2 + 32);
  if ( (v3 & 0x1F) != 0 )
    v5 = *v4 + ((v3 >> 5) & 0x7FFF);
  else
    v5 = *v4;
  return v5 << 12;
}
