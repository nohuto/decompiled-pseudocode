/*
 * XREFs of RIMGetCurrentPowerInputMode @ 0x14012E11C
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x14012E098 (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x140040AD0 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ.c)
 *     ApiSetGetPowerTransitionsState @ 0x14012E1E8 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 RIMGetCurrentPowerInputMode()
{
  PERESOURCE *v1; // [rsp+20h] [rbp-29h] BYREF
  char v2; // [rsp+48h] [rbp-1h]
  _DWORD v3[16]; // [rsp+50h] [rbp+7h] BYREF

  DomainShared<DLT_POWERTRANSITIONSSTATE>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)&v1);
  memset(v3, 0, sizeof(v3));
  ApiSetGetPowerTransitionsState(v3);
  if ( v3[7] )
  {
    if ( v2 && v1 )
      ExReleaseResourceAndLeaveCriticalRegion(*v1);
    return 1LL;
  }
  else if ( v3[8] )
  {
    if ( v2 )
    {
      if ( v1 )
        ExReleaseResourceAndLeaveCriticalRegion(*v1);
    }
    return 2LL;
  }
  else
  {
    if ( v2 && v1 )
      ExReleaseResourceAndLeaveCriticalRegion(*v1);
    return 0LL;
  }
}
