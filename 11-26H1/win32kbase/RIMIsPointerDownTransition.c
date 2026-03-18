/*
 * XREFs of RIMIsPointerDownTransition @ 0x14013770C
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1400498A4 (rimProcessPointerDeviceContact.c)
 *     rimPenButtonsPolicyUpdateState @ 0x140137648 (rimPenButtonsPolicyUpdateState.c)
 *     rimFinalizePointerFlags @ 0x1401AF8AC (rimFinalizePointerFlags.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x14020C704 (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMIsPointerDownTransition(char a1, char a2)
{
  return (a1 & 4) == 0 && (a2 & 4) != 0;
}
