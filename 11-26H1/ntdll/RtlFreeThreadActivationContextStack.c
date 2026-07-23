/*
 * XREFs of RtlFreeThreadActivationContextStack @ 0x18007FF90
 * Callers:
 *     LdrShutdownThread @ 0x18007E040 (LdrShutdownThread.c)
 * Callees:
 *     RtlFreeActivationContextStack @ 0x180080030 (RtlFreeActivationContextStack.c)
 */

__int64 RtlFreeThreadActivationContextStack()
{
  struct _TEB *v0; // rbx

  v0 = NtCurrentTeb();
  RtlFreeActivationContextStack(v0->ActivationContextStackPointer);
  v0->ActivationContextStackPointer = 0LL;
  return RtlpInitializeThreadActivationContextStack(v0);
}
