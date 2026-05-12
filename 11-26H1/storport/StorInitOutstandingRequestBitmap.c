/*
 * XREFs of StorInitOutstandingRequestBitmap @ 0x14011E3A0
 * Callers:
 *     NvmeControllerInitializeAdminQueue @ 0x1400F5F24 (NvmeControllerInitializeAdminQueue.c)
 *     NvmeControllerIoQueuesInitialize @ 0x1400F71AC (NvmeControllerIoQueuesInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

__int64 __fastcall StorInitOutstandingRequestBitmap(__int64 a1)
{
  unsigned int v1; // r14d
  ULONG RecommendedSharedDataAlignment; // esi
  ULONG v5; // ebx
  ULONG v6; // eax
  int v7; // ecx
  __int64 Pool; // rax

  v1 = *(_DWORD *)(a1 + 124);
  if ( !v1 )
    return 3221225485LL;
  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  v5 = KeGetRecommendedSharedDataAlignment();
  v6 = KeGetRecommendedSharedDataAlignment();
  v7 = (v1 >> 3) + 1;
  if ( (v1 & 7) == 0 )
    v7 = v1 >> 3;
  Pool = RaidAllocatePool(
           72LL,
           RecommendedSharedDataAlignment * ((v7 + v6 - 1) / v5),
           1380082002LL,
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 128LL) + 8LL));
  *(_QWORD *)(a1 + 80) = Pool;
  return Pool == 0 ? 0xC000009A : 0;
}
