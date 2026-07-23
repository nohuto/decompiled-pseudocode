/*
 * XREFs of CmpUpdateGlobalQuotaAllowed @ 0x140A8F390
 * Callers:
 *     CmQueryRegistryQuotaInformation @ 0x140A8F24C (CmQueryRegistryQuotaInformation.c)
 *     CmpClaimGlobalQuota @ 0x140A8F33C (CmpClaimGlobalQuota.c)
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
    if ( (struct _LIST_ENTRY *)MmSizeOfPagedPoolInBytes != PspSiloMonitorLock.Timer.Header.WaitListHead.Blink )
    {
      v1 = 0xFFFFFFFFLL;
      if ( MmSizeOfPagedPoolInBytes / 3uLL <= 0xFFFFFFFF )
      {
        v1 = MmSizeOfPagedPoolInBytes / 3uLL;
        if ( MmSizeOfPagedPoolInBytes / 3uLL < 0x1000000 )
          v1 = 0x1000000LL;
      }
      CmpGlobalQuota = v1;
      ExpPlatformBinaryLock.Timer.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v1;
      PspSiloMonitorLock.Timer.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MmSizeOfPagedPoolInBytes;
      result = 95 * (v1 / 0x64);
      *(_QWORD *)&ExpPlatformBinaryLock.Timer.Header.Lock = result;
    }
  }
  return result;
}
