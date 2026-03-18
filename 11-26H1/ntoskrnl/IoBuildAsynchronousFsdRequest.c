/*
 * XREFs of IoBuildAsynchronousFsdRequest @ 0x1404B4150
 * Callers:
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140790C90 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140790D30 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140AFE0E0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x140B05420 (FsRtlMdlReadEx.c)
 * Callees:
 *     IopBuildAsynchronousFsdRequest @ 0x1404B4190 (IopBuildAsynchronousFsdRequest.c)
 */

PIRP __stdcall IoBuildAsynchronousFsdRequest(
        ULONG MajorFunction,
        PDEVICE_OBJECT DeviceObject,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER StartingOffset,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  return (PIRP)IopBuildAsynchronousFsdRequest(
                 MajorFunction,
                 DeviceObject,
                 Buffer,
                 Length,
                 StartingOffset,
                 IoStatusBlock,
                 retaddr);
}
