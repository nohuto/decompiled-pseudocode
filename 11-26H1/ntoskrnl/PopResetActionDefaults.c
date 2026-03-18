/*
 * XREFs of PopResetActionDefaults @ 0x14077C7B8
 * Callers:
 *     PopExecutePowerAction @ 0x140A37D58 (PopExecutePowerAction.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void PopResetActionDefaults()
{
  dword_140F0FB8C = 0;
  dword_140F0FB94 = 0;
  dword_140F0FB98 = 1;
  byte_140F0FB89 = 0;
  if ( (byte_140F0FB60 & 2) == 0 )
  {
    LOBYTE(byte_140F0FB60) = 0;
    byte_140F0FB62 = 0;
    qword_140F0FB64 = 0LL;
    dword_140F0FB70 = 0;
    byte_140F0FB88 = 0;
    dword_140F0FB74 = 17;
    if ( qword_140F0FB80 )
    {
      ExFreePoolWithTag(qword_140F0FB80, 0x67696450u);
      qword_140F0FB80 = 0LL;
    }
    dword_140F0FB6C = 268435459;
  }
}
