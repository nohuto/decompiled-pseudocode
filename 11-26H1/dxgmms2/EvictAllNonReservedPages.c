/*
 * XREFs of EvictAllNonReservedPages @ 0x140051390
 * Callers:
 *     CommitResources @ 0x1400510F4 (CommitResources.c)
 * Callees:
 *     EvictOnePage @ 0x140051444 (EvictOnePage.c)
 *     MergePages @ 0x140052BA8 (MergePages.c)
 *     ?PbmmReclaimPage@@YAXPEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@@Z @ 0x14005321C (-PbmmReclaimPage@@YAXPEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@@Z.c)
 */

_QWORD *__fastcall EvictAllNonReservedPages(struct PBMM_ALLOCATOR *a1, __int64 a2)
{
  _QWORD **v3; // rdi
  _QWORD *result; // rax
  _QWORD *v6; // rcx
  struct PBMM_PAGE *v7; // rsi
  int v8; // ebx
  struct PBMM_SEGMENT *v9; // rbx

  v3 = (_QWORD **)(a2 + 32);
  while ( 1 )
  {
    result = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)result[1] != v3 || (v6 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *v3 = v6;
    v7 = (struct PBMM_PAGE *)(result - 2);
    v6[1] = v3;
    v8 = *((_DWORD *)result + 13);
    if ( (v8 & 0x200000) == 0 )
    {
      v9 = *(struct PBMM_SEGMENT **)(*((_QWORD *)a1 + 2) + 8LL * (v8 & 0x1F));
      PbmmReclaimPage(v9, v7);
      EvictOnePage(a1, v9, a2, v7);
      MergePages(a1, v9, v7);
    }
  }
  return result;
}
