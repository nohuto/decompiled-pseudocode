/*
 * XREFs of HalpProcessSecondarySignalList @ 0x140592170
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
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
