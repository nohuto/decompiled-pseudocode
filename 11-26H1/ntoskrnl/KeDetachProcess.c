/*
 * XREFs of KeDetachProcess @ 0x1404C7F80
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x140246EA0 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess((__int64)&CurrentThread->600, 0);
}
