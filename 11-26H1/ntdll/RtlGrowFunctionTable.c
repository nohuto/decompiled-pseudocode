/*
 * XREFs of RtlGrowFunctionTable @ 0x1800EC760
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlProtectHeap @ 0x180076820 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180078C70 (LdrControlFlowGuardEnforced.c)
 */

void __cdecl RtlGrowFunctionTable(PVOID DynamicTable, DWORD NewEntryCount)
{
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // ecx

  if ( *((_DWORD *)DynamicTable + 20) != 3 || NewEntryCount < *((_DWORD *)DynamicTable + 21) )
    RtlRaiseStatus(-1073741811);
  LOBYTE(v4) = LdrControlFlowGuardEnforced();
  if ( v4 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v5 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v5 == -1 )
        goto LABEL_14;
    }
    else
    {
      RtlProtectHeap(LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v5 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  *((_DWORD *)DynamicTable + 21) = NewEntryCount;
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( !v6 )
    return;
  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
  {
LABEL_14:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  v7 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
  *(_DWORD *)LdrpMrdataHeapUnprotected = v7;
  if ( !v7 )
    RtlProtectHeap(LdrpMrdataHeap, 1u);
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
