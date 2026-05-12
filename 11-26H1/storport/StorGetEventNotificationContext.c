/*
 * XREFs of StorGetEventNotificationContext @ 0x14012C6D0
 * Callers:
 *     StorNotificationFreeCallerContextWorker @ 0x14012CCC0 (StorNotificationFreeCallerContextWorker.c)
 *     StorCancelStorageNotificationIrp @ 0x1401AF900 (StorCancelStorageNotificationIrp.c)
 *     StorDeleteStorageNotification @ 0x1401AF9BC (StorDeleteStorageNotification.c)
 *     StorDisableStorageNotification @ 0x1401AFAA4 (StorDisableStorageNotification.c)
 *     StorEnableStorageNotification @ 0x1401AFB74 (StorEnableStorageNotification.c)
 *     StorGetStorageNotificationInfo @ 0x1401AFD54 (StorGetStorageNotificationInfo.c)
 *     StorProcessNotification @ 0x1401AFFBC (StorProcessNotification.c)
 *     StorProcessNotificationWorker @ 0x1401B07A0 (StorProcessNotificationWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorGetEventNotificationContext(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v2 == 1094997074 )
    {
      if ( v2 )
        return *(_QWORD *)(v2 + 6272);
    }
    else if ( *(_DWORD *)v2 == 1314275652 && v2 )
    {
      return *(_QWORD *)(v2 + 1432);
    }
  }
  return result;
}
