/*
 * XREFs of ProcessorpAddInstanceCallback @ 0x140071D50
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibAcquireArbiterLock @ 0x14004E6E8 (IrqLibAcquireArbiterLock.c)
 *     ProcessorAddInstance @ 0x1400BC8AC (ProcessorAddInstance.c)
 */

void __fastcall ProcessorpAddInstanceCallback(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        PNTSTATUS OperationStatus)
{
  if ( ChangeContext->State == KeProcessorAddCompleteNotify )
  {
    IrqLibAcquireArbiterLock(0);
    ProcessorAddInstance((unsigned int)ChangeContext[1].State, ChangeContext->NtNumber);
    KeSetEvent((PRKEVENT)Object, 0, 0);
  }
}
