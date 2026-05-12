/*
 * XREFs of NvmeControllerCommandTimeoutDetectThread @ 0x14012B190
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerAcquireRundown @ 0x1400C5B84 (NvmeControllerAcquireRundown.c)
 *     NvmeControllerDetectCommandTimeout @ 0x14012B43C (NvmeControllerDetectCommandTimeout.c)
 *     NvmeControllerResetRecovery @ 0x14012BD30 (NvmeControllerResetRecovery.c)
 *     NvmeDeviceHierarchicalReset @ 0x14012C1C0 (NvmeDeviceHierarchicalReset.c)
 */

NTSTATUS __fastcall NvmeControllerCommandTimeoutDetectThread(char *Context)
{
  __int64 v2; // rax
  int v3; // eax

  if ( (int)NvmeControllerAcquireRundown((__int64)Context) >= 0 )
  {
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 200LL), Executive, 0, 0, 0LL);
    v2 = *((_QWORD *)Context + 17);
    if ( (v2 & 0x80000000) == 0 )
    {
      while ( 1 )
      {
        if ( (v2 & 2) != 0 && *((_DWORD *)Context + 142) == 4 )
          goto LABEL_18;
        _interlockedbittestandreset((volatile signed __int32 *)Context + 268, 3u);
        if ( **((_DWORD **)Context + 161) )
          goto LABEL_18;
        v3 = NvmeControllerDetectCommandTimeout(Context) - 2;
        if ( !v3 )
          break;
        if ( v3 == 1 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 192LL) )
          {
            KeCancelTimer((PKTIMER)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 128LL));
            KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 64LL));
            _InterlockedCompareExchange(
              (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 192LL),
              0,
              1);
          }
          if ( (Context[136] & 2) == 0 )
          {
            NvmeControllerResetRecovery(Context);
LABEL_16:
            if ( !_InterlockedCompareExchange(
                    (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 192LL),
                    1,
                    0) )
              KeSetCoalescableTimer(
                (PKTIMER)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 128LL),
                (LARGE_INTEGER)-50000000LL,
                0x7D0u,
                0x12Cu,
                (PKDPC)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 64LL));
            goto LABEL_18;
          }
          *((_DWORD *)Context + 142) = 4;
          *((_DWORD *)Context + 298) = 39;
          KeClearEvent((PRKEVENT)(Context + 232));
          IoQueueWorkItem(
            *((PIO_WORKITEM *)Context + 20),
            (PIO_WORKITEM_ROUTINE)NvmeAdapterNvmeControllerRebuildAssociationWork,
            DelayedWorkQueue,
            Context);
        }
LABEL_18:
        KeWaitForSingleObject((PVOID)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 200LL), Executive, 0, 0, 0LL);
        v2 = *((_QWORD *)Context + 17);
        if ( (v2 & 0x80000000) != 0 )
          goto LABEL_19;
      }
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 192LL) )
      {
        KeCancelTimer((PKTIMER)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 128LL));
        KeRemoveQueueDpc((PRKDPC)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 64LL));
        _InterlockedCompareExchange(
          (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)Context + 161) + 40LL) + 192LL),
          0,
          1);
      }
      NvmeDeviceHierarchicalReset(Context, *(PSLIST_HEADER *)(*((_QWORD *)Context + 161) + 32LL));
      goto LABEL_16;
    }
LABEL_19:
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 69));
  }
  return PsTerminateSystemThread(0);
}
