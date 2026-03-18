/*
 * XREFs of PfTCleanup @ 0x1407C6254
 * Callers:
 *     PfTStart @ 0x1407C67E4 (PfTStart.c)
 *     PfpPartitionCleanup @ 0x1407C70A8 (PfpPartitionCleanup.c)
 *     PfSetSuperfetchInformation @ 0x140B5DB14 (PfSetSuperfetchInformation.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     PfFbBufferListInsertInFree @ 0x1404AC4DC (PfFbBufferListInsertInFree.c)
 *     PfpTraceLogPfPartitionId @ 0x14060039C (PfpTraceLogPfPartitionId.c)
 *     PfFbBufferListShutdown @ 0x1406004A8 (PfFbBufferListShutdown.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlpInterlockedFlushSList @ 0x140730D10 (RtlpInterlockedFlushSList.c)
 *     PfTCleanupBuffers @ 0x1407C6514 (PfTCleanupBuffers.c)
 *     PfTTraceListTrim @ 0x1407C6BF8 (PfTTraceListTrim.c)
 *     PfFbBufferListCleanup @ 0x1407C822C (PfFbBufferListCleanup.c)
 *     PfTTraceListFree @ 0x140AF610C (PfTTraceListFree.c)
 *     PfTAccessTracingCleanup @ 0x140BF8DFC (PfTAccessTracingCleanup.c)
 */

char __fastcall PfTCleanup(__int64 a1, unsigned int a2)
{
  bool v4; // r14
  PSLIST_ENTRY v5; // rbx
  PSLIST_ENTRY v6; // rdx
  char result; // al
  void *v8; // rcx
  int v9; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v10[2]; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11[2]; // [rsp+48h] [rbp-38h] BYREF
  int *v12; // [rsp+68h] [rbp-18h]
  __int64 v13; // [rsp+70h] [rbp-10h]

  if ( (unsigned int)dword_140E07398 > 4 && tlgKeywordOn((__int64)&dword_140E07398, 2LL) )
  {
    v9 = PfpTraceLogPfPartitionId((__int64 *)a1);
    v13 = 4LL;
    v12 = &v9;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07398, (unsigned __int8 *)byte_140049481, 0LL, 0LL, 3u, v11);
  }
  v10[1] = v10;
  v10[0] = v10;
  v4 = KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 168);
  PfTAccessTracingCleanup(a1, 1LL, a2);
  ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 624));
  *(_DWORD *)(a1 + 604) = 0;
  *(_DWORD *)(a1 + 612) = 0;
  PfTTraceListTrim(a1, 0LL, 0LL, v10);
  PfTTraceListTrim(a1, 1LL, 0LL, v10);
  *(_DWORD *)(a1 + 616) = 0;
  PfTAccessTracingCleanup(a1, 2LL, a2);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 624));
  PfTTraceListFree(a1, v10);
  *(_DWORD *)(a1 + 560) = 0;
  v5 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 544));
  while ( v5 )
  {
    v6 = v5;
    v5 = v5->Next;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)(a1 + 416),
      v6,
      LODWORD(v6[2].Next) - (_DWORD)v6,
      *((_DWORD *)&v6[2].Next + 3),
      1);
  }
  PfFbBufferListShutdown((struct _EX_RUNDOWN_REF *)(a1 + 288));
  PfFbBufferListShutdown((struct _EX_RUNDOWN_REF *)(a1 + 416));
  if ( !v4 && *(_QWORD *)(a1 + 168) )
  {
    KeSetEvent((PRKEVENT)(a1 + 264), 0, 0);
    KeWaitForSingleObject(*(PVOID *)(a1 + 168), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(a1 + 168));
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  PfTCleanupBuffers(a1 + 88);
  PfTCleanupBuffers(a1 + 128);
  PfFbBufferListCleanup(a1 + 288);
  result = PfFbBufferListCleanup(a1 + 416);
  v8 = *(void **)(a1 + 680);
  if ( v8 )
  {
    result = ObfDereferenceObject(v8);
    *(_QWORD *)(a1 + 680) = 0LL;
  }
  *(_DWORD *)(a1 + 72) = 0;
  if ( (unsigned int)dword_140E07398 > 4 )
  {
    result = tlgKeywordOn((__int64)&dword_140E07398, 2LL);
    if ( result )
    {
      v9 = PfpTraceLogPfPartitionId((__int64 *)a1);
      v13 = 4LL;
      v12 = &v9;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E07398,
               (unsigned __int8 *)qword_1400493F8,
               0LL,
               0LL,
               3u,
               v11);
    }
  }
  return result;
}
