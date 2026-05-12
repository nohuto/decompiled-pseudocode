/*
 * XREFs of DlrmTranslateSystemPowerModeToDlrmPowerMode @ 0x14012D3FC
 * Callers:
 *     DlrmEffectivePowerModeCallback @ 0x14012CFB0 (DlrmEffectivePowerModeCallback.c)
 *     StorProcessDripsCallbackForDlrm @ 0x14012ECF0 (StorProcessDripsCallbackForDlrm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DlrmTranslateSystemPowerModeToDlrmPowerMode(int a1, char a2)
{
  int v2; // ecx

  if ( (unsigned int)(a1 - 3) <= 3 )
    return 3LL;
  if ( !a2 )
  {
    if ( a1 )
    {
      v2 = a1 - 1;
      if ( v2 )
        return v2 == 1;
    }
  }
  return 2LL;
}
