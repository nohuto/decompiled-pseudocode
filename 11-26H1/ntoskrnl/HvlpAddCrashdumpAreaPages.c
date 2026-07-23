/*
 * XREFs of HvlpAddCrashdumpAreaPages @ 0x1405C2FD4
 * Callers:
 *     HvlAddSecurePagesCallbackRoutine @ 0x1405C2774 (HvlAddSecurePagesCallbackRoutine.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlpAddCrashdumpAreaPages(__int64 a1, char a2)
{
  char v2; // r8
  __int64 LastXStateSaveDebugInfo_low; // rax

  if ( a2 && (HvlpFlags & 2) == 0 || !KiHypervisorInitiatedCrashDump )
    return 0;
  v2 = 1;
  if ( a2 )
  {
    *(_QWORD *)(a1 + 16) = VslpReservedTransferLock.Spare18 >> 12;
    LastXStateSaveDebugInfo_low = LODWORD(VslpReservedTransferLock.LastXStateSaveDebugInfo);
    *(_DWORD *)(a1 + 8) |= 0x80000022;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = (unsigned __int64)VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Blink >> 12;
    LastXStateSaveDebugInfo_low = *(unsigned int *)&VslpReservedTransferLock.WaitBlockFill11[160];
    *(_DWORD *)(a1 + 8) |= 0x80000002;
  }
  *(_QWORD *)(a1 + 24) = LastXStateSaveDebugInfo_low;
  return v2;
}
