/*
 * XREFs of HalpProcessSecondarySignalList @ 0x14058F9F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x1402C4DEC (HalpReleaseHighLevelLock.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     HalpAcquireHighLevelLock @ 0x140426EEC (HalpAcquireHighLevelLock.c)
 */

void __fastcall HalpProcessSecondarySignalList(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned __int8 i; // al
  __int64 v5; // rbx
  __int64 v6; // rcx

  for ( i = HalpAcquireHighLevelLock(&SecondarySignalListLock); ; i = HalpAcquireHighLevelLock(&SecondarySignalListLock) )
  {
    v5 = SecondarySignalList;
    if ( (__int64 *)SecondarySignalList == &SecondarySignalList )
      break;
    if ( *(__int64 **)(SecondarySignalList + 8) != &SecondarySignalList
      || (v6 = *(_QWORD *)SecondarySignalList, *(_QWORD *)(*(_QWORD *)SecondarySignalList + 8LL) != SecondarySignalList) )
    {
      __fastfail(3u);
    }
    SecondarySignalList = *(_QWORD *)SecondarySignalList;
    *(_QWORD *)(v6 + 8) = &SecondarySignalList;
    HalpReleaseHighLevelLock(&SecondarySignalListLock, i);
    KeSetEvent((PRKEVENT)(v5 - 24), 0, 0);
  }
  SecondarySignalDpcRunning = 0;
  HalpReleaseHighLevelLock(&SecondarySignalListLock, i);
}
