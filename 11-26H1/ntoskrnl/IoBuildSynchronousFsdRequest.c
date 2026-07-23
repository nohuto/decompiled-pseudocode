/*
 * XREFs of IoBuildSynchronousFsdRequest @ 0x140AD2BD0
 * Callers:
 *     HalpQueryPccInterface @ 0x140789EF4 (HalpQueryPccInterface.c)
 *     RawQueryFileSystemInformation @ 0x140805BB0 (RawQueryFileSystemInformation.c)
 *     ExpQueryPrmInterface @ 0x140845358 (ExpQueryPrmInterface.c)
 *     IopShutdownBaseFileSystems @ 0x140BF750C (IopShutdownBaseFileSystems.c)
 *     IoShutdownSystem @ 0x140C12A68 (IoShutdownSystem.c)
 *     IopCreateArcNamesCd @ 0x140CC26E4 (IopCreateArcNamesCd.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x1403310C0 (IopQueueThreadIrp.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1404AD760 (IopBuildAsynchronousFsdRequest.c)
 */

PIRP __stdcall IoBuildSynchronousFsdRequest(
        ULONG MajorFunction,
        PDEVICE_OBJECT DeviceObject,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  __int64 v7; // rdx
  IRP *v8; // rbx
  PIRP result; // rax

  v8 = (IRP *)IopBuildAsynchronousFsdRequest(
                MajorFunction,
                (__int64)DeviceObject,
                Buffer,
                Length,
                StartingOffset,
                (__int64)IoStatusBlock);
  result = 0LL;
  if ( v8 )
  {
    v8->UserEvent = Event;
    IopQueueThreadIrp((__int64)v8, v7);
    return v8;
  }
  return result;
}
