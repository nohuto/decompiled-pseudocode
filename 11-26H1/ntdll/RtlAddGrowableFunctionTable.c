/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x1800788F0
 * Callers:
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x180076F90 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlProtectHeap @ 0x180076820 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180078C70 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180078D20 (LdrProtectMrdata.c)
 *     RtlAvlInsertNodeEx @ 0x180078EE0 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800792EC (LdrEnsureMrdataHeapExists.c)
 *     NtSetInformationProcess @ 0x18015F1C0 (NtSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x18015F980 (ZwQuerySystemTime.c)
 */

DWORD __cdecl RtlAddGrowableFunctionTable(
        PVOID *DynamicTable,
        PRUNTIME_FUNCTION FunctionTable,
        DWORD EntryCount,
        DWORD MaximumEntryCount,
        ULONG_PTR RangeBase,
        ULONG_PTR RangeEnd)
{
  DWORD result; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // ecx
  int v13; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap_0; // rax
  __int64 *v16; // rbx
  NTSTATUS v17; // edi
  _QWORD *v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 **v24; // rax
  int v25; // eax
  PVOID v26; // rcx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // edx
  int v31; // eax
  __int128 ProcessInformation; // [rsp+20h] [rbp-28h] BYREF

  ProcessInformation = 0LL;
  if ( EntryCount > MaximumEntryCount || RangeBase >= RangeEnd )
    __fastfail(5u);
  result = LdrEnsureMrdataHeapExists(DynamicTable, FunctionTable);
  if ( (result & 0x80000000) == 0 )
  {
    LOBYTE(v10) = LdrControlFlowGuardEnforced();
    if ( v10 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v11 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        if ( v11 == -1 )
          goto LABEL_7;
      }
      else
      {
        RtlProtectHeap(LdrpMrdataHeap, 0);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v11 + 1;
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    LOBYTE(v13) = LdrControlFlowGuardEnforced();
    if ( v13 )
      ProcessHeap = LdrpMrdataHeap;
    else
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    Heap_0 = (LARGE_INTEGER *)RtlAllocateHeap_0(ProcessHeap, 0, 0x88uLL);
    v16 = (__int64 *)Heap_0;
    if ( Heap_0 )
    {
      Heap_0[2].QuadPart = (__int64)FunctionTable;
      Heap_0[10].HighPart = EntryCount;
      ZwQuerySystemTime(Heap_0 + 3);
      v16[4] = RangeBase;
      v16[5] = RangeEnd;
      v16[6] = RangeBase;
      *((_DWORD *)v16 + 20) = 3;
      *(_QWORD *)&ProcessInformation = v16;
      BYTE8(ProcessInformation) = 0;
      v17 = NtSetInformationProcess(
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              ProcessDynamicFunctionTableInformation,
              &ProcessInformation,
              0x10u);
      if ( v17 >= 0 )
      {
        LdrProtectMrdata(0LL);
        RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
        v18 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
        LOBYTE(v19) = 0;
        if ( !RtlpDynamicFunctionTableTreeMin )
          goto LABEL_22;
        while ( 1 )
        {
          if ( (unsigned __int64)v16[4] < *(v18 - 7) )
          {
            v20 = (_QWORD *)*v18;
            if ( !*v18 )
              goto LABEL_22;
          }
          else
          {
            v20 = (_QWORD *)v18[1];
            if ( !v20 )
            {
              LOBYTE(v19) = 1;
LABEL_22:
              RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v18, v19, v16 + 11);
              v21 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
              LOBYTE(v22) = 0;
              if ( !RtlpDynamicFunctionTableTreeMax )
                goto LABEL_28;
              while ( 1 )
              {
                if ( (unsigned __int64)v16[5] >= *(v21 - 10) )
                {
                  v23 = (_QWORD *)v21[1];
                  if ( !v23 )
                  {
                    LOBYTE(v22) = 1;
LABEL_28:
                    RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v21, v22, v16 + 14);
                    v24 = (__int64 **)qword_1801DF068;
                    if ( *(PVOID **)qword_1801DF068 != &RtlpDynamicFunctionTable )
                      __fastfail(3u);
                    *v16 = (__int64)&RtlpDynamicFunctionTable;
                    v16[1] = (__int64)v24;
                    *v24 = v16;
                    qword_1801DF068 = (__int64)v16;
                    RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
                    LdrProtectMrdata(1LL);
                    *DynamicTable = v16;
                    LOBYTE(v31) = LdrControlFlowGuardEnforced();
                    if ( v31 )
                    {
                      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
                      v28 = *(_DWORD *)LdrpMrdataHeapUnprotected;
                      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
                      {
LABEL_8:
                        v12 = v28 - 1;
                        *(_DWORD *)LdrpMrdataHeapUnprotected = v12;
                        if ( !v12 )
                          RtlProtectHeap(LdrpMrdataHeap, 1u);
                        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
                        return v17;
                      }
LABEL_7:
                      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
                      __fastfail(0xEu);
                    }
                    return v17;
                  }
                }
                else
                {
                  v23 = (_QWORD *)*v21;
                  if ( !*v21 )
                    goto LABEL_28;
                }
                v21 = v23;
              }
            }
          }
          v18 = v20;
        }
      }
      LOBYTE(v25) = LdrControlFlowGuardEnforced();
      if ( v25 )
        v26 = LdrpMrdataHeap;
      else
        v26 = NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap_0(v26, 0, v16);
      LOBYTE(v27) = LdrControlFlowGuardEnforced();
      if ( v27 )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v28 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
          goto LABEL_8;
        goto LABEL_7;
      }
      return v17;
    }
    else
    {
      LOBYTE(v29) = LdrControlFlowGuardEnforced();
      if ( v29 )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          goto LABEL_7;
        v30 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
        *(_DWORD *)LdrpMrdataHeapUnprotected = v30;
        if ( !v30 )
          RtlProtectHeap(LdrpMrdataHeap, 1u);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      return -1073741670;
    }
  }
  return result;
}
