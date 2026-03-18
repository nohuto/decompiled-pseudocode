/*
 * XREFs of ?ProbeAlignment@?$UserModePointer@I@@QEBAX_KK@Z @ 0x1402AE4CC
 * Callers:
 *     NtUserGetWindowFeedbackSetting @ 0x1402B5450 (NtUserGetWindowFeedbackSetting.c)
 * Callees:
 *     <none>
 */

void __fastcall UserModePointer<unsigned int>::ProbeAlignment(_BYTE *a1)
{
  if ( (*a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
}
