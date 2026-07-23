/*
 * XREFs of KsepApplyShimsToDriver @ 0x1407C091C
 * Callers:
 *     KseDriverLoadImage @ 0x140A38A18 (KseDriverLoadImage.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KsepLogInfo @ 0x1404C6324 (KsepLogInfo.c)
 *     KsepLogError @ 0x1404C635C (KsepLogError.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     KsepPatchDriverImportsTable @ 0x1407C0BE8 (KsepPatchDriverImportsTable.c)
 */

__int64 __fastcall KsepApplyShimsToDriver(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 i; // rbp
  __int64 v9; // rcx
  int v10; // edi
  unsigned int v11; // edi
  void *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-38h]

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  for ( i = 0LL; (unsigned int)i < a4; i = (unsigned int)(i + 1) )
  {
    v9 = *(_QWORD *)(a3 + 80 * i + 72);
    if ( (*(_DWORD *)(v9 + 28) & 4) == 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v9 + 16) + 40LL) )
      {
        LODWORD(v16) = *(_DWORD *)(a1 + 120);
        v10 = guard_dispatch_icall_no_overrides(a2, *(_QWORD *)(a1 + 48));
        if ( v10 < 0 )
        {
          v13 = ((unsigned __int8)_InterlockedExchangeAdd(
                                    (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                    1u)
               + 1) & 0x3F;
          *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v13) = v10;
          *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v13) = 459390;
          if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
            KsepDebugPrint(
              8LL,
              (int)"KSE: Driver blocked with [%ws]: 0x%x\n",
              *(_QWORD *)(a2 + 8),
              (unsigned int)v10,
              v16);
          KsepLogError(
            8LL,
            (__int64)"KSE: Driver blocked with [%ws]: 0x%x\n",
            *(_QWORD *)(a2 + 8),
            (unsigned int)v10,
            v16);
          return (unsigned int)-1073740948;
        }
      }
      v11 = KsepPatchDriverImportsTable(a1, *(_QWORD *)(*(_QWORD *)(a3 + 80 * i + 72) + 16LL));
      if ( (v11 & 0x80000000) != 0 )
      {
        v14 = ((unsigned __int8)_InterlockedExchangeAdd(
                                  (volatile signed __int32 *)&AlpcpMessageLogLock.AbWaitEntryCount,
                                  1u)
             + 1) & 0x3F;
        *(&AlpcpMessageLogLock.Timer.DueTime.HighPart + 2 * v14) = v11;
        *(&AlpcpMessageLogLock.Timer.DueTime.LowPart + 2 * v14) = 459409;
        if ( ((__int64)stru_140E66D40.StackBase & 2) != 0 )
          KsepDebugPrint(8LL, (int)"KSE: Failed to patch driver [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), v11);
        KsepLogError(8LL, (__int64)"KSE: Failed to patch driver [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), v11, v16);
        return v11;
      }
      v12 = *(void **)(*(_QWORD *)(a3 + 80 * i + 72) + 32LL);
      if ( v12 )
        PsReferenceSiloContext(v12);
      *(_QWORD *)&AlpcpMessageLogLock.PriorityFloorCounts[8
                                                        * (((unsigned __int8)_InterlockedExchangeAdd(
                                                                               &KsepHistoryMessagesIndex,
                                                                               1u)
                                                          + 1) & 0x3F)] = 459428LL;
      if ( ((__int64)stru_140E66D40.StackBase & 1) != 0 )
        KsepDebugPrint(
          8LL,
          (int)"KSE: Applied shim [0x%08X] to driver [%ws]\n",
          **(unsigned int **)(*(_QWORD *)(*(_QWORD *)(a3 + 80 * i + 72) + 16LL) + 8LL),
          *(_QWORD *)(a2 + 8));
      KsepLogInfo(
        8LL,
        (__int64)"KSE: Applied shim [0x%08X] to driver [%ws]\n",
        **(unsigned int **)(*(_QWORD *)(*(_QWORD *)(a3 + 80 * i + 72) + 16LL) + 8LL),
        *(_QWORD *)(a2 + 8),
        v16);
    }
  }
  *(_QWORD *)&AlpcpMessageLogLock.PriorityFloorCounts[8
                                                    * (((unsigned __int8)_InterlockedExchangeAdd(
                                                                           &KsepHistoryMessagesIndex,
                                                                           1u)
                                                      + 1) & 0x3F)] = 459432LL;
  if ( ((__int64)stru_140E66D40.StackBase & 1) != 0 )
    KsepDebugPrint(8LL, (int)"KSE: Successfully applied shims to driver [%ws]\n", *(_QWORD *)(a2 + 8));
  KsepLogInfo(8LL, (__int64)"KSE: Successfully applied shims to driver [%ws]\n", *(_QWORD *)(a2 + 8));
  return 0;
}
