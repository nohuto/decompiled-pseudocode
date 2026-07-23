/*
 * XREFs of InbvRotateGuiBootDisplay @ 0x1405C77F0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     InbvAcquireLock @ 0x1405C730C (InbvAcquireLock.c)
 *     InbvCheckDisplayOwnership @ 0x1405C7370 (InbvCheckDisplayOwnership.c)
 *     InbvGetDisplayState @ 0x1405C74EC (InbvGetDisplayState.c)
 *     InbvReleaseLock @ 0x1405C759C (InbvReleaseLock.c)
 *     InbvReleaseResources @ 0x1405C75CC (InbvReleaseResources.c)
 *     RotBarUpdate @ 0x1405C7950 (RotBarUpdate.c)
 *     PsTerminateSystemThread @ 0x140949E90 (PsTerminateSystemThread.c)
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
