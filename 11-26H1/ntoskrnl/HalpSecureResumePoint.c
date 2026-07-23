/*
 * XREFs of HalpSecureResumePoint @ 0x140727BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HalpSecureResumePoint()
{
  struct _LIST_ENTRY **v0; // rax
  struct _LIST_ENTRY *v1; // rcx
  struct _LIST_ENTRY *v2; // rdx
  struct _LIST_ENTRY *v3; // r8
  struct _LIST_ENTRY *v4; // r9

  v0 = &(&HalpDeviceBlockUnblockPushLock.WaitBlock[3].Thread->Timer.Header.WaitListHead.Blink)[188
                                                                                             * KeGetPcr()->Prcb.Number];
  v1 = v0[16];
  v2 = v0[17];
  v3 = v0[23];
  v4 = v0[24];
  __writeeflags(*(unsigned __int64 *)((char *)v0 + 68));
  _fxrstor(v0 + 32);
  return HalpResumePoint(v1, v2, v3, v4);
}
