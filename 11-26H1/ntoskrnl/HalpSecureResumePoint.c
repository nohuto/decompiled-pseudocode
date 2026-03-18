/*
 * XREFs of HalpSecureResumePoint @ 0x140723000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HalpSecureResumePoint()
{
  struct _LIST_ENTRY *v0; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v3; // r8
  struct _LIST_ENTRY *v4; // r9

  v0 = &HalpDeviceBlockUnblockPushLock.QueueListEntry.Flink[94 * KeGetPcr()->Prcb.Number + 17];
  Flink = v0[8].Flink;
  Blink = v0[8].Blink;
  v3 = v0[11].Blink;
  v4 = v0[12].Flink;
  __writeeflags(*(unsigned __int64 *)((char *)&v0[4].Flink + 4));
  _fxrstor(&v0[16]);
  return HalpResumePoint(Flink, Blink, v3, v4);
}
