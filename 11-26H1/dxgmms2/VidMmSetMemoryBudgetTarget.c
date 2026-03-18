/*
 * XREFs of VidMmSetMemoryBudgetTarget @ 0x140046D80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z @ 0x1400E0FA8 (-SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z.c)
 */

void __fastcall VidMmSetMemoryBudgetTarget(VIDMM_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  VIDMM_GLOBAL::SetMemoryBudgetTarget(a1, a2, a3);
}
