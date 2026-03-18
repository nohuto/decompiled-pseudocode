/*
 * XREFs of AcquireResidentSystemAddress @ 0x1400AE4D8
 * Callers:
 *     ?AcquireResidentSystemAddress@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEBAPEAXPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_SYSTEM_ADDRESS_CONTEXT@@@Z @ 0x1400AE590 (-AcquireResidentSystemAddress@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEBAPEAXPEAUVIDMM_PHYSICAL_ALLOC@@PEA.c)
 * Callees:
 *     ?PbmmGetAllocationPhysicalAddress@@YA_KPEBUPBMM_PHYSICAL_ALLOC@@PEAI@Z @ 0x14005225C (-PbmmGetAllocationPhysicalAddress@@YA_KPEBUPBMM_PHYSICAL_ALLOC@@PEAI@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall AcquireResidentSystemAddress(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 result; // rax
  const struct PBMM_PHYSICAL_ALLOC *v5; // rcx
  __int64 AllocationPhysicalAddress; // rax
  __int64 v7; // r10
  __int64 v8; // r8
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a2 + 56);
  if ( (v3 & 8) != 0 )
    return *(_QWORD *)(*(_QWORD *)a2 + 208LL);
  if ( (v3 & 0x20) == 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 88LL, a1, a2, a3);
    WdLogGlobalForLineNumber = 213;
    JUMPOUT(0x1400AE587LL);
  }
  v5 = *(const struct PBMM_PHYSICAL_ALLOC **)(a2 + 80);
  v9 = 0;
  AllocationPhysicalAddress = PbmmGetAllocationPhysicalAddress(v5, &v9);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 1872) + 8LL * v9);
  if ( (*(_DWORD *)(v8 + 64) & 0x2004) != 4 )
    return 0LL;
  result = *(_QWORD *)(v8 + 32) + AllocationPhysicalAddress;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 56) + 24LL) + 444LL) & 8) == 0 )
    return 0LL;
  return result;
}
