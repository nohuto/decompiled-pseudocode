/*
 * XREFs of KeDisableForceIdle @ 0x140533290
 * Callers:
 *     KiInitializeForceIdle @ 0x140B24B54 (KiInitializeForceIdle.c)
 * Callees:
 *     <none>
 */

void KeDisableForceIdle()
{
  KiForceIdleDisabled = 1;
}
