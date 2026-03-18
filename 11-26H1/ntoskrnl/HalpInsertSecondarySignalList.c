/*
 * XREFs of HalpInsertSecondarySignalList @ 0x14058F77C
 * Callers:
 *     HalpReleaseSecondaryIcEntryShared @ 0x140423128 (HalpReleaseSecondaryIcEntryShared.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x14042683C (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     HalpReleaseHighLevelLock @ 0x1402C4DEC (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x140426EEC (HalpAcquireHighLevelLock.c)
 */

void __fastcall HalpInsertSecondarySignalList(__int64 a1)
{
  unsigned __int8 v2; // al
  _QWORD *v3; // rcx
  unsigned __int8 v4; // di
  _QWORD *v5; // rbx
  bool v6; // zf

  v2 = HalpAcquireHighLevelLock(&SecondarySignalListLock);
  v3 = (_QWORD *)qword_140F89A08;
  v4 = v2;
  v5 = (_QWORD *)(a1 + 144);
  if ( *(__int64 **)qword_140F89A08 != &SecondarySignalList )
    __fastfail(3u);
  v6 = SecondarySignalDpcRunning == 0;
  *v5 = &SecondarySignalList;
  v5[1] = v3;
  *v3 = v5;
  qword_140F89A08 = (__int64)v5;
  if ( v6 )
  {
    SecondarySignalDpcRunning = 1;
    KiInsertQueueDpc((ULONG_PTR)&SecondarySignalDpc, 0LL, 0LL, 0LL, 0);
  }
  HalpReleaseHighLevelLock(&SecondarySignalListLock, v4);
}
