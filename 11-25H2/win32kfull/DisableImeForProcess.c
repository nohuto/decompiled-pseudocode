/*
 * XREFs of DisableImeForProcess @ 0x140283290
 * Callers:
 *     <none>
 * Callees:
 *     ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140240288 (-UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall DisableImeForProcess(struct tagPROCESSINFO *a1)
{
  UserDisableImeForProcess(a1);
}
