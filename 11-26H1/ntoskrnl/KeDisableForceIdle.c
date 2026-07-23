/*
 * XREFs of KeDisableForceIdle @ 0x140535710
 * Callers:
 *     KiInitializeForceIdle @ 0x140B26FF4 (KiInitializeForceIdle.c)
 * Callees:
 *     <none>
 */

void KeDisableForceIdle()
{
  KiForceIdleDisabled = 1;
}
