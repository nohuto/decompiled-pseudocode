/*
 * XREFs of CmpUpdateGlobalQuotaAllowed @ 0x140A88260
 * Callers:
 *     CmQueryRegistryQuotaInformation @ 0x140A8811C (CmQueryRegistryQuotaInformation.c)
 *     CmpClaimGlobalQuota @ 0x140A8820C (CmpClaimGlobalQuota.c)
 * Callees:
 *     <none>
 */

unsigned __int64 CmpUpdateGlobalQuotaAllowed()
{
  unsigned __int64 result; // rax
  unsigned __int64 v1; // rcx

  result = MmSizeOfPagedPoolInBytes;
  if ( !CmpQuotaExplicitlySet )
  {
    result = MmSizeOfPagedPoolInBytes;
    if ( MmSizeOfPagedPoolInBytes != PspSiloMonitorLock.Timer.DueTime.QuadPart )
    {
      v1 = 0xFFFFFFFFLL;
      if ( MmSizeOfPagedPoolInBytes / 3uLL <= 0xFFFFFFFF )
      {
        v1 = MmSizeOfPagedPoolInBytes / 3uLL;
        if ( MmSizeOfPagedPoolInBytes / 3uLL < 0x1000000 )
          v1 = 0x1000000LL;
      }
      CmpGlobalQuota = v1;
      *(_QWORD *)&ExpPlatformBinaryLock.Timer.Header.Lock = v1;
      PspSiloMonitorLock.Timer.DueTime.QuadPart = MmSizeOfPagedPoolInBytes;
      result = 95 * (v1 / 0x64);
      ExpPlatformBinaryLock.Timer.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)result;
    }
  }
  return result;
}
