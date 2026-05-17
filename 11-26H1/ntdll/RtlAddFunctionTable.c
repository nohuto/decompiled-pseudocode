/*
 * XREFs of RtlAddFunctionTable @ 0x1800E56B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlProtectHeap @ 0x18007F470 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800818D0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 *     RtlAvlInsertNodeEx @ 0x180081B40 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081F4C (LdrEnsureMrdataHeapExists.c)
 *     ZwQuerySystemTime @ 0x18015FA80 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int64 Heap_0; // rax
  __int64 v9; // rbx
  unsigned __int64 BeginAddress; // rax
  PRUNTIME_FUNCTION v11; // r9
  ULONG v12; // r10d
  unsigned __int64 EndAddress; // rcx
  int v14; // edx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  _QWORD *v20; // rdx
  bool v21; // r8
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  bool v24; // r8
  _QWORD *v25; // rax
  __int64 *v26; // rax
  int v27; // edx
  int v29; // ecx
  __int64 v30; // rdx
  __int64 v31; // rdx

  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v6);
    v7 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v7 == -1 )
        goto LABEL_43;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v7 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  LdrControlFlowGuardEnforced();
  Heap_0 = RtlAllocateHeap_0();
  v9 = Heap_0;
  if ( !Heap_0 )
  {
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v31);
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_43;
      v27 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v27;
      if ( !v27 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  *(_QWORD *)(Heap_0 + 16) = FunctionTable;
  *(_DWORD *)(Heap_0 + 84) = EntryCount;
  ZwQuerySystemTime(Heap_0 + 24);
  BeginAddress = FunctionTable->BeginAddress;
  v11 = FunctionTable + 1;
  *(_QWORD *)(v9 + 32) = BeginAddress;
  v12 = 1;
  EndAddress = FunctionTable->EndAddress;
  *(_QWORD *)(v9 + 40) = EndAddress;
  *(_DWORD *)(v9 + 80) = 0;
  *(_QWORD *)(v9 + 48) = BaseAddress;
  if ( EntryCount > 1 )
  {
    v14 = 0;
    v15 = (unsigned int)BeginAddress;
    v16 = (unsigned int)EndAddress;
    do
    {
      if ( !v14 && v11->BeginAddress < FunctionTable[v12 - 1].BeginAddress )
      {
        *(_DWORD *)(v9 + 80) = 1;
        v14 = 1;
      }
      v17 = v11->BeginAddress;
      BeginAddress = v15;
      if ( v17 < v15 )
      {
        *(_QWORD *)(v9 + 32) = v17;
        BeginAddress = (unsigned int)v17;
      }
      v18 = v11->EndAddress;
      EndAddress = v16;
      if ( v18 > v16 )
      {
        *(_QWORD *)(v9 + 40) = v18;
        EndAddress = (unsigned int)v18;
      }
      ++v11;
      ++v12;
      v15 = BeginAddress;
      v16 = EndAddress;
    }
    while ( v12 < EntryCount );
  }
  *(_QWORD *)(v9 + 32) = BaseAddress + BeginAddress;
  *(_QWORD *)(v9 + 40) = EndAddress + BaseAddress;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock, v19);
  v20 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  v21 = 0;
  if ( !RtlpDynamicFunctionTableTreeMin )
    goto LABEL_21;
  while ( *(_QWORD *)(v9 + 32) < *(v20 - 7) )
  {
    v22 = (_QWORD *)*v20;
    if ( !*v20 )
      goto LABEL_21;
LABEL_30:
    v20 = v22;
  }
  v22 = (_QWORD *)v20[1];
  if ( v22 )
    goto LABEL_30;
  v21 = 1;
LABEL_21:
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&RtlpDynamicFunctionTableTreeMin,
    (unsigned __int64)v20,
    v21,
    (_QWORD *)(v9 + 88));
  v23 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  v24 = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_27;
  while ( 2 )
  {
    if ( *(_QWORD *)(v9 + 40) < *(v23 - 10) )
    {
      v25 = (_QWORD *)*v23;
      if ( !*v23 )
        goto LABEL_27;
      goto LABEL_24;
    }
    v25 = (_QWORD *)v23[1];
    if ( v25 )
    {
LABEL_24:
      v23 = v25;
      continue;
    }
    break;
  }
  v24 = 1;
LABEL_27:
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&RtlpDynamicFunctionTableTreeMax,
    (unsigned __int64)v23,
    v24,
    (_QWORD *)(v9 + 112));
  v26 = (__int64 *)qword_1801E0068;
  if ( *(__int64 **)qword_1801E0068 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v9 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v9 + 8) = v26;
  *v26 = v9;
  qword_1801E0068 = v9;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v30);
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
LABEL_43:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    v29 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
    *(_DWORD *)LdrpMrdataHeapUnprotected = v29;
    if ( !v29 )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 1;
}
