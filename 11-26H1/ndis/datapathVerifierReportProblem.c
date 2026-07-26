/*
 * XREFs of datapathVerifierReportProblem @ 0x1400A4E14
 * Callers:
 *     ?ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140026740 (-ndisNblVerifyTxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x140075B60 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 *     ?ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x140076C50 (-ndisNblVerifyRxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ?ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z @ 0x1400784C0 (-ndisNblVerifyTxCompletion@@YAXPEBU_NET_BUFFER_LIST@@KPEBU_NDIS_OBJECT_HEADER@@@Z.c)
 *     validateMemoryPages @ 0x1400A4F4C (validateMemoryPages.c)
 *     verifySingleMdl @ 0x1400A4FFC (verifySingleMdl.c)
 *     verifySingleNb @ 0x1400A505C (verifySingleNb.c)
 *     verifySingleNbl @ 0x1400A51A0 (verifySingleNbl.c)
 *     verifySingleTxNbl @ 0x1400A5280 (verifySingleTxNbl.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisLiveBugCheck@@YAX_K000@Z @ 0x140092320 (-ndisLiveBugCheck@@YAX_K000@Z.c)
 */

void __fastcall datapathVerifierReportProblem(unsigned int a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rsi

  v5 = a1;
  if ( ndisDatapathVerifierMode == 2 )
    ndisBugCheckEx(0x32uLL, a1, a2, a3);
  if ( KeGetCurrentIrql() )
  {
    if ( !_InterlockedCompareExchange(&dword_14011EDF4, 1, 0) )
    {
      qword_14011EE58 = a3;
      qword_14011EE40 = 50LL;
      qword_14011EE48 = v5;
      qword_14011EE50 = a2;
      RtlCaptureStackBackTrace(3u, 8u, &BackTrace, 0LL);
      WorkItem.Parameter = 0LL;
      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))datapathVerifierReportProblemAsync;
      WorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&WorkItem, NormalWorkQueue);
    }
  }
  else
  {
    ndisLiveBugCheck(50LL, v5, a2, a3);
  }
}
