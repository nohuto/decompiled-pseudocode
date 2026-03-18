/*
 * XREFs of IpmiLibpDelay @ 0x14071D864
 * Callers:
 *     IpmiLibpKcsSpinRegister @ 0x14071DF0C (IpmiLibpKcsSpinRegister.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     KeStallExecutionProcessor @ 0x14037BEF0 (KeStallExecutionProcessor.c)
 */

void __fastcall IpmiLibpDelay(LARGE_INTEGER a1, ULONG a2)
{
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval = a1;
  if ( (WheapConfigTableLock.Timer.Header.Type & 4) != 0 || a2 < 0x32 )
  {
    KeStallExecutionProcessor(a2);
  }
  else
  {
    Interval.QuadPart = (int)(-10 * a2);
    KeDelayExecutionThread(0, 0, &Interval);
  }
}
