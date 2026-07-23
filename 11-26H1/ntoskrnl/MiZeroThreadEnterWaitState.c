/*
 * XREFs of MiZeroThreadEnterWaitState @ 0x1404E6364
 * Callers:
 *     MiBackgroundZeroNodePages @ 0x140491210 (MiBackgroundZeroNodePages.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiSelectBestZeroingProcessor @ 0x1402F59A4 (MiSelectBestZeroingProcessor.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     MiZeroThreadContextSetExiting @ 0x140476960 (MiZeroThreadContextSetExiting.c)
 *     MiZeroThreadStopZeroing @ 0x1404EF578 (MiZeroThreadStopZeroing.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiZeroThreadEnterWaitState(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  unsigned int i; // eax
  KIRQL v5; // bl
  int v6; // ebp
  volatile LONG *v7; // rcx
  KIRQL v8; // bl
  volatile LONG *v9; // rcx
  PVOID Object[4]; // [rsp+40h] [rbp-D8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+60h] [rbp-B8h] BYREF

  if ( (unsigned int)MiZeroThreadStopZeroing(a1) )
  {
    v2 = *(_QWORD *)(a1 + 80);
    v3 = *(_QWORD *)(*(_QWORD *)(v2 + 136) + 48LL);
    Object[1] = &stru_140E2ED08.Timer.Header.WaitListHead;
    Object[0] = (PVOID)(v3 + 88);
    Object[2] = (PVOID)(a1 + 136);
    for ( i = KeWaitForMultipleObjects(3u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
          i > 1;
          i = KeWaitForMultipleObjects(3u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray) )
    {
      while ( stru_140E366D8.SystemCallNumber )
      {
        if ( !KeWaitForSingleObject(Object[0], WrFreePage, 0, 0, (PLARGE_INTEGER)&MiFiveSeconds) )
          goto LABEL_11;
      }
      v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(v2 + 184) + 14200LL));
      v6 = MiSelectBestZeroingProcessor(v2, a1);
      v7 = (volatile LONG *)(*(_QWORD *)(v2 + 184) + 14200LL);
      if ( v5 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v7);
      else
        ExReleaseSpinLockExclusive(v7, v5);
      if ( v6 )
        return 1LL;
    }
LABEL_11:
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(v2 + 184) + 14200LL));
    MiZeroThreadContextSetExiting(a1);
    v9 = (volatile LONG *)(*(_QWORD *)(v2 + 184) + 14200LL);
    if ( v8 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v9);
    else
      ExReleaseSpinLockExclusive(v9, v8);
  }
  return 0LL;
}
