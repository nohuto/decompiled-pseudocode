/*
 * XREFs of PopNewProcessorCallback @ 0x1407CB5A0
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckSkipTick @ 0x1407CB4CC (PopCheckSkipTick.c)
 *     PpmIdleRegisterDefaultStates @ 0x1407CCAF4 (PpmIdleRegisterDefaultStates.c)
 *     PpmEnableWmiInterface @ 0x1407DDEC8 (PpmEnableWmiInterface.c)
 *     PpmCheckInitProcessors @ 0x140AEB890 (PpmCheckInitProcessors.c)
 */

void __fastcall PopNewProcessorCallback(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        PNTSTATUS OperationStatus)
{
  if ( ChangeContext->State == KeProcessorAddCompleteNotify )
  {
    if ( !PoSkipTickMode && PopSkipTickPolicy == 1 )
      PoSkipTickMode = !PopCheckSkipTick();
    PpmCheckInitProcessors(0LL, 1LL, OperationStatus);
    PpmEnableWmiInterface();
    PpmIdleRegisterDefaultStates();
  }
}
