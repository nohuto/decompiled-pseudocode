/*
 * XREFs of HalpIommuEarlyFaultDpcRoutine @ 0x1405A27D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuLogEarlyFault @ 0x1405A28DC (HalpIommuLogEarlyFault.c)
 */

void __fastcall HalpIommuEarlyFaultDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  HalpIommuLogEarlyFault(Dpc, DeferredContext, SystemArgument1, SystemArgument2);
}
