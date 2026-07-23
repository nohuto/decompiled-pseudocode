/*
 * XREFs of PopFindNextSystemPowerState @ 0x140B469FC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9

  v3 = 1;
  dword_140F1044C = dword_140F10450;
  if ( dword_140F10450 == 1 )
  {
    if ( dword_140F1042C < 0 && *a3 )
    {
      *a3 = 0;
      dword_140F1042C &= ~0x10000000u;
      dword_140F1044C = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_140F1044C = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
