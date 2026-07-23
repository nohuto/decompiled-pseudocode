/*
 * XREFs of PopDispatchCallback @ 0x1407DA770
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x140474150 (ExNotifyCallback.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallback(PVOID Argument1)
{
  struct _KTHREAD *result; // rax

  ExNotifyCallback(ExpSysDbgLock.Header.WaitListHead.Flink, (PVOID)(unsigned int)Argument1, 0LL);
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
