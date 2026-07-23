/*
 * XREFs of MiRemoveMappedPtes @ 0x140341C78
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiLocateSubsectionNode @ 0x1402C68F0 (MiLocateSubsectionNode.c)
 *     MiOffsetToProtos @ 0x1403422D4 (MiOffsetToProtos.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiRemoveViewsFromSection @ 0x14036F4F0 (MiRemoveViewsFromSection.c)
 *     MiCheckControlArea @ 0x14036FA60 (MiCheckControlArea.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 *     MiDecrementLargeSubsections @ 0x1404FF5B8 (MiDecrementLargeSubsections.c)
 */

__int64 __fastcall MiRemoveMappedPtes(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  unsigned __int64 v6; // rsi
  __int64 v7; // rdi
  int v8; // r14d
  __int64 v9; // rbx
  ULONG_PTR v10; // rsi
  __int64 v11; // rbx
  BOOL v12; // ebp
  __int64 v13; // rdx
  KIRQL v14; // r14
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  _DWORD *SubsectionNode; // rax
  _OWORD v19[3]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v20; // [rsp+70h] [rbp-48h]
  __int64 v21; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+10h]
  __int64 v23; // [rsp+D0h] [rbp+18h]

  v22 = a2;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 88);
  memset(v19, 0, sizeof(v19));
  v6 = v3 >> 12;
  v21 = 0LL;
  v20 = 0LL;
  v7 = *(_QWORD *)v2;
  v8 = *(_DWORD *)(a1 + 56);
  v23 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(*(_QWORD *)v2 + 60LL) & 0x3FF));
  if ( (*(_DWORD *)(v7 + 56) & 0x20) != 0 )
  {
    v9 = 0LL;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 24) << 12;
    v2 = MiOffsetToProtos(v7, v9, &v21);
  }
  if ( (v8 & 0xC) == 0xC )
  {
    MiDecommitPages((v4 >> 9) & 0xFFFFFFF8, v6, v7, 0, 0LL, 80, 0LL, (__int64)v19);
  }
  else
  {
    SubsectionNode = MiLocateSubsectionNode(v7, v9 + (v6 << 12) - 1, 0);
    MiDecrementLargeSubsections(v2, SubsectionNode);
  }
  v10 = 0LL;
  if ( (*(_DWORD *)(v7 + 56) & 0x20) == 0 )
    v10 = v2;
  v11 = 0LL;
  v12 = *(_QWORD *)(v7 + 64) != 0LL;
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v7 + 72));
  if ( v10 )
    v11 = MiRemoveViewsFromSection(v10);
  --*(_QWORD *)(v7 + 48);
  LOBYTE(v13) = v14;
  --*(_QWORD *)(v7 + 40);
  result = MiCheckControlArea(v7, v13);
  v16 = *(_QWORD *)(a1 + 40);
  if ( v16 )
  {
    result = *((_QWORD *)&v19[0] + 1);
    v17 = v16 - *((_QWORD *)&v19[0] + 1);
    if ( !*((_QWORD *)&v19[0] + 1) )
      v17 = *(_QWORD *)(a1 + 40);
    if ( v17 )
      result = MiReturnCommit(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v22 + 174)), v17, 0LL);
  }
  if ( v11 )
    return MiReturnCrossPartitionSectionCharges(v23, v12, v11);
  return result;
}
