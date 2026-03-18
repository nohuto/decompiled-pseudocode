/*
 * XREFs of MicrocodeValidate @ 0x1406DDB70
 * Callers:
 *     PrExtControlOperations @ 0x1406DCA28 (PrExtControlOperations.c)
 * Callees:
 *     GetCpuManufacturer @ 0x1406DE598 (GetCpuManufacturer.c)
 */

__int64 __fastcall MicrocodeValidate(int a1)
{
  unsigned __int64 v1; // rax

  LODWORD(CmpCallbackListLock.Timer.Header.WaitListHead.Blink) = a1;
  if ( (unsigned __int8)GetCpuManufacturer(2LL) )
  {
    v1 = __readmsr(0x8Bu);
  }
  else
  {
    if ( !(unsigned __int8)GetCpuManufacturer(1LL) )
      return 3221225659LL;
    v1 = __readmsr(0x8Bu) >> 32;
  }
  if ( CmpCallbackListLock.Timer.Header.SignalState )
  {
    if ( CmpCallbackListLock.Timer.Header.SignalState <= (unsigned int)v1 )
    {
      if ( LODWORD(CmpCallbackListLock.RelativeTimerBias) == (_DWORD)v1 )
      {
        HIDWORD(CmpCallbackListLock.Timer.Header.WaitListHead.Flink) = 7;
      }
      else
      {
        if ( CmpCallbackListLock.Timer.Header.SignalState == (_DWORD)v1
          && (HIDWORD(CmpCallbackListLock.Timer.Header.WaitListHead.Flink) == 4
           || HIDWORD(CmpCallbackListLock.Timer.Header.WaitListHead.Flink) == 10) )
        {
          HIDWORD(CmpCallbackListLock.Timer.Header.WaitListHead.Flink) = 0;
        }
        HIDWORD(CmpCallbackListLock.RelativeTimerBias) = CmpCallbackListLock.Timer.Header.Lock;
        CmpCallbackListLock.Timer.Header.LockNV = CmpCallbackListLock.Timer.Header.SignalState;
      }
    }
    else
    {
      HIDWORD(CmpCallbackListLock.Timer.Header.WaitListHead.Flink) = 3;
    }
  }
  else
  {
    HIDWORD(CmpCallbackListLock.Timer.Header.WaitListHead.Flink) = 6;
  }
  return 0LL;
}
