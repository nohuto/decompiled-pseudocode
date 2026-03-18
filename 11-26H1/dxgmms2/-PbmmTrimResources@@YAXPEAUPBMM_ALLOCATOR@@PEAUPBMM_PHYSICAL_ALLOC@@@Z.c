/*
 * XREFs of ?PbmmTrimResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@@Z @ 0x14004C28C
 * Callers:
 *     ?UncommitResources@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1401198E0 (-UncommitResources@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 * Callees:
 *     ?PbmmDecrementCommittedPfns@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@W4PBMM_PAGE_SIZE@@I@Z @ 0x140052A14 (-PbmmDecrementCommittedPfns@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@W4PBMM_PAGE_SIZE@@I@Z.c)
 *     ?PbmmAddPageToList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z @ 0x140052D58 (-PbmmAddPageToList@@YAXPEAUPBMM_PAGE_LIST@@PEAUPBMM_PAGE@@@Z.c)
 *     ?PbmmGetPageListForPage@@YAPEAUPBMM_PAGE_LIST@@PEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z @ 0x140052DB8 (-PbmmGetPageListForPage@@YAPEAUPBMM_PAGE_LIST@@PEAUPBMM_SEGMENT@@PEBUPBMM_PAGE@@@Z.c)
 */

void __fastcall PbmmTrimResources(struct PBMM_ALLOCATOR *a1, struct PBMM_PHYSICAL_ALLOC *a2)
{
  char *v2; // rdi
  char *i; // rsi
  __int64 v6; // r8
  __int64 v7; // rbx
  struct PBMM_PAGE_LIST *PageListForPage; // rax
  unsigned int v9; // r10d

  v2 = (char *)a2 + 32;
  for ( i = (char *)*((_QWORD *)a2 + 4); i != v2; i = *(char **)i )
  {
    v6 = *((_DWORD *)i + 13) & 0x1F;
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v6);
    *((_DWORD *)i + 12) = *((_DWORD *)i + 12) & 0xFFFFFFF8 | 2;
    PageListForPage = PbmmGetPageListForPage(
                        *(struct PBMM_SEGMENT **)(*((_QWORD *)a1 + 2) + 8 * v6),
                        (const struct PBMM_PAGE *)(i - 16));
    PbmmAddPageToList(PageListForPage, (struct PBMM_PAGE *)(i - 16));
    PbmmDecrementCommittedPfns(a2, v7, (*((_DWORD *)i + 12) >> 3) & 0xF, (unsigned int)(1 << ((v9 >> 3) & 0xF)));
  }
}
