/*
 * XREFs of MmPrefetchForCacheManager @ 0x140A59FA0
 * Callers:
 *     CcFetchDataForRead @ 0x1402C8550 (CcFetchDataForRead.c)
 *     CcPerformReadAhead @ 0x140388BC8 (CcPerformReadAhead.c)
 *     CcAsyncReadPrefetch @ 0x14038A7BC (CcAsyncReadPrefetch.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiReturnCcAccessLog @ 0x1403C4304 (MiReturnCcAccessLog.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiPfExecuteReadList @ 0x140A5AB58 (MiPfExecuteReadList.c)
 *     MiReleaseReadListResources @ 0x140A5B840 (MiReleaseReadListResources.c)
 *     MiGetCcAccessLog @ 0x140A5BDE4 (MiGetCcAccessLog.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmPrefetchForCacheManager(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        PVOID *a8)
{
  unsigned int v8; // esi
  struct _KTHREAD *CurrentThread; // r13
  __int64 CcAccessLog; // rdi
  __int64 v14; // r15
  PVOID *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax
  PVOID P; // [rsp+80h] [rbp+8h] BYREF

  v8 = a5;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  CcAccessLog = 0LL;
  v14 = **(_QWORD **)(a1 + 40);
  if ( dword_140E3C52C && a5 >= dword_140E3C530 )
    CcAccessLog = MiGetCcAccessLog(a1, a1, a4 >> 12);
  if ( (int)MiPfPrepareSequentialReadList(CcAccessLog, v14, a2, a3, a4, v8, -1, 0LL, (__int64)&P) >= 0 && P )
  {
    v15 = a8;
    *((_DWORD *)P + 52) = 1;
    if ( !*v15 )
      --CurrentThread->SpecialApcDisable;
    if ( (int)MiPfPutPagesInTransition((__int64)P, 0LL, 1, 0LL) >= 0 && *((PVOID *)P + 28) != (char *)P + 224 )
    {
      if ( CcAccessLog )
        MiReturnCcAccessLog((__int64)&MiSystemPartition, CcAccessLog, 1);
      MiPfExecuteReadList(P, 1LL, 0xFFFFFFFFLL, a7);
      result = 1LL;
      *(_QWORD *)P = *v15;
      *v15 = P;
      return result;
    }
    if ( !*v15
      && CurrentThread->SpecialApcDisable++ == -1
      && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v17, v16);
    }
    MiReleaseReadListResources(P);
    ExFreePoolWithTag(P, 0);
  }
  if ( CcAccessLog )
    MiReturnCcAccessLog((__int64)&MiSystemPartition, CcAccessLog, 0);
  return 0LL;
}
