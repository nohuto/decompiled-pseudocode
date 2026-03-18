/*
 * XREFs of MicrocodePrePatchCheckAndLogging @ 0x1406DD8D0
 * Callers:
 *     GetMicrocodePatchData @ 0x1406DD430 (GetMicrocodePatchData.c)
 *     MicrocodeUpdate @ 0x1406DD970 (MicrocodeUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MicrocodePrePatchCheckAndLogging(unsigned int a1, unsigned int a2)
{
  unsigned int RelativeTimerBias; // eax
  __int64 result; // rax
  bool v4; // zf

  RelativeTimerBias = CmpCallbackListLock.RelativeTimerBias;
  HIDWORD(CmpCallbackListLock.RelativeTimerBias) = a1;
  if ( !LODWORD(CmpCallbackListLock.RelativeTimerBias) )
  {
    RelativeTimerBias = a1;
    LODWORD(CmpCallbackListLock.RelativeTimerBias) = a1;
  }
  if ( !a2 )
  {
    HIDWORD(CmpCallbackListLock.Timer.Header.WaitListHead.Flink) = 6;
    result = 3221225473LL;
    goto LABEL_16;
  }
  if ( a2 >= a1 )
  {
    result = 3221225473LL;
    if ( a2 == a1 )
    {
      HIDWORD(CmpCallbackListLock.Timer.Header.WaitListHead.Flink) = 2;
      goto LABEL_16;
    }
    if ( a2 <= a1 )
      goto LABEL_16;
    HIDWORD(CmpCallbackListLock.Timer.Header.WaitListHead.Flink) = 4;
LABEL_15:
    result = 0LL;
    LODWORD(CmpCallbackListLock.Queue) = 2;
    goto LABEL_16;
  }
  if ( CmpCallbackListLock.WaitBlockFill5[34] )
  {
    HIDWORD(CmpCallbackListLock.Timer.Header.WaitListHead.Flink) = 10;
    goto LABEL_15;
  }
  v4 = RelativeTimerBias == a1;
  result = 3221225473LL;
  if ( v4 )
    HIDWORD(CmpCallbackListLock.Timer.Header.WaitListHead.Flink) = 7;
  else
    HIDWORD(CmpCallbackListLock.Timer.Header.WaitListHead.Flink) = 1;
LABEL_16:
  CmpCallbackListLock.Timer.Header.LockNV = a1;
  return result;
}
