/*
 * XREFs of KiStartIdealProcessorAssignmentBlock @ 0x1402013B8
 * Callers:
 *     KeInitializeProcess @ 0x140B58704 (KeInitializeProcess.c)
 * Callees:
 *     ?KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU_KAFFINITY_EX@@PEAU_KI_IDEAL_PROCESSOR_SET_BREAKPOINTS@@@Z @ 0x1402013E4 (-KiSelectIdealProcessorSetsForProcess@@YAXPEAU_KPROCESS@@PEAT_KI_PROCESS_CONCURRENCY_COUNT@@PEAU.c)
 */

void __fastcall KiStartIdealProcessorAssignmentBlock(union _KI_PROCESS_CONCURRENCY_COUNT *a1, struct _KPROCESS *a2)
{
  KiSelectIdealProcessorSetsForProcess(
    a2,
    a1,
    (struct _KAFFINITY_EX *)&a1[52],
    (struct _KI_IDEAL_PROCESSOR_SET_BREAKPOINTS *)&a1[1]);
}
