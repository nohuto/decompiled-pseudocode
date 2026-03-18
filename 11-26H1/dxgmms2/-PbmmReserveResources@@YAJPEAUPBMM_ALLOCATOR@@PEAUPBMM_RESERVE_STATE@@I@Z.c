/*
 * XREFs of ?PbmmReserveResources@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@I@Z @ 0x140051954
 * Callers:
 *     PageInAllocation @ 0x1400AFE78 (PageInAllocation.c)
 * Callees:
 *     PrepareReservePass @ 0x1400519E8 (PrepareReservePass.c)
 *     ReserveResourcesForOneAllocation @ 0x140051AC4 (ReserveResourcesForOneAllocation.c)
 */

__int64 __fastcall PbmmReserveResources(struct PBMM_ALLOCATOR *a1, struct PBMM_RESERVE_STATE *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // r8

  v4 = 0;
  while ( *((_DWORD *)a2 + 13) < 4u )
  {
    while ( 1 )
    {
      v5 = *((_QWORD *)a2 + 4);
      if ( !v5 )
        break;
      result = ReserveResourcesForOneAllocation(a1, v5 - 24, a2);
      v4 = result;
      if ( (int)result < 0 )
        return result;
      v7 = **((_QWORD **)a2 + 4);
      *((_QWORD *)a2 + 4) = v7;
      if ( v7 )
      {
        *((_QWORD *)a2 + 5) = *(_QWORD *)(v7 + 8);
        *((_DWORD *)a2 + 12) = 0;
      }
    }
    v8 = (unsigned int)(*((_DWORD *)a2 + 13) + 1);
    *((_DWORD *)a2 + 13) = v8;
    if ( (unsigned int)v8 < 4 )
      PrepareReservePass(a1, a2, v8);
  }
  return v4;
}
