/*
 * XREFs of UserSleep @ 0x1401A50A0
 * Callers:
 *     ?Reconnect@CIVChannel@@AEAAJXZ @ 0x140222520 (-Reconnect@CIVChannel@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall UserSleep(int a1)
{
  union _LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -10000LL * a1;
  return KeDelayExecutionThread(1, 0, &Interval);
}
