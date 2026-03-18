/*
 * XREFs of PsGetCurrentThreadTeb @ 0x1404A26B0
 * Callers:
 *     EtwTraceThread @ 0x140A045B0 (EtwTraceThread.c)
 *     EtwpPsProvTraceThread @ 0x140A04984 (EtwpPsProvTraceThread.c)
 * Callees:
 *     <none>
 */

PVOID PsGetCurrentThreadTeb(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    return 0LL;
  else
    return CurrentThread->Teb;
}
