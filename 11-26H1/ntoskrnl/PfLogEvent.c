/*
 * XREFs of PfLogEvent @ 0x140384750
 * Callers:
 *     PfLogForegroundProcess @ 0x140259F3C (PfLogForegroundProcess.c)
 *     PfFileInfoNotify @ 0x140303740 (PfFileInfoNotify.c)
 *     PfLogFileDataAccess @ 0x140383550 (PfLogFileDataAccess.c)
 *     PfHardFaultLog @ 0x140390674 (PfHardFaultLog.c)
 *     PfpLogApplicationEvent @ 0x14043FAA0 (PfpLogApplicationEvent.c)
 *     PfpRpLogDeprioEvent @ 0x1404B4484 (PfpRpLogDeprioEvent.c)
 *     PfpPartitionLogEventCallback @ 0x1404D2E50 (PfpPartitionLogEventCallback.c)
 *     PfpLogScenarioEventCallback @ 0x1407C87C0 (PfpLogScenarioEventCallback.c)
 *     PfpLogEventRequest @ 0x140B51D4C (PfpLogEventRequest.c)
 *     PfpPowerActionStartScenarioTracingCallback @ 0x140BFE7E0 (PfpPowerActionStartScenarioTracingCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall PfLogEvent(__int64 a1, int a2, int a3, const void *a4, size_t Size)
{
  __int64 v5; // rbx
  PSLIST_ENTRY v6; // rdi
  __int64 v7; // r13
  unsigned int v8; // ebp
  PSLIST_ENTRY v10; // rdx
  __int64 v11; // r8
  int v12; // esi
  __int64 v13; // r8
  _SLIST_ENTRY *Next; // rbx
  __int64 v16; // r8
  _SLIST_ENTRY *v17; // rbx

  v5 = a1 + 416;
  v6 = 0LL;
  v7 = 0LL;
  v8 = (Size + 31) & 0xFFFFFFF0;
  while ( 2 )
  {
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v5) )
    {
      while ( 1 )
      {
        v10 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v5 + 32));
        if ( v10 )
          break;
        v10 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v5 + 16));
        if ( v10 )
          break;
        v12 = guard_dispatch_icall_no_overrides(a1, v5, v16);
        if ( v12 < 0 )
          goto LABEL_22;
      }
      v11 = *((_QWORD *)&v10[1].Next + 1);
      if ( v8 <= (__int64)v10[2].Next - v11 )
      {
        v7 = *((_QWORD *)&v10[1].Next + 1);
        v6 = v10;
        v12 = 0;
        goto LABEL_6;
      }
      if ( *((_DWORD *)&v10[2].Next + 2) )
      {
        guard_dispatch_icall_no_overrides(a1, v10, v11);
        continue;
      }
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + 16), v10);
      v12 = -1073741789;
LABEL_22:
      ++*(_DWORD *)(v5 + 116);
      *(_DWORD *)(v5 + 120) += v8;
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v5);
LABEL_6:
      if ( v12 < 0 )
        goto LABEL_19;
      *(_DWORD *)(v7 + 8) = a3;
      *(_QWORD *)v7 = (a2 << 12) & 0x1F000 ^ ((v8 >> 2) & 0xFFC ^ (*(_QWORD *)v7 & 0xFFFFFFFFFFFE0000uLL | 3) | 0x20000);
      memmove((void *)(v7 + 16), a4, (unsigned int)Size);
      Next = v6[1].Next;
      if ( v8
        && (*((_QWORD *)&v6[1].Next + 1) += v8,
            ++*((_DWORD *)&v6[2].Next + 2),
            (__int64)v6[2].Next - *((_QWORD *)&v6[1].Next + 1) < SHIDWORD(Next[5].Next)) )
      {
        guard_dispatch_icall_no_overrides(a1, v6, v13);
      }
      else
      {
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)&Next[2], v6);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Next);
      }
      return 0;
    }
    else
    {
      v12 = -1073741431;
LABEL_19:
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 692));
      if ( v6 )
      {
        v17 = v6[1].Next;
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)&v17[2], v6);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v17);
      }
    }
    return (unsigned int)v12;
  }
}
