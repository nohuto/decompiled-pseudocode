/*
 * XREFs of RtlAddFunctionTable @ 0x1800E3560
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlProtectHeap @ 0x180076820 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180078C70 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 *     RtlAvlInsertNodeEx @ 0x180078EE0 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800792EC (LdrEnsureMrdataHeapExists.c)
 *     ZwQuerySystemTime @ 0x18015F980 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress)
{
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap_0; // rax
  __int64 v11; // rbx
  unsigned __int64 BeginAddress; // rax
  PRUNTIME_FUNCTION v13; // r9
  ULONG v14; // r10d
  unsigned __int64 EndAddress; // rcx
  int v16; // edx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  _QWORD *v21; // rdx
  bool v22; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  bool v25; // r8
  _QWORD *v26; // rax
  __int64 *v27; // rax
  int v28; // edx
  int v30; // ecx
  int v31; // eax
  int v32; // eax

  if ( LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v7 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v7 == -1 )
        goto LABEL_46;
    }
    else
    {
      RtlProtectHeap(LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v7 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  LOBYTE(v8) = LdrControlFlowGuardEnforced();
  if ( v8 )
    ProcessHeap = LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap_0 = (LARGE_INTEGER *)RtlAllocateHeap_0(ProcessHeap, 0, 0x88uLL);
  v11 = (__int64)Heap_0;
  if ( !Heap_0 )
  {
    LOBYTE(v32) = LdrControlFlowGuardEnforced();
    if ( v32 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_46;
      v28 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v28;
      if ( !v28 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  Heap_0[2].QuadPart = (__int64)FunctionTable;
  Heap_0[10].HighPart = EntryCount;
  ZwQuerySystemTime(Heap_0 + 3);
  BeginAddress = FunctionTable->BeginAddress;
  v13 = FunctionTable + 1;
  *(_QWORD *)(v11 + 32) = BeginAddress;
  v14 = 1;
  EndAddress = FunctionTable->EndAddress;
  *(_QWORD *)(v11 + 40) = EndAddress;
  *(_DWORD *)(v11 + 80) = 0;
  *(_QWORD *)(v11 + 48) = BaseAddress;
  if ( EntryCount > 1 )
  {
    v16 = 0;
    v17 = (unsigned int)BeginAddress;
    v18 = (unsigned int)EndAddress;
    do
    {
      if ( !v16 && v13->BeginAddress < FunctionTable[v14 - 1].BeginAddress )
      {
        *(_DWORD *)(v11 + 80) = 1;
        v16 = 1;
      }
      v19 = v13->BeginAddress;
      BeginAddress = v17;
      if ( v19 < v17 )
      {
        *(_QWORD *)(v11 + 32) = v19;
        BeginAddress = (unsigned int)v19;
      }
      v20 = v13->EndAddress;
      EndAddress = v18;
      if ( v20 > v18 )
      {
        *(_QWORD *)(v11 + 40) = v20;
        EndAddress = (unsigned int)v20;
      }
      ++v13;
      ++v14;
      v17 = BeginAddress;
      v18 = EndAddress;
    }
    while ( v14 < EntryCount );
  }
  *(_QWORD *)(v11 + 32) = BaseAddress + BeginAddress;
  *(_QWORD *)(v11 + 40) = EndAddress + BaseAddress;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v21 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  v22 = 0;
  if ( !RtlpDynamicFunctionTableTreeMin )
    goto LABEL_23;
  while ( *(_QWORD *)(v11 + 32) < *(v21 - 7) )
  {
    v23 = (_QWORD *)*v21;
    if ( !*v21 )
      goto LABEL_23;
LABEL_33:
    v21 = v23;
  }
  v23 = (_QWORD *)v21[1];
  if ( v23 )
    goto LABEL_33;
  v22 = 1;
LABEL_23:
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&RtlpDynamicFunctionTableTreeMin,
    (unsigned __int64)v21,
    v22,
    (_QWORD *)(v11 + 88));
  v24 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  v25 = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_29;
  while ( 2 )
  {
    if ( *(_QWORD *)(v11 + 40) < *(v24 - 10) )
    {
      v26 = (_QWORD *)*v24;
      if ( !*v24 )
        goto LABEL_29;
      goto LABEL_26;
    }
    v26 = (_QWORD *)v24[1];
    if ( v26 )
    {
LABEL_26:
      v24 = v26;
      continue;
    }
    break;
  }
  v25 = 1;
LABEL_29:
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&RtlpDynamicFunctionTableTreeMax,
    (unsigned __int64)v24,
    v25,
    (_QWORD *)(v11 + 112));
  v27 = (__int64 *)qword_1801DF068;
  if ( *(PVOID **)qword_1801DF068 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v11 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v11 + 8) = v27;
  *v27 = v11;
  qword_1801DF068 = v11;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  LOBYTE(v31) = LdrControlFlowGuardEnforced();
  if ( v31 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
LABEL_46:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    v30 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
    *(_DWORD *)LdrpMrdataHeapUnprotected = v30;
    if ( !v30 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 1;
}
