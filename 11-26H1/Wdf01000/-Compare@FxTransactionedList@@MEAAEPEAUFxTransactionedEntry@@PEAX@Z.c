/*
 * XREFs of ?Compare@FxTransactionedList@@MEAAEPEAUFxTransactionedEntry@@PEAX@Z @ 0x1400846C0
 * Callers:
 *     ?ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x140041FC8 (-ProcessEventInner@FxDevicePwrRequirementMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z @ 0x140053664 (-ProcessEventInner@FxWakeInterruptMachine@@AEAAXPEAUFxPostProcessInfo@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxTransactionedList::Compare(
        FxTransactionedList *this,
        FxTransactionedEntry *Entry,
        void *Data)
{
  return 1;
}
