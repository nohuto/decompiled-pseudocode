/*
 * XREFs of RtlFreeThreadActivationContextStack @ 0x180088B90
 * Callers:
 *     LdrShutdownThread @ 0x180086CA0 (LdrShutdownThread.c)
 * Callees:
 *     RtlFreeActivationContextStack @ 0x180088C30 (RtlFreeActivationContextStack.c)
 */

__int64 RtlFreeThreadActivationContextStack()
{
  struct _TEB *v0; // rbx

  v0 = NtCurrentTeb();
  RtlFreeActivationContextStack(v0->ActivationContextStackPointer);
  v0->ActivationContextStackPointer = 0LL;
  return RtlpInitializeThreadActivationContextStack(v0);
}
