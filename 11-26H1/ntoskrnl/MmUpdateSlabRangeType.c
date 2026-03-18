/*
 * XREFs of MmUpdateSlabRangeType @ 0x140CFE76C
 * Callers:
 *     PsDispatchIumService @ 0x14040C830 (PsDispatchIumService.c)
 * Callees:
 *     MiSetSlabTypeIdentifiers @ 0x140206F68 (MiSetSlabTypeIdentifiers.c)
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MiRemoveSlabEntry @ 0x1402A9800 (MiRemoveSlabEntry.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiEnumerateSlabAllocatorsEx @ 0x1404A0C04 (MiEnumerateSlabAllocatorsEx.c)
 *     MiInsertSlabEntry @ 0x1404C33F4 (MiInsertSlabEntry.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

__int64 __fastcall MmUpdateSlabRangeType(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  __int64 result; // rax
  int v4; // r15d
  ULONG_PTR v5; // rsi
  bool i; // zf
  unsigned int v8; // eax
  __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  ULONG_PTR v11; // r9
  __int64 v12; // r14
  __int64 v13; // r12
  unsigned int v14; // eax
  unsigned __int64 v15; // r13
  KIRQL v16; // r15
  volatile LONG *v17; // rcx
  ULONG_PTR v18; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  result = (unsigned int)dword_140E37CC4;
  v4 = a3;
  v5 = BugCheckParameter3;
  if ( (dword_140E37CC4 & 8) != 0 )
  {
    for ( i = BugCheckParameter3 == 0; !i; i = v5 == 0 )
    {
      v8 = MiPageToNode(BugCheckParameter2);
      v9 = v8;
      v19 = 0LL;
      v18 = BugCheckParameter2;
      MiEnumerateSlabAllocatorsEx(
        (__int64)&MiSystemPartition,
        (__int64)MiUpdateSlabRangeTypeHelper,
        (__int64)&v18,
        v8,
        9u);
      v10 = v19;
      if ( !v19 )
        KeBugCheckEx(0x1Au, 0x3030313uLL, BugCheckParameter2, v5, v4);
      v11 = *(_QWORD *)(v19 + 40);
      if ( v11 != BugCheckParameter2 )
        KeBugCheckEx(0x1Au, 0x3030314uLL, BugCheckParameter2, v11, 0LL);
      v12 = *(_QWORD *)(v19 + 56);
      v13 = LODWORD(MiPageSizes[((unsigned __int64)*(unsigned __int16 *)(v12 + 136) >> 3) & 3]);
      v14 = *(_DWORD *)(v12 + 128);
      if ( v14 <= 4 && v14 != 2 )
        KeBugCheckEx(0x1Au, 0x3030315uLL, BugCheckParameter2, *(_QWORD *)(v19 + 56), *(int *)(v12 + 128));
      result = qword_140E37CD0 + 14752;
      v15 = 56320 * v9 + qword_140E37CD0 + 14752 + 232LL * MmSlabTypeToMiSlabType[v4];
      if ( v15 != v12 )
      {
        v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 16));
        MiRemoveSlabEntry((__int64)&MiSystemPartition, v12, v10);
        v17 = (volatile LONG *)(v12 + 16);
        if ( v16 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(v17);
        else
          ExReleaseSpinLockExclusive(v17, v16);
        MiSetSlabTypeIdentifiers(
          *(_QWORD *)(v10 + 40),
          v13,
          *(_DWORD *)(v15 + 128),
          0,
          (*(_DWORD *)(v10 + 92) >> 1) & 1);
        *(_QWORD *)(v10 + 56) = v15;
        result = MiInsertSlabEntry((__int64)&MiSystemPartition, v15, v10, 0);
        v4 = a3;
      }
      BugCheckParameter2 += v13;
      v5 -= v13;
    }
  }
  return result;
}
