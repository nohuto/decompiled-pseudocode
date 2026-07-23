/*
 * XREFs of PopDispatchAcDcCallback @ 0x1407DA720
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x140474150 (ExNotifyCallback.c)
 */

struct _KTHREAD *PopDispatchAcDcCallback()
{
  struct _KTHREAD *result; // rax

  ExNotifyCallback(
    ExpSysDbgLock.Header.WaitListHead.Flink,
    (PVOID)1,
    (PVOID)(HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) == 0));
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
