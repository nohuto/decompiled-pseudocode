/*
 * XREFs of PopResetActionDefaults @ 0x14077F2AC
 * Callers:
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void PopResetActionDefaults()
{
  dword_140F1044C = 0;
  dword_140F10454 = 0;
  dword_140F10458 = 1;
  byte_140F10449 = 0;
  if ( (PopAction & 2) == 0 )
  {
    LOBYTE(PopAction) = 0;
    byte_140F10422 = 0;
    qword_140F10424 = 0LL;
    dword_140F10430 = 0;
    byte_140F10448 = 0;
    dword_140F10434 = 17;
    if ( qword_140F10440 )
    {
      ExFreePoolWithTag(qword_140F10440, 0x67696450u);
      qword_140F10440 = 0LL;
    }
    dword_140F1042C = 268435459;
  }
}
