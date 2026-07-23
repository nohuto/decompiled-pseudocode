/*
 * XREFs of ?KiForceIdleParkUnparkDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404EAE30
 * Callers:
 *     <none>
 * Callees:
 *     ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404EAE58 (-KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z.c)
 */

void __fastcall KiForceIdleParkUnparkDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KiForceIdleParkUnparkProcessor(KeGetCurrentPrcb(), (unsigned __int8)SystemArgument1);
  _InterlockedDecrement(&KiForceIdlePendingDpcCount);
}
