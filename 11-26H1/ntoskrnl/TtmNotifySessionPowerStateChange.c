/*
 * XREFs of TtmNotifySessionPowerStateChange @ 0x140B65774
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     TtmiScheduleSessionWorker @ 0x1407E67A4 (TtmiScheduleSessionWorker.c)
 *     TtmiLogSessionPowerStateChange @ 0x1407EA930 (TtmiLogSessionPowerStateChange.c)
 *     TtmpAcquireSessionById @ 0x140A3AA34 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
 */

void __fastcall TtmNotifySessionPowerStateChange(unsigned int a1, char a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // eax
  _DWORD *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  v4 = TtmpAcquireSessionById((void **)&v8, a1, a3);
  if ( v4 < 0 )
  {
    TtmiLogError("TtmNotifySessionPowerStateChange", 3172, v4, -1);
    return;
  }
  TtmiLogSessionPowerStateChange(a2);
  v5 = (__int64)v8;
  v6 = v8[1];
  if ( a2 )
  {
    if ( (v6 & 0x80u) != 0 )
    {
      v7 = v6 & 0xFFFFFB7F;
      goto LABEL_8;
    }
  }
  else if ( (v6 & 0x40) != 0 )
  {
    v7 = v6 & 0xFFFFFBBF | 0x400;
LABEL_8:
    v8[1] = v7;
    TtmiScheduleSessionWorker(v5, 4);
  }
  ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount);
  KeLeaveCriticalRegion();
}
