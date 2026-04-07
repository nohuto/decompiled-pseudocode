/*
 * XREFs of ?SetEndRect@CAccentTransitionAnimatedVisual@@QEAAXPEAUtagRECT@@@Z @ 0x180095634
 * Callers:
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800951A4 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAccentTransitionAnimatedVisual::SetEndRect(CAccentTransitionAnimatedVisual *this, struct tagRECT *a2)
{
  *(struct tagRECT *)((char *)this + 56) = *a2;
}
