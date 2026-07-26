/*
 * XREFs of NdisFRestartFilter @ 0x14009E2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x140013E50 (-ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140137280 (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

NDIS_STATUS __stdcall NdisFRestartFilter(NDIS_HANDLE NdisFilterHandle)
{
  NDIS_STATUS v2; // ebx
  struct _WORK_QUEUE_ITEM *Pool2; // rdi
  int v5; // [rsp+60h] [rbp+8h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      39,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)NdisFilterHandle);
  if ( KeGetCurrentIrql() >= 2u )
  {
    v2 = 0;
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 40LL, 538985550LL);
    if ( Pool2 )
    {
      v5 = 0;
      if ( ndisReferenceRefEx((PKSPIN_LOCK)NdisFilterHandle + 39, 0x16u, (enum _NDIS_REFERENCE_STATUS *)&v5) )
      {
        Pool2->Parameter = Pool2;
        Pool2->WorkerRoutine = ndisQueuedRestartFilter;
        Pool2->List.Flink = 0LL;
        Pool2[1].List.Flink = (_LIST_ENTRY *)NdisFilterHandle;
        ExQueueWorkItem(Pool2, (WORK_QUEUE_TYPE)40);
      }
      else
      {
        ExFreePoolWithTag(Pool2, 0);
        v2 = -1073741823;
      }
    }
    else
    {
      v2 = -1073741670;
    }
  }
  else
  {
    ndisQueueFilterRestart((struct _NDIS_FILTER_BLOCK *)NdisFilterHandle);
    v2 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x28u,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)NdisFilterHandle,
      v2);
  return v2;
}
