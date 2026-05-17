/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x180081550
 * Callers:
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x18007FBF0 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlProtectHeap @ 0x18007F470 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800818D0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 *     RtlAvlInsertNodeEx @ 0x180081B40 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081F4C (LdrEnsureMrdataHeapExists.c)
 *     NtSetInformationProcess @ 0x18015F2C0 (NtSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x18015FA80 (ZwQuerySystemTime.c)
 */

__int64 __fastcall RtlAddGrowableFunctionTable(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  int v14; // ecx
  __int64 Heap_0; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // rdx
  _QWORD *v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // r8
  _QWORD *v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // rdx
  int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int128 v35; // [rsp+20h] [rbp-28h] BYREF

  v35 = 0LL;
  if ( a3 > a4 || a5 >= a6 )
    __fastfail(5u);
  result = LdrEnsureMrdataHeapExists(a1, a2);
  if ( (int)result < 0 )
    return result;
  if ( (unsigned int)LdrControlFlowGuardEnforced(v10) )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v11);
    v13 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v13 == -1 )
        goto LABEL_7;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v13 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  LdrControlFlowGuardEnforced(v12);
  Heap_0 = RtlAllocateHeap_0();
  v17 = Heap_0;
  if ( !Heap_0 )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced(v16) )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v31);
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_7;
      v32 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v32;
      if ( !v32 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 3221225626LL;
  }
  *(_QWORD *)(Heap_0 + 16) = a2;
  *(_DWORD *)(Heap_0 + 84) = a3;
  ZwQuerySystemTime(Heap_0 + 24);
  *(_QWORD *)(v17 + 32) = a5;
  *(_QWORD *)(v17 + 40) = a6;
  *(_QWORD *)(v17 + 48) = a5;
  *(_DWORD *)(v17 + 80) = 3;
  *(_QWORD *)&v35 = v17;
  BYTE8(v35) = 0;
  v19 = NtSetInformationProcess(-1LL, 53LL, &v35, 16LL);
  if ( (v19 & 0x80000000) != 0 )
  {
    LdrControlFlowGuardEnforced(v18);
    RtlFreeHeap_0();
    if ( !(unsigned int)LdrControlFlowGuardEnforced(v28) )
      return v19;
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v29);
    v30 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      goto LABEL_8;
    goto LABEL_7;
  }
  LdrProtectMrdata(0LL);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock, v20);
  v21 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  LOBYTE(v22) = 0;
  if ( RtlpDynamicFunctionTableTreeMin )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v17 + 32) < *(v21 - 7) )
      {
        v23 = (_QWORD *)*v21;
        if ( !*v21 )
          break;
      }
      else
      {
        v23 = (_QWORD *)v21[1];
        if ( !v23 )
        {
          LOBYTE(v22) = 1;
          break;
        }
      }
      v21 = v23;
    }
  }
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v21, v22, v17 + 88);
  v24 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  LOBYTE(v25) = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_26;
  while ( *(_QWORD *)(v17 + 40) < *(v24 - 10) )
  {
    v26 = (_QWORD *)*v24;
    if ( !*v24 )
      goto LABEL_26;
LABEL_23:
    v24 = v26;
  }
  v26 = (_QWORD *)v24[1];
  if ( v26 )
    goto LABEL_23;
  LOBYTE(v25) = 1;
LABEL_26:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v24, v25, v17 + 112);
  v27 = (__int64 *)qword_1801E0068;
  if ( *(__int64 **)qword_1801E0068 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v17 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v17 + 8) = v27;
  *v27 = v17;
  qword_1801E0068 = v17;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1LL);
  *a1 = v17;
  if ( (unsigned int)LdrControlFlowGuardEnforced(v33) )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v34);
    v30 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
LABEL_8:
      v14 = v30 - 1;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v14;
      if ( !v14 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      return v19;
    }
LABEL_7:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return v19;
}
