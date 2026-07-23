/*
 * XREFs of ExpGetSystemEmulationProcessorInformation @ 0x1404C623C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1407822E4 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall ExpGetSystemEmulationProcessorInformation(__int64 a1)
{
  char PreviousMode; // di
  _WORD *v3; // rcx
  _WORD *v4; // rcx
  unsigned __int16 MaximumProcessorCount; // ax
  unsigned __int16 *v6; // rcx

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    RtlWriteUShortToUser(a1, 0LL);
  else
    *(_WORD *)a1 = 0;
  v3 = (_WORD *)(a1 + 2);
  if ( PreviousMode )
    RtlWriteUShortToUser(v3, (unsigned __int16)KeProcessorLevel);
  else
    *v3 = KeProcessorLevel;
  v4 = (_WORD *)(a1 + 4);
  if ( PreviousMode )
    RtlWriteUShortToUser(v4, (unsigned __int16)KeProcessorRevision);
  else
    *v4 = KeProcessorRevision;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v6 = (unsigned __int16 *)(a1 + 6);
  if ( PreviousMode )
    RtlWriteUShortToUser(v6, MaximumProcessorCount);
  else
    *v6 = MaximumProcessorCount;
  if ( PreviousMode )
    RtlWriteULongToUser(a1 + 8, (unsigned int)KeFeatureBits);
  else
    *(_DWORD *)(a1 + 8) = KeFeatureBits;
  return 0LL;
}
