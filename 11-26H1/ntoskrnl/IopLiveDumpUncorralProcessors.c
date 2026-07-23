/*
 * XREFs of IopLiveDumpUncorralProcessors @ 0x1405D53FC
 * Callers:
 *     IopLiveDumpCaptureMemoryPages @ 0x1405D0EE0 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpCollectPages @ 0x1405D1168 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x1405D18A8 (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1405317E8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x1405D291C (IopLiveDumpInitiateCorralStateChange.c)
 *     IopLiveDumpTraceUncorralProcessorsDuration @ 0x1405D523C (IopLiveDumpTraceUncorralProcessorsDuration.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405DA3E0 (IopLiveDumpTraceNoArgs.c)
 */

char __fastcall IopLiveDumpUncorralProcessors(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v8; // r9
  __int64 v9; // r9
  unsigned __int64 v10; // rsi
  __int64 *v11; // rcx
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+80h] [rbp+40h] BYREF
  __int64 v17; // [rsp+88h] [rbp+48h] BYREF

  v4 = *(_QWORD *)a1;
  v5 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  IopLiveDumpInitiateCorralStateChange(a1, 5, &v16, a4);
  IopLiveDumpInitiateCorralStateChange(a1, 8, &v17, v8);
  if ( (*(_DWORD *)(v4 + 80) & 0x100) == 0 )
  {
    IopLiveDumpInitiateCorralStateChange(a1, 6, &v15, v9);
    v5 = v15;
  }
  PoAllProcIntrDisabled = 0;
  IopLiveDumpInitiateCorralStateChange(a1, -1, &v14, v9);
  KeRevertToUserGroupAffinityThread((PGROUP_AFFINITY)(a1 + 96));
  if ( a2 || (*(_DWORD *)(v4 + 40) & 0x20) != 0 )
  {
    v10 = *(unsigned __int8 *)(a1 + 88);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), *(_BYTE *)(a1 + 88));
    __writecr8(v10);
  }
  *(_DWORD *)(a1 + 8) &= ~1u;
  if ( IopLiveDumpIsTracingEnabled() )
  {
    v11 = LIVEDUMP_EVENT_SIZING_WORKFLOW_SYSTEM_QUIESCE_END;
    if ( (*(_DWORD *)(v4 + 80) & 1) == 0 )
      v11 = LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUIESCE_END;
    IopLiveDumpTraceNoArgs(v11);
  }
  v12 = *(_DWORD *)(v4 + 80);
  if ( (v12 & 0x80u) != 0 )
    LOBYTE(v12) = IopLiveDumpTraceUncorralProcessorsDuration(*(_QWORD *)a1, v14, v5, v17, v16);
  return v12;
}
