/*
 * XREFs of rimNormalApcIoUnregisterPlugPlayNotificationEx @ 0x140175150
 * Callers:
 *     <none>
 * Callees:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x14017516C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 */

__int64 __fastcall rimNormalApcIoUnregisterPlugPlayNotificationEx(__int64 a1)
{
  return rimApcIoUnregisterPlugPlayNotificationExWorker((PVOID)(a1 - 88));
}
