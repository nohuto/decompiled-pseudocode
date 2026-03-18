/*
 * XREFs of ?PbmmFreeResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@_N@Z @ 0x14004BF48
 * Callers:
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x140119570 (-EvictResources@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N11PEAUVIDMM_LOCAL_.c)
 * Callees:
 *     ?PbmmDecrementCommittedPfns@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@W4PBMM_PAGE_SIZE@@I@Z @ 0x140052A14 (-PbmmDecrementCommittedPfns@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@W4PBMM_PAGE_SIZE@@I@Z.c)
 *     ?PbmmDecrementResidentPfns@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@W4PBMM_PAGE_SIZE@@2I@Z @ 0x140052A58 (-PbmmDecrementResidentPfns@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@W4PBMM_PAGE_SIZE@@2I@Z.c)
 *     MergePages @ 0x140052BA8 (MergePages.c)
 *     ?PbmmEvictPage@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@_N@Z @ 0x140052EAC (-PbmmEvictPage@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_PAGE@@_N@Z.c)
 *     ?PbmmReclaimPage@@YAXPEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@@Z @ 0x14005321C (-PbmmReclaimPage@@YAXPEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@@Z.c)
 */

void __fastcall PbmmFreeResources(struct PBMM_ALLOCATOR *a1, struct PBMM_PHYSICAL_ALLOC *a2, bool a3)
{
  _QWORD **v4; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  struct PBMM_PAGE *v9; // rbx
  __int64 v10; // rdi
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // r15d
  int v14; // eax

  v4 = (_QWORD **)((char *)a2 + 32);
  while ( 1 )
  {
    v7 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v7[1] != v4 || (v8 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *v4 = v8;
    v9 = (struct PBMM_PAGE *)(v7 - 2);
    v8[1] = v4;
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * (*((_DWORD *)v7 + 13) & 0x1F));
    v11 = *((_DWORD *)v7 + 12);
    v12 = (v11 >> 3) & 0xF;
    v13 = 1 << v12;
    if ( (v11 & 7) == 4 )
      PbmmDecrementCommittedPfns(a2, v10, v12, v13);
    else
      PbmmReclaimPage((struct PBMM_SEGMENT *)v10, v9);
    PbmmEvictPage(a1, a2, v9, a3);
    PbmmDecrementResidentPfns(a2, v10, (*((_DWORD *)v9 + 16) >> 7) & 0xF, (*((_DWORD *)v9 + 16) >> 3) & 0xF, v13);
    *((_DWORD *)v9 + 16) &= 0xFFFFFFF8;
    v14 = *((_DWORD *)v9 + 17);
    *((_QWORD *)v9 + 7) = 0LL;
    if ( (v14 & 0x1F) != 0 )
    {
      MergePages(a1, (struct PBMM_SEGMENT *)v10, v9);
    }
    else
    {
      ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 32), v9);
      --*(_QWORD *)(v10 + 2872);
    }
  }
}
