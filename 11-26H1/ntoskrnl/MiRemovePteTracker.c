/*
 * XREFs of MiRemovePteTracker @ 0x1404E696C
 * Callers:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     MmFreeMappingAddress @ 0x140B14CF0 (MmFreeMappingAddress.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiRemovePteTracker(ULONG_PTR BugCheckParameter3, unsigned __int64 a2, ULONG_PTR a3)
{
  _SLIST_ENTRY *v3; // rbx
  unsigned __int64 v6; // rdi
  ULONG_PTR v7; // r15
  KIRQL v8; // r14
  _SLIST_ENTRY *v9; // rdx
  _SLIST_ENTRY *Next; // r8
  _SLIST_ENTRY *v11; // rcx
  ULONG_PTR v12; // r9
  ULONG_PTR v13; // r9
  ULONG_PTR v14; // r9
  _SLIST_ENTRY *v15; // rcx
  _SLIST_ENTRY **v16; // rax

  v3 = 0LL;
  v6 = (40543 * (a2 >> 12)) ^ ((40543 * (a2 >> 12)) >> 32);
  v7 = a2 & 0xFFFFFFFFFFFFF000uLL;
  if ( KeGetCurrentIrql() == 2 )
  {
    v8 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E34B50);
  }
  else
  {
    v8 = ExAcquireSpinLockExclusive(&dword_140E34B50);
  }
  v9 = (_SLIST_ENTRY *)((char *)&unk_140E37A30 + 16 * (v6 & 0xF));
  Next = v9->Next;
  if ( v9->Next == v9 )
    goto LABEL_19;
  do
  {
    v11 = Next[2].Next;
    if ( v7 == ((unsigned __int64)v11 & 0xFFFFFFFFFFFFF000uLL) )
    {
      if ( v3 )
        KeBugCheckEx(0xDAu, 1uLL, (ULONG_PTR)Next, BugCheckParameter3, (ULONG_PTR)v3);
      v12 = *((_QWORD *)&Next[1].Next + 1);
      if ( v12 != a3 )
        KeBugCheckEx(0xDAu, 2uLL, (ULONG_PTR)Next, v12, a3);
      if ( BugCheckParameter3 && !_bittest16((const signed __int16 *)(BugCheckParameter3 + 10), 9u) )
      {
        v13 = *((_QWORD *)&Next[3].Next + 1);
        if ( v13 != *(_QWORD *)(BugCheckParameter3 + 48) )
          KeBugCheckEx(0xDAu, 4uLL, (ULONG_PTR)Next, v13, *(_QWORD *)(BugCheckParameter3 + 48));
        if ( !byte_140E3615C )
        {
          if ( v11 != *(_SLIST_ENTRY **)(BugCheckParameter3 + 24) )
            KeBugCheckEx(0xDAu, 3uLL, (ULONG_PTR)Next, (ULONG_PTR)Next[2].Next, *(_QWORD *)(BugCheckParameter3 + 24));
          v14 = *((_QWORD *)&Next[2].Next + 1);
          if ( v14 != *(_QWORD *)(BugCheckParameter3 + 32) )
            KeBugCheckEx(0xDAu, 5uLL, (ULONG_PTR)Next, v14, *(_QWORD *)(BugCheckParameter3 + 32));
        }
      }
      v15 = Next->Next;
      if ( *(&Next->Next->Next + 1) != Next || (v16 = (_SLIST_ENTRY **)*((_QWORD *)&Next->Next + 1), *v16 != Next) )
        __fastfail(3u);
      *v16 = v15;
      v3 = Next;
      *((_QWORD *)&v15->Next + 1) = v16;
    }
    Next = Next->Next;
  }
  while ( Next != v9 );
  if ( !v3 )
  {
LABEL_19:
    if ( !byte_140E34CE5 )
      KeBugCheckEx(0xDAu, 6uLL, BugCheckParameter3, v7, a3);
  }
  qword_140E37B30 -= a3;
  --qword_140E37B38;
  if ( v8 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E34B50);
  else
    ExReleaseSpinLockExclusive(&dword_140E34B50, v8);
  if ( v3 )
    RtlpInterlockedPushEntrySList(&stru_140E34B40, v3);
}
