/*
 * XREFs of PfSnActivateTrace @ 0x1404CA628
 * Callers:
 *     PfSnBeginTrace @ 0x1409D002C (PfSnBeginTrace.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PfSnAddProcessTrace @ 0x14053306C (PfSnAddProcessTrace.c)
 */

__int64 __fastcall PfSnActivateTrace(__int64 a1)
{
  KIRQL v2; // si
  int v3; // ebx
  _QWORD *KernelStack; // rdx
  unsigned int **v5; // rcx

  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&stru_140E66D40.Padding[3]) )
  {
    *(_WORD *)(a1 + 486) |= 2u;
    v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140E67200.StateSaveArea);
    v3 = PfSnAddProcessTrace(*(_QWORD *)(a1 + 352), a1);
    if ( v3 >= 0 )
    {
      KernelStack = stru_140E67200.KernelStack;
      v5 = (unsigned int **)(a1 + 8);
      if ( *(struct _KTHREAD **)stru_140E67200.KernelStack != (struct _KTHREAD *)&stru_140E67200.CurrentRunTime )
        __fastfail(3u);
      ++LODWORD(stru_140E67200.ThreadLock);
      *v5 = &stru_140E67200.CurrentRunTime;
      v3 = 0;
      *(_QWORD *)(a1 + 16) = KernelStack;
      *KernelStack = v5;
      stru_140E67200.KernelStack = (void *)(a1 + 8);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_140E67200.StateSaveArea, v2);
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return (unsigned int)v3;
}
