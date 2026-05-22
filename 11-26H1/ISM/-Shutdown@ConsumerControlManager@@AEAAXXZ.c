/*
 * XREFs of ?Shutdown@ConsumerControlManager@@AEAAXXZ @ 0x1800E57C8
 * Callers:
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800E5790 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ConsumerControlManager::Shutdown(ULONG_PTR dwData)
{
  void *v2; // rbx

  v2 = (void *)_InterlockedExchange64((volatile __int64 *)(dwData + 96), 0LL);
  if ( v2 )
  {
    if ( WaitForSingleObject(v2, 0) == 258 )
    {
      if ( QueueUserAPC(ConsumerControlManager::TerminateWorkerThreadApc, v2, dwData) )
        WaitForSingleObject(v2, 0x9C4u);
    }
    CloseHandle(v2);
  }
}
