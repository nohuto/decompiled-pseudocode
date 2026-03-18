/*
 * XREFs of ?VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14000AC8C
 * Callers:
 *     VidSchiSuspendResumeHwContext @ 0x14000619C (VidSchiSuspendResumeHwContext.c)
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140009F10 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000A150 (-ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014A48 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiNotifyReadyQueueAdded(struct VIDSCH_HW_QUEUE *a1)
{
  __int64 v1; // rdx
  int v2; // eax
  struct _KEVENT *v3; // rbx
  struct _LIST_ENTRY *Blink; // rax

  v1 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  v2 = *(_DWORD *)(v1 + 1728);
  v3 = *(struct _KEVENT **)(v1 + 24);
  if ( v2 == -1 || v3[3].Header.SignalState == -1 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 28672LL, a1, v1, 0LL);
    WdLogGlobalForLineNumber = 916;
    JUMPOUT(0x14000AD92LL);
  }
  *(_DWORD *)(v1 + 1728) = v2 + 1;
  if ( *((_BYTE *)a1 + 145) )
  {
    if ( !*(_DWORD *)(v1 + 1732) )
      _InterlockedExchange((volatile __int32 *)(v1 + 504), 1);
    ++*(_DWORD *)(v1 + 1732);
  }
  ++v3[3].Header.SignalState;
  if ( *(_DWORD *)(v1 + 1728) == 1 && *(_DWORD *)(v1 + 16520) != -1 )
  {
    Blink = v3[138].Header.WaitListHead.Blink;
    if ( Blink )
      ((void (__fastcall *)(struct _LIST_ENTRY *))Blink)(v3[140].Header.WaitListHead.Flink);
  }
  if ( v3[3].Header.SignalState == 1 )
  {
    v3[62].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    KeSetEvent(v3 + 61, 0, 0);
  }
}
