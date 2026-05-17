/*
 * XREFs of RtlInstallFunctionTableCallback @ 0x1800CCB20
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
 *     RtlStringCbCopyW @ 0x1800CCF60 (RtlStringCbCopyW.c)
 *     ZwQuerySystemTime @ 0x18015FA80 (ZwQuerySystemTime.c)
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
  __int64 v13; // rdx
  int v14; // ebx
  __int64 Heap_0; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  bool v19; // r8
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  bool v22; // r8
  _QWORD *v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // rdx
  int v28; // r8d

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
  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v13);
    v14 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v14 == -1 )
        goto LABEL_39;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v14 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( LdrControlFlowGuardEnforced() && (unsigned __int64)(v10 + 136) >= 0xFF000
    || (Heap_0 = RtlAllocateHeap_0(), (v16 = Heap_0) == 0) )
  {
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v25);
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_39;
      v26 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v26;
      if ( !v26 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  *(_QWORD *)(Heap_0 + 16) = TableIdentifier;
  ZwQuerySystemTime(Heap_0 + 24);
  *(_QWORD *)(v16 + 32) = BaseAddress;
  *(_QWORD *)(v16 + 40) = BaseAddress + v6;
  *(_QWORD *)(v16 + 64) = Context;
  *(_QWORD *)(v16 + 48) = BaseAddress;
  *(_QWORD *)(v16 + 56) = Callback;
  *(_DWORD *)(v16 + 80) = 2;
  *(_QWORD *)(v16 + 72) = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    *(_QWORD *)(v16 + 72) = v16 + 136;
    RtlStringCbCopyW(v16 + 136, v10);
  }
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock, v17);
  v18 = (_QWORD *)RtlpDynamicCallbackTableTreeMin;
  v19 = 0;
  if ( !RtlpDynamicCallbackTableTreeMin )
    goto LABEL_22;
  while ( *(_QWORD *)(v16 + 32) < *(v18 - 7) )
  {
    v20 = (_QWORD *)*v18;
    if ( !*v18 )
      goto LABEL_22;
LABEL_32:
    v18 = v20;
  }
  v20 = (_QWORD *)v18[1];
  if ( v20 )
    goto LABEL_32;
  v19 = 1;
LABEL_22:
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&RtlpDynamicCallbackTableTreeMin,
    (unsigned __int64)v18,
    v19,
    (_QWORD *)(v16 + 88));
  v21 = (_QWORD *)RtlpDynamicCallbackTableTreeMax;
  v22 = 0;
  if ( !RtlpDynamicCallbackTableTreeMax )
    goto LABEL_28;
  while ( 2 )
  {
    if ( *(_QWORD *)(v16 + 40) < *(v21 - 10) )
    {
      v23 = (_QWORD *)*v21;
      if ( !*v21 )
        goto LABEL_28;
      goto LABEL_25;
    }
    v23 = (_QWORD *)v21[1];
    if ( v23 )
    {
LABEL_25:
      v21 = v23;
      continue;
    }
    break;
  }
  v22 = 1;
LABEL_28:
  RtlAvlInsertNodeEx(
    (unsigned __int64 *)&RtlpDynamicCallbackTableTreeMax,
    (unsigned __int64)v21,
    v22,
    (_QWORD *)(v16 + 112));
  v24 = (__int64 *)qword_1801E0068;
  if ( *(__int64 **)qword_1801E0068 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v16 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v16 + 8) = v24;
  *v24 = v16;
  qword_1801E0068 = v16;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v27);
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      v28 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v28;
      if ( !v28 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      return 1;
    }
LABEL_39:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return 1;
}
