/*
 * XREFs of HvlpAddCrashdumpAreaPages @ 0x1405C0764
 * Callers:
 *     HvlAddSecurePagesCallbackRoutine @ 0x1405BFF04 (HvlAddSecurePagesCallbackRoutine.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlpAddCrashdumpAreaPages(__int64 a1, char a2)
{
  char v2; // r8
  __int64 v3; // rax

  if ( a2 && (HvlpFlags & 2) == 0 || !KiHypervisorInitiatedCrashDump )
    return 0;
  v2 = 1;
  if ( a2 )
  {
    *(_QWORD *)(a1 + 16) = (unsigned __int64)VslpReservedTransferLock.WaitBlock[2].Object >> 12;
    v3 = *(unsigned int *)&VslpReservedTransferLock.WaitBlockFill11[136];
    *(_DWORD *)(a1 + 8) |= 0x80000022;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = (unsigned __int64)VslpReservedTransferLock.WaitBlock[2].WaitListEntry.Blink >> 12;
    v3 = *(unsigned int *)&VslpReservedTransferLock.WaitBlockFill11[112];
    *(_DWORD *)(a1 + 8) |= 0x80000002;
  }
  *(_QWORD *)(a1 + 24) = v3;
  return v2;
}
