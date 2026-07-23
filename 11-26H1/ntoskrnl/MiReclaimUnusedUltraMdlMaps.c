/*
 * XREFs of MiReclaimUnusedUltraMdlMaps @ 0x1402A5D98
 * Callers:
 *     MiSystemPeriodicTick @ 0x1402A63BC (MiSystemPeriodicTick.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiDeleteUltraMapContext @ 0x14045E5A0 (MiDeleteUltraMapContext.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void MiReclaimUnusedUltraMdlMaps()
{
  int v0; // esi
  unsigned int v1; // ebx
  __int64 v2; // r14
  _SLIST_HEADER *v3; // rdi
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
      v3 = (_SLIST_HEADER *)(qword_140E34D70 + ((unsigned __int64)v1 << 9));
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
      v6 = ExAcquireSpinLockExclusive(&dword_140E34D28);
      dword_140E34D68 -= v0;
      if ( v6 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E34D28);
      else
        ExReleaseSpinLockExclusive(&dword_140E34D28, v6);
    }
  }
}
