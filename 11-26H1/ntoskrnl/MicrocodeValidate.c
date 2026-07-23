/*
 * XREFs of MicrocodeValidate @ 0x1406E1E10
 * Callers:
 *     PrExtControlOperations @ 0x1406E0CC8 (PrExtControlOperations.c)
 * Callees:
 *     GetCpuManufacturer @ 0x1406E2838 (GetCpuManufacturer.c)
 */

__int64 __fastcall MicrocodeValidate(int a1)
{
  unsigned __int64 v1; // rax

  LODWORD(CmpContextListLock.Timer.Header.WaitListHead.Flink) = a1;
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
  if ( HIDWORD(CmpContextListLock.RelativeTimerBias) )
  {
    if ( HIDWORD(CmpContextListLock.RelativeTimerBias) <= (unsigned int)v1 )
    {
      if ( LODWORD(CmpContextListLock.Teb) == (_DWORD)v1 )
      {
        CmpContextListLock.Timer.Header.SignalState = 7;
      }
      else
      {
        if ( HIDWORD(CmpContextListLock.RelativeTimerBias) == (_DWORD)v1
          && (CmpContextListLock.Timer.Header.SignalState == 4 || CmpContextListLock.Timer.Header.SignalState == 10) )
        {
          CmpContextListLock.Timer.Header.SignalState = 0;
        }
        *(void **)((char *)&CmpContextListLock.Teb + 4) = (void *)CmpContextListLock.RelativeTimerBias;
      }
    }
    else
    {
      CmpContextListLock.Timer.Header.SignalState = 3;
    }
  }
  else
  {
    CmpContextListLock.Timer.Header.SignalState = 6;
  }
  return 0LL;
}
