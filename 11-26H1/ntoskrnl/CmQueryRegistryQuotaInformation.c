/*
 * XREFs of CmQueryRegistryQuotaInformation @ 0x140A8F24C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     CmpUpdateGlobalQuotaAllowed @ 0x140A8F390 (CmpUpdateGlobalQuotaAllowed.c)
 */

__int64 __fastcall CmQueryRegistryQuotaInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // r10
  char v5; // r9
  _DWORD Src[2]; // [rsp+28h] [rbp-20h] BYREF
  struct _LIST_ENTRY *Blink; // [rsp+30h] [rbp-18h]

  LOBYTE(a4) = a2;
  CmpUpdateGlobalQuotaAllowed(a1, a2, a3, a4);
  Src[0] = CmpGlobalQuota;
  Src[1] = PspSiloMonitorLock.Timer.DueTime.LowPart;
  Blink = PspSiloMonitorLock.Timer.Header.WaitListHead.Blink;
  if ( v5 )
    RtlCopyToUser(v4, Src, 0x10uLL);
  else
    RtlCopyVolatileMemory(v4, Src, 0x10uLL);
  return 0LL;
}
