/*
 * XREFs of PepPromoteNextNotificationState @ 0x1400CD6FC
 * Callers:
 *     ACPIPepPowerSettingChangeCallback @ 0x1400CD590 (ACPIPepPowerSettingChangeCallback.c)
 * Callees:
 *     <none>
 */

bool __fastcall PepPromoteNextNotificationState(__int64 a1, int a2, char a3)
{
  int v3; // r9d
  bool result; // al

  v3 = *(_DWORD *)(a1 + 252);
  if ( a3 )
  {
    result = a2 > v3;
    if ( a2 <= v3 )
      return result;
    goto LABEL_5;
  }
  result = 1;
  if ( --a2 < v3 )
  {
LABEL_5:
    *(_DWORD *)(a1 + 252) = a2;
    return result;
  }
  return 0;
}
