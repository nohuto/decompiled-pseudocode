/*
 * XREFs of MiReclaimUnusedUltraMdlMaps @ 0x1402A697C
 * Callers:
 *     MiSystemPeriodicTick @ 0x1402A6FA0 (MiSystemPeriodicTick.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDeleteUltraMapContext @ 0x1404655E0 (MiDeleteUltraMapContext.c)
 *     RtlpInterlockedPopEntrySList @ 0x140730C90 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void MiReclaimUnusedUltraMdlMaps()
{
  int v0; // esi
  unsigned int v1; // ebx
  __int64 v2; // r14
  union _SLIST_HEADER *v3; // rdi
  PSLIST_ENTRY v4; // rax
  PSLIST_ENTRY v5; // rbp
  KIRQL v6; // al

  v0 = 0;
  v1 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v2 = 8LL;
      v3 = (union _SLIST_HEADER *)(qword_140E34BF0 + ((unsigned __int64)v1 << 9));
      do
      {
        while ( LOWORD(v3->Alignment) > 2u )
        {
          v4 = RtlpInterlockedPopEntrySList(v3);
          v5 = v4;
          if ( !v4 )
            break;
          ++v0;
          MiDeleteUltraMapContext(&v4->Next + 1, 3LL);
          ExFreePoolWithTag(v5, 0);
        }
        v3 += 4;
        --v2;
      }
      while ( v2 );
      ++v1;
    }
    while ( v1 < (unsigned __int16)KeNumberNodes );
    if ( v0 )
    {
      v6 = ExAcquireSpinLockExclusive(&dword_140E34BA8);
      dword_140E34BE8 -= v0;
      if ( v6 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E34BA8);
      else
        ExReleaseSpinLockExclusive(&dword_140E34BA8, v6);
    }
  }
}
