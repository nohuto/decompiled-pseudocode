/*
 * XREFs of CmSetRegistryQuotaInformation @ 0x1408575A8
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmSetRegistryQuotaInformation(unsigned int *a1)
{
  unsigned __int64 v1; // rcx

  v1 = *a1;
  CmpQuotaExplicitlySet = 1;
  if ( v1 < 0x1000000 )
    v1 = 0x1000000LL;
  CmpGlobalQuota = v1;
  *(_QWORD *)&ExpPlatformBinaryLock.Timer.Header.Lock = 95 * (v1 / 0x64);
  ExpPlatformBinaryLock.Timer.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v1;
  return 0LL;
}
