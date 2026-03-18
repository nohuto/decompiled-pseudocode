/*
 * XREFs of EnableIommuIsolation @ 0x1400B1D68
 * Callers:
 *     ?EnableIommuIsolation@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAJXZ @ 0x1400B1E10 (-EnableIommuIsolation@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAJXZ.c)
 * Callees:
 *     ?MapToIommu@VIDMM_SEGMENT@@QEAAJXZ @ 0x14012A0A4 (-MapToIommu@VIDMM_SEGMENT@@QEAAJXZ.c)
 */

__int64 __fastcall EnableIommuIsolation(__int64 a1)
{
  unsigned __int16 i; // bx
  VIDMM_SEGMENT *v3; // rbp
  int v4; // eax
  unsigned int v5; // edi
  __int64 result; // rax

  for ( i = 0; (unsigned int)i < *(_DWORD *)(a1 + 136); ++i )
  {
    v3 = *(VIDMM_SEGMENT **)(*(_QWORD *)(a1 + 1752) + 8LL * i);
    v4 = VIDMM_SEGMENT::MapToIommu(v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      WdLogSingleEntry2(3LL, v3, v4);
      result = v5;
      WdLogGlobalForLineNumber = 1971;
      return result;
    }
  }
  return 0LL;
}
