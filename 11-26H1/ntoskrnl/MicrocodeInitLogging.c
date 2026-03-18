/*
 * XREFs of MicrocodeInitLogging @ 0x1406DD898
 * Callers:
 *     GetMicrocodePatchData @ 0x1406DD430 (GetMicrocodePatchData.c)
 *     MicrocodeUpdate @ 0x1406DD970 (MicrocodeUpdate.c)
 * Callees:
 *     <none>
 */

void __fastcall MicrocodeInitLogging(int a1, int a2)
{
  if ( !LODWORD(CmpCallbackListLock.Queue) )
    LODWORD(CmpCallbackListLock.Queue) = 1;
  if ( a1 )
  {
    LODWORD(CmpCallbackListLock.Teb) = a1;
    HIDWORD(CmpCallbackListLock.Queue) = a2;
    LODWORD(CmpCallbackListLock.Timer.Header.WaitListHead.Blink) = 2;
  }
}
