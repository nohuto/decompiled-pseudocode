/*
 * XREFs of PopBatteryCheckTriggerAllBatteries @ 0x1409C2E50
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1409C2820 (PopBatteryApplyCompositeState.c)
 *     PopBatteryCheckTrigger @ 0x1409C2E18 (PopBatteryCheckTrigger.c)
 * Callees:
 *     <none>
 */

char __fastcall PopBatteryCheckTriggerAllBatteries(__int64 a1, int a2)
{
  __int64 v2; // r8
  char v4; // r10
  unsigned int v5; // r9d
  unsigned int v6; // ecx

  v2 = qword_140F10650;
  v4 = 1;
  while ( (__int64 *)v2 != &qword_140F10650 )
  {
    v5 = *(_DWORD *)(v2 + 64);
    if ( v5 && v5 != -1 )
    {
      v6 = *(_DWORD *)(v2 + 68);
      if ( v6 <= *(_DWORD *)(a1 + 24) * v5 / 0x64 + v5 / 0xC8 )
        v6 = *(_DWORD *)(a1 + 24) * v5 / 0x64 + v5 / 0xC8;
      if ( *(_DWORD *)(v2 + 88) > a2 * v5 / 0x64 + v6 )
        return 0;
    }
    v2 = *(_QWORD *)v2;
  }
  return v4;
}
