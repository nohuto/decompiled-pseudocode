/*
 * XREFs of RtlDeleteGrowableFunctionTable @ 0x1800796A0
 * Callers:
 *     RtlDeleteFunctionTable @ 0x1800D7FF0 (RtlDeleteFunctionTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlProtectHeap @ 0x180076820 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180078C70 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 *     RtlAvlRemoveNode @ 0x1800D8200 (RtlAvlRemoveNode.c)
 *     NtSetInformationProcess @ 0x18015F1C0 (NtSetInformationProcess.c)
 */

void __cdecl RtlDeleteGrowableFunctionTable(PVOID DynamicTable)
{
  bool v1; // zf
  int v3; // eax
  int v4; // eax
  int v5; // edi
  _QWORD *v6; // rdx
  PVOID *v7; // rax
  int v8; // eax
  PVOID ProcessHeap; // rcx
  int v10; // eax
  int v11; // edx
  __int128 ProcessInformation; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_DWORD *)DynamicTable + 20) == 3;
  ProcessInformation = 0LL;
  if ( !v1 )
    RtlRaiseStatus(-1073741811);
  *(_QWORD *)&ProcessInformation = DynamicTable;
  BYTE8(ProcessInformation) = 1;
  v3 = NtSetInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessDynamicFunctionTableInformation,
         &ProcessInformation,
         0x10u);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
  LdrProtectMrdata(0);
  LOBYTE(v4) = LdrControlFlowGuardEnforced();
  if ( v4 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v5 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v5 == -1 )
        goto LABEL_21;
    }
    else
    {
      RtlProtectHeap(LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v5 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMin, (char *)DynamicTable + 88);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMax, (char *)DynamicTable + 112);
  v6 = *(_QWORD **)DynamicTable;
  if ( *(PVOID *)(*(_QWORD *)DynamicTable + 8LL) != DynamicTable
    || (v7 = (PVOID *)*((_QWORD *)DynamicTable + 1), *v7 != DynamicTable) )
  {
    __fastfail(3u);
  }
  *v7 = v6;
  v6[1] = v7;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LOBYTE(v8) = LdrControlFlowGuardEnforced();
  if ( v8 )
    ProcessHeap = LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap_0(ProcessHeap, 0, DynamicTable);
  LOBYTE(v10) = LdrControlFlowGuardEnforced();
  if ( v10 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      v11 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v11;
      if ( !v11 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      goto LABEL_19;
    }
LABEL_21:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
LABEL_19:
  LdrProtectMrdata(1);
}
