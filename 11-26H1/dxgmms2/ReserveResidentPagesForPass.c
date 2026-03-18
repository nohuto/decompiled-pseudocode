/*
 * XREFs of ReserveResidentPagesForPass @ 0x140051A20
 * Callers:
 *     PrepareReservePass @ 0x1400519E8 (PrepareReservePass.c)
 * Callees:
 *     ?PbmmCompleteReservePage@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@IPEAUPBMM_PAGE@@@Z @ 0x1400515AC (-PbmmCompleteReservePage@@YAXPEAUPBMM_PHYSICAL_ALLOC@@PEAUPBMM_SEGMENT@@IPEAUPBMM_PAGE@@@Z.c)
 *     ?PbmmReclaimPage@@YAXPEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@@Z @ 0x14005321C (-PbmmReclaimPage@@YAXPEAUPBMM_SEGMENT@@PEAUPBMM_PAGE@@@Z.c)
 */

void __fastcall ReserveResidentPagesForPass(__int64 a1, __int64 a2)
{
  _QWORD *i; // rbx
  __int64 *j; // rdi
  struct PBMM_SEGMENT *v5; // r10

  for ( i = *(_QWORD **)(a2 + 8LL * *(unsigned int *)(a2 + 52)); i; i = (_QWORD *)*i )
  {
    for ( j = (__int64 *)i[1]; j != i + 1; j = (__int64 *)*j )
    {
      if ( (j[6] & 7) != 4 )
      {
        PbmmReclaimPage(
          *(struct PBMM_SEGMENT **)(*(_QWORD *)(a1 + 16) + 8LL * (*((_DWORD *)j + 13) & 0x1F)),
          (struct PBMM_PAGE *)(j - 2));
        PbmmCompleteReservePage(
          (struct PBMM_PHYSICAL_ALLOC *)(i - 3),
          v5,
          (*((_DWORD *)j + 12) >> 11) & 0xFFFFF,
          (struct PBMM_PAGE *)(j - 2));
      }
    }
  }
}
