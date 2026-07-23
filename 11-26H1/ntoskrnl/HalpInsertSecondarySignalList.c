/*
 * XREFs of HalpInsertSecondarySignalList @ 0x140591EFC
 * Callers:
 *     HalpReleaseSecondaryIcEntryShared @ 0x140430218 (HalpReleaseSecondaryIcEntryShared.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x14043394C (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 */

void __fastcall HalpInsertSecondarySignalList(__int64 a1)
{
  unsigned __int8 v2; // al
  _QWORD *v3; // rcx
  unsigned __int8 v4; // di
  _QWORD *v5; // rbx
  bool v6; // zf

  v2 = HalpAcquireHighLevelLock(&SecondarySignalListLock);
  v3 = (_QWORD *)qword_140F89DC8;
  v4 = v2;
  v5 = (_QWORD *)(a1 + 144);
  if ( *(__int64 **)qword_140F89DC8 != &SecondarySignalList )
    __fastfail(3u);
  v6 = SecondarySignalDpcRunning == 0;
  *v5 = &SecondarySignalList;
  v5[1] = v3;
  *v3 = v5;
  qword_140F89DC8 = (__int64)v5;
  if ( v6 )
  {
    SecondarySignalDpcRunning = 1;
    KiInsertQueueDpc((ULONG_PTR)&SecondarySignalDpc, 0LL, 0LL, 0LL, 0);
  }
  HalpReleaseHighLevelLock(&SecondarySignalListLock, v4);
}
