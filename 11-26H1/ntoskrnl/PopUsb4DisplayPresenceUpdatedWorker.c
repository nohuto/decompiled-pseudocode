/*
 * XREFs of PopUsb4DisplayPresenceUpdatedWorker @ 0x1407DA3D0
 * Callers:
 *     <none>
 * Callees:
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404D7A98 (PopOkayToQueueNextWorkItem.c)
 *     PopEvaluateInputSuppressionAction @ 0x140B763E0 (PopEvaluateInputSuppressionAction.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopUsb4DisplayPresenceUpdatedWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+20h] [rbp-8h]

  PopAcquirePolicyLock(a1, a2);
  do
  {
    v6 = PopUsb4DisplayPresent;
    PopReleasePolicyLock(v3, v2, v4, v5, v14);
    if ( SSHSupportIsPlatformAoAc() )
      PopEvaluateInputSuppressionAction();
    PopAcquirePolicyLock(v8, v7);
  }
  while ( v6 != PopUsb4DisplayPresent );
  PopOkayToQueueNextWorkItem((__int64)&PopUsb4DisplayPresenceUpdatedWorkItem);
  return PopReleasePolicyLock(v10, v9, v11, v12, v14);
}
