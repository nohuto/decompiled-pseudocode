/*
 * XREFs of CmQueryRegistryQuotaInformation @ 0x140A8811C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     CmpUpdateGlobalQuotaAllowed @ 0x140A88260 (CmpUpdateGlobalQuotaAllowed.c)
 */

__int64 __fastcall CmQueryRegistryQuotaInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // r10
  char v5; // r9
  _DWORD Src[2]; // [rsp+28h] [rbp-20h] BYREF
  _ULARGE_INTEGER DueTime; // [rsp+30h] [rbp-18h]

  LOBYTE(a4) = a2;
  CmpUpdateGlobalQuotaAllowed(a1, a2, a3, a4);
  Src[0] = CmpGlobalQuota;
  Src[1] = PspSiloMonitorLock.Timer.Header.WaitListHead.Blink;
  DueTime = PspSiloMonitorLock.Timer.DueTime;
  if ( v5 )
    RtlCopyToUser(v4, Src, 0x10uLL);
  else
    RtlCopyVolatileMemory(v4, Src, 0x10uLL);
  return 0LL;
}
