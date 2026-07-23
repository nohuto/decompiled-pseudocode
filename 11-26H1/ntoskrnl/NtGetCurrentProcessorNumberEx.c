/*
 * XREFs of NtGetCurrentProcessorNumberEx @ 0x1407F66C0
 * Callers:
 *     DifNtGetCurrentProcessorNumberExWrapper @ 0x14067CA40 (DifNtGetCurrentProcessorNumberExWrapper.c)
 * Callees:
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 */

ULONG __cdecl NtGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcessorNumber)
{
  char PreviousMode; // bl
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int8 *p_Number; // rcx

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( PreviousMode )
    RtlWriteUShortToUser(ProcessorNumber, CurrentPrcb->Group);
  else
    ProcessorNumber->Group = CurrentPrcb->Group;
  p_Number = &ProcessorNumber->Number;
  if ( PreviousMode )
    RtlWriteUCharToUser(p_Number, CurrentPrcb->GroupIndex);
  else
    *p_Number = CurrentPrcb->GroupIndex;
  if ( PreviousMode )
    RtlWriteUCharToUser(&ProcessorNumber->Reserved, 0);
  else
    ProcessorNumber->Reserved = 0;
  return 0;
}
