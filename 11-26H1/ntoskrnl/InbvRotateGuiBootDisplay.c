/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x1405C4F80
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     InbvAcquireLock @ 0x1405C4A9C (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x1405C4B00 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x1405C4C7C (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1405C4D2C (InbvReleaseLock.c)
 *     InbvReleaseResources @ 0x1405C4D5C (InbvReleaseResources.c)
 *     RotBarUpdate @ 0x1405C50E0 (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x140956130 (PsTerminateSystemThread.c)
 */

void __fastcall InbvRotateGuiBootDisplay(PVOID StartContext)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  Interval.QuadPart = -800000LL;
  do
  {
    KeDelayExecutionThread(0, 0, &Interval);
    InbvAcquireLock(v2, v1);
    if ( !(unsigned int)InbvGetDisplayState(v4, v3) && RotBarSelection == 1 )
      RotBarUpdate();
    InbvReleaseLock(v6, v5);
  }
  while ( InbvCheckDisplayOwnership(v8, v7) );
  InbvReleaseResources(v10, v9);
  PsTerminateSystemThread(0);
}
