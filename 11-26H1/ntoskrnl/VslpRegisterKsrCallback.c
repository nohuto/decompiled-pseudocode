/*
 * XREFs of VslpRegisterKsrCallback @ 0x140CBA020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VslpRegisterKsrCallback(struct _KTHREAD *a1)
{
  stru_140FC01F0.SchedulerApc.Thread = a1;
}
