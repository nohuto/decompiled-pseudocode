/*
 * XREFs of HalpRegisterProfileSourceInterruptHandler @ 0x14052E258
 * Callers:
 *     HalpSetSystemInformation @ 0x140B10D50 (HalpSetSystemInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall HalpRegisterProfileSourceInterruptHandler(__int64 a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // dl

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpPerfInterruptHandlerRegistrationLock);
  if ( qword_140E10BD0 )
  {
    if ( qword_140E10BD0 == KeGetCurrentThread()[1].CycleTime )
    {
      HalpPerfInterruptHandler = a1;
      if ( !a1 )
        qword_140E10BD0 = 0LL;
    }
    else
    {
      v2 = -1073741823;
    }
  }
  else
  {
    HalpPerfInterruptHandler = a1;
    if ( a1 )
      qword_140E10BD0 = KeGetCurrentThread()[1].CycleTime;
  }
  KeReleaseSpinLock(&HalpPerfInterruptHandlerRegistrationLock, v3);
  return v2;
}
