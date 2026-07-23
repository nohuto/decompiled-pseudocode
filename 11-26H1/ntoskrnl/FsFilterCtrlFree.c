/*
 * XREFs of FsFilterCtrlFree @ 0x140460640
 * Callers:
 *     FsRtlAcquireFileExclusiveCommon @ 0x14098C650 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFile @ 0x140A64120 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140A6A2E0 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x140A6A590 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlQueryOpen @ 0x140ABD4B8 (FsRtlQueryOpen.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall FsFilterCtrlFree(__int64 a1)
{
  int v1; // eax
  struct _KEVENT *p_SchedulerAssistYieldCounter; // r9

  v1 = *(_DWORD *)(a1 + 64);
  if ( (v1 & 1) != 0 )
  {
    p_SchedulerAssistYieldCounter = 0LL;
    if ( (v1 & 2) != 0 )
    {
      switch ( *(_BYTE *)(a1 + 4) )
      {
        case 0xFA:
        case 0xFC:
        case 0xFE:
          p_SchedulerAssistYieldCounter = (struct _KEVENT *)&VslpReservedTransferLock.SchedulerAssistYieldCounter;
          break;
        case 0xFB:
        case 0xFD:
        case 0xFF:
          p_SchedulerAssistYieldCounter = (struct _KEVENT *)&VslpReservedTransferLock.Padding[2];
          break;
        default:
          break;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 80) - 8LL) = 0LL;
      KeSetEvent(p_SchedulerAssistYieldCounter, 0, 0);
    }
    else
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 80), 0x676D5346u);
    }
  }
}
