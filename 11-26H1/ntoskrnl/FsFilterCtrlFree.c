/*
 * XREFs of FsFilterCtrlFree @ 0x140466EF0
 * Callers:
 *     FsRtlAcquireFileExclusiveCommon @ 0x1409BB670 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFile @ 0x140A56BA0 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140A5D320 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x140A5D5D0 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlQueryOpen @ 0x140ABB7B4 (FsRtlQueryOpen.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall FsFilterCtrlFree(__int64 a1)
{
  int v1; // eax
  $AA7B8230874764A53E1F7A8CE5E032EC *p_IptSaveArea; // r9

  v1 = *(_DWORD *)(a1 + 64);
  if ( (v1 & 1) != 0 )
  {
    p_IptSaveArea = 0LL;
    if ( (v1 & 2) != 0 )
    {
      switch ( *(_BYTE *)(a1 + 4) )
      {
        case 0xFA:
        case 0xFC:
        case 0xFE:
          p_IptSaveArea = &VslpReservedTransferLock.1144;
          break;
        case 0xFB:
        case 0xFD:
        case 0xFF:
          p_IptSaveArea = ($AA7B8230874764A53E1F7A8CE5E032EC *)&VslpReservedTransferLock.IptSaveArea;
          break;
        default:
          break;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 80) - 8LL) = 0LL;
      KeSetEvent((PRKEVENT)p_IptSaveArea, 0, 0);
    }
    else
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 80), 0x676D5346u);
    }
  }
}
