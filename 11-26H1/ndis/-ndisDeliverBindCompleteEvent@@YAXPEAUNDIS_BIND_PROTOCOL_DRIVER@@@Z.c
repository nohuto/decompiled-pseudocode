/*
 * XREFs of ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x140161920
 * Callers:
 *     _lambda_b620d5060cec3b68d836340d92a5e127_::_lambda_invoker_cdecl_ @ 0x140161870 (_lambda_b620d5060cec3b68d836340d92a5e127_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x14005B870 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x14005C6F0 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 */

void __fastcall ndisDeliverBindCompleteEvent(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  __int64 v2; // rdi
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // rbx
  int v4; // r9d

  v2 = qword_14011F6D8 + 16;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  RunningDriver = a1->RunningDriver;
  if ( RunningDriver
    && (RunningDriver->MajorNdisVersion >= 6u || RunningDriver->PnPEventHandler)
    && ndisReferenceProtocol(RunningDriver, 0xCu) )
  {
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedCompareExchange(&RunningDriver->NotifyBindCompleteWorkItem.m_queued, 1, 0) )
      ndisDereferenceProtocol(RunningDriver, 0, 0xCu, v4);
    else
      ExQueueWorkItem(&RunningDriver->NotifyBindCompleteWorkItem.m_workitem, NormalWorkQueue);
  }
  else
  {
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
