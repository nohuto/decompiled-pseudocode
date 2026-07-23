/*
 * XREFs of CmShutdownSystem0 @ 0x1406E64C8
 * Callers:
 *     CmShutdownSystem @ 0x14085A594 (CmShutdownSystem.c)
 * Callees:
 *     CmFcShutdownSystem @ 0x14085AFA4 (CmFcShutdownSystem.c)
 */

__int64 CmShutdownSystem0()
{
  __int64 result; // rax

  result = CmFcShutdownSystem(0LL);
  HIDWORD(WheapPfaLock.RelativeTimerBias) = 0;
  LOBYTE(WheapPfaLock.Timer.DueTime.LowPart) = 1;
  return result;
}
