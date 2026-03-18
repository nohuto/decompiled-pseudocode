/*
 * XREFs of SmmIommuMapStagingArray @ 0x14009BED4
 * Callers:
 *     SmmMapPagesToIommuInternal @ 0x14006A87C (SmmMapPagesToIommuInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     SmmMapIommu @ 0x140062F34 (SmmMapIommu.c)
 *     SmmIoMmuReferencePages @ 0x14009BCA4 (SmmIoMmuReferencePages.c)
 *     SmmIoMmuUnmapStagingArray @ 0x14009BE10 (SmmIoMmuUnmapStagingArray.c)
 */

__int64 __fastcall SmmIommuMapStagingArray(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 v3; // rax
  unsigned int v4; // ebx
  unsigned int *v5; // r12
  _DWORD *v7; // r14
  __int64 v9; // rsi
  unsigned int v10; // eax
  __int64 v12; // [rsp+28h] [rbp-50h]

  v2 = 0;
  v3 = a1 + 64;
  v4 = 0;
  v5 = (unsigned int *)(a2 + 24);
  v7 = (_DWORD *)(a2 + 16);
  while ( 1 )
  {
    LODWORD(v9) = SmmIoMmuReferencePages(v3, a2, 1);
    if ( (int)v9 < 0 )
      break;
    v10 = *(_DWORD *)(a2 + 28);
    if ( v10 )
    {
      v9 = (int)SmmMapIommu(a1, 0LL, *(_QWORD *)(a2 + 8), v10);
      if ( (int)v9 < 0 )
      {
        WdLogSingleEntry3(2LL, a1, *v5, v9);
        v12 = *v5;
        WdLogGlobalForLineNumber = 758;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to map referenced PFNs IOMMU. pIommu=0x%.16I64x, InputIndex=%u, Status=0x%.8x",
          a1,
          v12,
          v9,
          0LL,
          0LL);
        break;
      }
      v4 += *(_DWORD *)(a2 + 28);
      v2 = *v5;
    }
    v7 = (_DWORD *)(a2 + 16);
    if ( *v5 == *(_DWORD *)(a2 + 16) )
    {
      WdLogSingleEntry3(4LL, a1, (unsigned int)*v7, v4);
      WdLogGlobalForLineNumber = 793;
      return (unsigned int)v9;
    }
    v3 = a1 + 64;
  }
  if ( v2 )
  {
    *v7 = v2;
    *v5 = 0;
    SmmIoMmuUnmapStagingArray(a1, a2);
  }
  return (unsigned int)v9;
}
