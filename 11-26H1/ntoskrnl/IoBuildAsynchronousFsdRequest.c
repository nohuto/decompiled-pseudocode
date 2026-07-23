/*
 * XREFs of IoBuildAsynchronousFsdRequest @ 0x1404AD720
 * Callers:
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1407937C0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140793860 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140B00150 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x140B07030 (FsRtlMdlReadEx.c)
 * Callees:
 *     IopBuildAsynchronousFsdRequest @ 0x1404AD760 (IopBuildAsynchronousFsdRequest.c)
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
