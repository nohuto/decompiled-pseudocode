/*
 * XREFs of ?SetEndRect@CAccentTransitionAnimatedVisual@@QEAAXPEAUtagRECT@@@Z @ 0x1800A1004
 * Callers:
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800A0B74 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAccentTransitionAnimatedVisual::SetEndRect(CAccentTransitionAnimatedVisual *this, struct tagRECT *a2)
{
  *(struct tagRECT *)((char *)this + 56) = *a2;
}
