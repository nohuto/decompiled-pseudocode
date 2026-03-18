/*
 * XREFs of NtQueryTimerResolution @ 0x140B20A40
 * Callers:
 *     DifNtQueryTimerResolutionWrapper @ 0x140686380 (DifNtQueryTimerResolutionWrapper.c)
 * Callees:
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtQueryTimerResolution(_DWORD *a1, int *a2, int *a3)
{
  int v5; // r15d
  int v6; // esi
  char PreviousMode; // bl

  v5 = KeMinimumIncrement;
  v6 = KePseudoHrTimeIncrement;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    RtlWriteULongToUser(a1, KeMaximumIncrement);
  else
    *a1 = KeMaximumIncrement;
  if ( PreviousMode )
    RtlWriteULongToUser(a2, v5);
  else
    *a2 = v5;
  if ( PreviousMode )
    RtlWriteULongToUser(a3, v6);
  else
    *a3 = v6;
  return 0LL;
}
