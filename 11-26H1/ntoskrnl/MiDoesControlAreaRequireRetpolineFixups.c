/*
 * XREFs of MiDoesControlAreaRequireRetpolineFixups @ 0x1404F5C34
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140B3C35C (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDoesControlAreaRequireRetpolineFixups(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32) + 88LL) != 0LL;
}
