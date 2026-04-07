/*
 * XREFs of ?SetBeginRect@CAccentTransitionAnimatedVisual@@QEAAXPEAUtagRECT@@@Z @ 0x180095624
 * Callers:
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800951A4 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAccentTransitionAnimatedVisual::SetBeginRect(
        CAccentTransitionAnimatedVisual *this,
        struct tagRECT *a2)
{
  *(struct tagRECT *)((char *)this + 40) = *a2;
}
