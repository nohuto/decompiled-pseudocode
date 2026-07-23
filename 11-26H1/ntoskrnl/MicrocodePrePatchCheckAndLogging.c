/*
 * XREFs of MicrocodePrePatchCheckAndLogging @ 0x1406E1B70
 * Callers:
 *     GetMicrocodePatchData @ 0x1406E16D0 (GetMicrocodePatchData.c)
 *     MicrocodeUpdate @ 0x1406E1C10 (MicrocodeUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MicrocodePrePatchCheckAndLogging(unsigned int a1, unsigned int a2)
{
  unsigned int Teb; // eax
  __int64 result; // rax
  bool v4; // zf

  Teb = (unsigned int)CmpContextListLock.Teb;
  HIDWORD(CmpContextListLock.Teb) = a1;
  if ( !LODWORD(CmpContextListLock.Teb) )
  {
    Teb = a1;
    LODWORD(CmpContextListLock.Teb) = a1;
  }
  if ( !a2 )
  {
    CmpContextListLock.Timer.Header.SignalState = 6;
    result = 3221225473LL;
    goto LABEL_16;
  }
  if ( a2 >= a1 )
  {
    result = 3221225473LL;
    if ( a2 == a1 )
    {
      CmpContextListLock.Timer.Header.SignalState = 2;
      goto LABEL_16;
    }
    if ( a2 <= a1 )
      goto LABEL_16;
    CmpContextListLock.Timer.Header.SignalState = 4;
LABEL_15:
    result = 0LL;
    *((_DWORD *)&CmpContextListLock.SwapListEntry + 2) = 2;
    goto LABEL_16;
  }
  if ( CmpContextListLock.WaitBlockFill5[26] )
  {
    CmpContextListLock.Timer.Header.SignalState = 10;
    goto LABEL_15;
  }
  v4 = Teb == a1;
  result = 3221225473LL;
  if ( v4 )
    CmpContextListLock.Timer.Header.SignalState = 7;
  else
    CmpContextListLock.Timer.Header.SignalState = 1;
LABEL_16:
  LODWORD(CmpContextListLock.RelativeTimerBias) = a1;
  return result;
}
