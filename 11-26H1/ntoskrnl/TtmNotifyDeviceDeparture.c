/*
 * XREFs of TtmNotifyDeviceDeparture @ 0x1407EA970
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     TtmpFindDeviceByToken @ 0x1407EB6E0 (TtmpFindDeviceByToken.c)
 *     TtmiAcquireCurrentSession @ 0x1407EC1A0 (TtmiAcquireCurrentSession.c)
 *     TtmiScheduleSessionWorker @ 0x1407EC304 (TtmiScheduleSessionWorker.c)
 *     TtmiLogDeviceDepartureNotified @ 0x1407EE90C (TtmiLogDeviceDepartureNotified.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 */

__int64 __fastcall TtmNotifyDeviceDeparture(unsigned int a1, __int64 a2)
{
  char DeviceByToken; // bl
  int v5; // eax
  __int64 v6; // r8
  int v7; // eax
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  DeviceByToken = 0;
  v5 = TtmiAcquireCurrentSession(&v9);
  if ( v5 >= 0 )
  {
    DeviceByToken = TtmpFindDeviceByToken(v9, a1, a2, &v10);
    if ( DeviceByToken )
    {
      v7 = *(_DWORD *)(v10 + 600);
      if ( (v7 & 4) == 0 )
      {
        *(_DWORD *)(v10 + 600) = v7 | 4;
        TtmiScheduleSessionWorker(v9, 1LL);
      }
    }
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifyDeviceDeparture", 597LL, (unsigned int)v5, (unsigned int)v5);
  }
  LOBYTE(v6) = DeviceByToken;
  return TtmiLogDeviceDepartureNotified(a1, a2, v6);
}
