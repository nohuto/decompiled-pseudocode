/*
 * XREFs of PopDispatchAcDcCallback @ 0x1407D7380
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x14047A7E0 (ExNotifyCallback.c)
 */

struct _KTHREAD *PopDispatchAcDcCallback()
{
  struct _KTHREAD *result; // rax

  ExNotifyCallback(ExCbPowerState, (PVOID)1, (PVOID)(dword_140F106CC == 0));
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return result;
}
