/*
 * XREFs of RtlInstallFunctionTableCallback @ 0x1800CA290
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
 *     RtlStringCbCopyW @ 0x1800CA6D0 (RtlStringCbCopyW.c)
 *     ZwQuerySystemTime @ 0x18015F980 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlInstallFunctionTableCallback(
        ULONG64 TableIdentifier,
        ULONG64 BaseAddress,
        ULONG Length,
        PGET_RUNTIME_FUNCTION_CALLBACK Callback,
        PVOID Context,
        PCWSTR OutOfProcessCallbackDll)
{
  __int64 v6; // rbp
  __int64 v10; // rsi
  __int64 v11; // rax
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap_0; // rax
  __int64 v18; // rbx
  _QWORD *v19; // rdx
  bool v20; // r8
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  bool v23; // r8
  _QWORD *v24; // rax
  __int64 *v25; // rax
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // r8d

  v6 = Length;
  if ( (TableIdentifier & 3) != 3 || (Length & 0x80000000) != 0 )
    return 0;
  v10 = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( OutOfProcessCallbackDll[v11] );
    v10 = 2 * v11 + 2;
  }
  if ( LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  LOBYTE(v13) = LdrControlFlowGuardEnforced();
  if ( v13 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v14 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v14 == -1 )
        goto LABEL_40;
    }
    else
    {
      RtlProtectHeap(LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v14 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  LOBYTE(v15) = LdrControlFlowGuardEnforced();
  if ( v15 )
  {
    if ( (unsigned __int64)(v10 + 136) >= 0xFF000 )
      goto LABEL_34;
    ProcessHeap = LdrpMrdataHeap;
  }
  else
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  }
  Heap_0 = (LARGE_INTEGER *)RtlAllocateHeap_0(ProcessHeap, 0, v10 + 136);
  v18 = (__int64)Heap_0;
  if ( !Heap_0 )
  {
LABEL_34:
    LOBYTE(v26) = LdrControlFlowGuardEnforced();
    if ( v26 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_40;
      v27 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v27;
      if ( !v27 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  Heap_0[2].QuadPart = TableIdentifier;
  ZwQuerySystemTime(Heap_0 + 3);
  *(_QWORD *)(v18 + 32) = BaseAddress;
  *(_QWORD *)(v18 + 40) = BaseAddress + v6;
  *(_QWORD *)(v18 + 64) = Context;
  *(_QWORD *)(v18 + 48) = BaseAddress;
  *(_QWORD *)(v18 + 56) = Callback;
  *(_DWORD *)(v18 + 80) = 2;
  *(_QWORD *)(v18 + 72) = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    *(_QWORD *)(v18 + 72) = v18 + 136;
    RtlStringCbCopyW(v18 + 136, v10);
  }
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v19 = (_QWORD *)RtlpDynamicCallbackTableTreeMin;
  v20 = 0;
  if ( !RtlpDynamicCallbackTableTreeMin )
    goto LABEL_23;
  while ( *(_QWORD *)(v18 + 32) < *(v19 - 7) )
  {
    v21 = (_QWORD *)*v19;
    if ( !*v19 )
      goto LABEL_23;
LABEL_33:
    v19 = v21;
  }
  v21 = (_QWORD *)v19[1];
  if ( v21 )
    goto LABEL_33;
  v20 = 1;
LABEL_23:
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&RtlpDynamicCallbackTableTreeMin,
    (unsigned __int64)v19,
    v20,
    (_QWORD *)(v18 + 88));
  v22 = (_QWORD *)RtlpDynamicCallbackTableTreeMax;
  v23 = 0;
  if ( !RtlpDynamicCallbackTableTreeMax )
    goto LABEL_29;
  while ( 2 )
  {
    if ( *(_QWORD *)(v18 + 40) < *(v22 - 10) )
    {
      v24 = (_QWORD *)*v22;
      if ( !*v22 )
        goto LABEL_29;
      goto LABEL_26;
    }
    v24 = (_QWORD *)v22[1];
    if ( v24 )
    {
LABEL_26:
      v22 = v24;
      continue;
    }
    break;
  }
  v23 = 1;
LABEL_29:
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&RtlpDynamicCallbackTableTreeMax,
    (unsigned __int64)v22,
    v23,
    (_QWORD *)(v18 + 112));
  v25 = (__int64 *)qword_1801DF068;
  if ( *(PVOID **)qword_1801DF068 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v18 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v18 + 8) = v25;
  *v25 = v18;
  qword_1801DF068 = v18;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  LOBYTE(v28) = LdrControlFlowGuardEnforced();
  if ( v28 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      v29 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v29;
      if ( !v29 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      return 1;
    }
LABEL_40:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return 1;
}
