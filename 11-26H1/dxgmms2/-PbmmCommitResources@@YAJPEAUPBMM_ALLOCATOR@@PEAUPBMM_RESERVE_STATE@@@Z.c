/*
 * XREFs of ?PbmmCommitResources@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@@Z @ 0x140051564
 * Callers:
 *     PageInAllocation @ 0x1400AFE78 (PageInAllocation.c)
 * Callees:
 *     CommitResources @ 0x1400510F4 (CommitResources.c)
 */

__int64 __fastcall PbmmCommitResources(struct PBMM_ALLOCATOR *a1, struct PBMM_RESERVE_STATE *a2)
{
  __int64 v4; // rax
  _QWORD **v5; // r8
  __int64 result; // rax

  while ( 1 )
  {
    v4 = *((unsigned int *)a2 + 14);
    if ( (unsigned int)v4 >= 4 )
      break;
    v5 = (_QWORD **)((char *)a2 + 8 * v4);
    if ( *v5 )
    {
      result = CommitResources(a1, (__int64)a2, v5);
      if ( (int)result < 0 )
        return result;
    }
    ++*((_DWORD *)a2 + 14);
  }
  return 0LL;
}
