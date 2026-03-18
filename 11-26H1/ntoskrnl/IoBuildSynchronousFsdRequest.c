/*
 * XREFs of IoBuildSynchronousFsdRequest @ 0x140AD5C20
 * Callers:
 *     HalpQueryPccInterface @ 0x1407873C4 (HalpQueryPccInterface.c)
 *     RawQueryFileSystemInformation @ 0x14080012C (RawQueryFileSystemInformation.c)
 *     ExpQueryPrmInterface @ 0x14083F118 (ExpQueryPrmInterface.c)
 *     IopShutdownBaseFileSystems @ 0x140BF150C (IopShutdownBaseFileSystems.c)
 *     IoShutdownSystem @ 0x140C0C858 (IoShutdownSystem.c)
 *     IopCreateArcNamesCd @ 0x140CBC66C (IopCreateArcNamesCd.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x14032F090 (IopQueueThreadIrp.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1404B4190 (IopBuildAsynchronousFsdRequest.c)
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
