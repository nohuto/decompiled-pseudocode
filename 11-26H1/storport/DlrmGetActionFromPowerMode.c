/*
 * XREFs of DlrmGetActionFromPowerMode @ 0x14012D084
 * Callers:
 *     DlrmEffectivePowerModeCallback @ 0x14012CFB0 (DlrmEffectivePowerModeCallback.c)
 *     DlrmHandlePowerStateAction @ 0x14012D0B4 (DlrmHandlePowerStateAction.c)
 *     StorProcessDripsCallbackForDlrm @ 0x14012ECF0 (StorProcessDripsCallbackForDlrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DlrmGetActionFromPowerMode(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 4LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 5LL;
  if ( v2 == 1 )
    return 6LL;
  return 0LL;
}
