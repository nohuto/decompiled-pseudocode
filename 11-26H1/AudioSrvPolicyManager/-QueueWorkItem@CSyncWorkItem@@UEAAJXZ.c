/*
 * XREFs of ?QueueWorkItem@CSyncWorkItem@@UEAAJXZ @ 0x180024AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed int __fastcall CSyncWorkItem::QueueWorkItem(ULONG_PTR dwCompletionKey)
{
  signed int result; // eax

  if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, dwCompletionKey, 0LL) )
    return 0;
  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
