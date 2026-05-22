/*
 * XREFs of ?ReadConfigValue@TwoFingerDragRecognizer@@UEAA_NW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x1801BB0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall TwoFingerDragRecognizer::ReadConfigValue(__int64 a1, int a2, __int64 a3)
{
  char v3; // r10
  __int16 v4; // cx

  v3 = 1;
  if ( a2 == 25 )
  {
    v4 = *(_WORD *)(a1 + 78);
    goto LABEL_6;
  }
  if ( a2 == 26 )
  {
    v4 = *(_WORD *)(a1 + 86);
LABEL_6:
    *(_WORD *)(a3 + 4) = v4;
    *(_DWORD *)a3 = a2;
    return v3;
  }
  return 0;
}
