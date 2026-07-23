/*
 * XREFs of HalpRegisterProcessorTraceInterruptHandler @ 0x14059D16C
 * Callers:
 *     HalpSetSystemInformation @ 0x140B12AD0 (HalpSetSystemInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall HalpRegisterProcessorTraceInterruptHandler(__int64 a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // dl

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&HalpPerfInterruptHandlerRegistrationLock);
  if ( qword_140E10D00 )
  {
    if ( qword_140E10D00 == KeGetCurrentThread()[1].CycleTime )
    {
      HalpProcessorTraceInterruptHandler = a1;
      if ( !a1 )
        qword_140E10D00 = 0LL;
    }
    else
    {
      v2 = -1073741823;
    }
  }
  else
  {
    HalpProcessorTraceInterruptHandler = a1;
    if ( a1 )
      qword_140E10D00 = KeGetCurrentThread()[1].CycleTime;
  }
  KeReleaseSpinLock(&HalpPerfInterruptHandlerRegistrationLock, v3);
  return v2;
}
