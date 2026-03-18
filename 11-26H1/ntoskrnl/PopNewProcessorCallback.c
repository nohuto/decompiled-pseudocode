/*
 * XREFs of PopNewProcessorCallback @ 0x1407C8540
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckSkipTick @ 0x1407C846C (PopCheckSkipTick.c)
 *     PpmIdleRegisterDefaultStates @ 0x1407C9A54 (PpmIdleRegisterDefaultStates.c)
 *     PpmEnableWmiInterface @ 0x1407D9F28 (PpmEnableWmiInterface.c)
 *     PpmCheckInitProcessors @ 0x140A9CBF0 (PpmCheckInitProcessors.c)
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
