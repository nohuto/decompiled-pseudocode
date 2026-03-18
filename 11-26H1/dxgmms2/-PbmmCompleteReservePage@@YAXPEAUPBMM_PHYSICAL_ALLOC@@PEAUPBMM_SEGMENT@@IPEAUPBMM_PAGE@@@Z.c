/*
 * XREFs of ?PbmmCompleteReservePage@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@IPEAUPBMM_PAGE@@@Z @ 0x1400515AC
 * Callers:
 *     ReserveResidentPagesForPass @ 0x140051A20 (ReserveResidentPagesForPass.c)
 *     ReserveResourcesFromSegment @ 0x140051BBC (ReserveResourcesFromSegment.c)
 *     ?PbmmReserveContiguousPages@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@PEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_RESERVE_STATE@@I@Z @ 0x14005354C (-PbmmReserveContiguousPages@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_VIDMEM_SEGMENT@@W4PBMM_REGIONTYPE@@.c)
 * Callees:
 *     <none>
 */

void __fastcall PbmmCompleteReservePage(
        struct PBMM_PHYSICAL_ALLOC *a1,
        struct PBMM_SEGMENT *a2,
        int a3,
        struct PBMM_PAGE *a4)
{
  int v4; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx

  v4 = *((_DWORD *)a4 + 2);
  *((_DWORD *)a4 + 17) |= 0x200000u;
  *((_DWORD *)a4 + 2) = v4 ^ (a3 ^ v4) & 0xFFFFF;
  *(_QWORD *)a4 = *((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 2) = a4;
  v7 = (*((_DWORD *)a4 + 16) >> 3) & 0xF;
  v8 = (unsigned int)(1 << ((*((_DWORD *)a4 + 16) >> 3) & 0xF));
  *((_DWORD *)a1 + 19) += v8;
  *((_QWORD *)a2 + 5) += v8;
  ++*((_QWORD *)a2 + v7 + 38);
}
