/*
 * XREFs of PrepareReservePass @ 0x1400519E8
 * Callers:
 *     ?PbmmFinalizeReserveState@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@@Z @ 0x140051920 (-PbmmFinalizeReserveState@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@@Z.c)
 *     ?PbmmReserveResources@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@I@Z @ 0x140051954 (-PbmmReserveResources@@YAJPEAUPBMM_ALLOCATOR@@PEAUPBMM_RESERVE_STATE@@I@Z.c)
 * Callees:
 *     ReserveResidentPagesForPass @ 0x140051A20 (ReserveResidentPagesForPass.c)
 */

__int64 __fastcall PrepareReservePass(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(a2 + 8LL * a3);
  if ( v3 )
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(v3 + 8);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a2 + 8LL * a3);
  *(_DWORD *)(a2 + 48) = 0;
  return ReserveResidentPagesForPass();
}
