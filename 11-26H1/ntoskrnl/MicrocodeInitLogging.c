/*
 * XREFs of MicrocodeInitLogging @ 0x1406E1B38
 * Callers:
 *     GetMicrocodePatchData @ 0x1406E16D0 (GetMicrocodePatchData.c)
 *     MicrocodeUpdate @ 0x1406E1C10 (MicrocodeUpdate.c)
 * Callees:
 *     <none>
 */

void __fastcall MicrocodeInitLogging(int a1, int a2)
{
  if ( !*((_DWORD *)&CmpContextListLock.SwapListEntry + 2) )
    *((_DWORD *)&CmpContextListLock.SwapListEntry + 2) = 1;
  if ( a1 )
  {
    LODWORD(CmpContextListLock.Queue) = a1;
    *((_DWORD *)&CmpContextListLock.SwapListEntry + 3) = a2;
    LODWORD(CmpContextListLock.Timer.Header.WaitListHead.Flink) = 2;
  }
}
