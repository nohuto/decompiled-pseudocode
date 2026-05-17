/*
 * XREFs of RtlDeleteFunctionTable @ 0x1800DB030
 * Callers:
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x18007FBF0 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlProtectHeap @ 0x18007F470 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800818D0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180081980 (LdrProtectMrdata.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180082300 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAvlRemoveNode @ 0x1800DB240 (RtlAvlRemoveNode.c)
 */

BOOLEAN __cdecl RtlDeleteFunctionTable(PRUNTIME_FUNCTION FunctionTable)
{
  __int64 v2; // rdx
  __int64 i; // rbx
  __int64 v4; // rdx
  int v5; // edi
  BOOLEAN v6; // di
  int v8; // edi
  __int64 v9; // rdx
  int v10; // ecx
  __int64 *v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rcx
  __int64 *v14; // rax

  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock, v2);
  for ( i = RtlpDynamicFunctionTable; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &RtlpDynamicFunctionTable )
    {
      RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
      LdrProtectMrdata(1);
      return 0;
    }
    if ( *(PRUNTIME_FUNCTION *)(i + 16) == FunctionTable )
      break;
  }
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v4);
    v5 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v5 == -1 )
        goto LABEL_8;
    }
    else
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v5 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  v8 = *(_DWORD *)(i + 80);
  if ( v8 != 3 )
  {
    v11 = &RtlpDynamicCallbackTableTreeMin;
    if ( v8 != 2 )
      v11 = &RtlpDynamicFunctionTableTreeMin;
    RtlAvlRemoveNode(v11, i + 88);
    v12 = &RtlpDynamicCallbackTableTreeMax;
    if ( v8 != 2 )
      v12 = &RtlpDynamicFunctionTableTreeMax;
    RtlAvlRemoveNode(v12, i + 112);
    v13 = *(_QWORD *)i;
    if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || (v14 = *(__int64 **)(i + 8), *v14 != i) )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
  }
  v6 = 1;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( *(_DWORD *)(i + 80) == 3 )
  {
    RtlDeleteGrowableFunctionTable((__int64 *)i);
  }
  else
  {
    LdrControlFlowGuardEnforced();
    RtlFreeHeap_0();
  }
  if ( !LdrControlFlowGuardEnforced() )
    return v6;
  RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v9);
  if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
  {
LABEL_8:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  v10 = *(_DWORD *)LdrpMrdataHeapUnprotected - 1;
  *(_DWORD *)LdrpMrdataHeapUnprotected = v10;
  if ( !v10 )
    RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  return 1;
}
