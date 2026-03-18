/*
 * XREFs of NtGetCurrentProcessorNumberEx @ 0x1407F0B60
 * Callers:
 *     DifNtGetCurrentProcessorNumberExWrapper @ 0x140678E60 (DifNtGetCurrentProcessorNumberExWrapper.c)
 * Callees:
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     RtlWriteUShortToUser @ 0x14077F7E4 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall NtGetCurrentProcessorNumberEx(__int64 a1)
{
  char PreviousMode; // bl
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int8 *v4; // rcx

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( PreviousMode )
    RtlWriteUShortToUser((_WORD *)a1, CurrentPrcb->Group);
  else
    *(_WORD *)a1 = CurrentPrcb->Group;
  v4 = (unsigned __int8 *)(a1 + 2);
  if ( PreviousMode )
    RtlWriteUCharToUser(v4, CurrentPrcb->GroupIndex);
  else
    *v4 = CurrentPrcb->GroupIndex;
  if ( PreviousMode )
    RtlWriteUCharToUser((_BYTE *)(a1 + 3), 0);
  else
    *(_BYTE *)(a1 + 3) = 0;
  return 0LL;
}
