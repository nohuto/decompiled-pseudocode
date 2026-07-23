/*
 * XREFs of TtmNotifySessionPowerStateChange @ 0x140B68814
 * Callers:
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     TtmiScheduleSessionWorker @ 0x1407EC304 (TtmiScheduleSessionWorker.c)
 *     TtmiLogSessionPowerStateChange @ 0x1407F0490 (TtmiLogSessionPowerStateChange.c)
 *     TtmpAcquireSessionById @ 0x1409F6634 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 */

void __fastcall TtmNotifySessionPowerStateChange(int a1, char a2)
{
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  _DWORD *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = TtmpAcquireSessionById((void **)&v7, a1);
  if ( v3 < 0 )
  {
    TtmiLogError("TtmNotifySessionPowerStateChange", 3172, v3, -1);
    return;
  }
  TtmiLogSessionPowerStateChange(a2);
  v4 = (__int64)v7;
  v5 = v7[1];
  if ( a2 )
  {
    if ( (v5 & 0x80u) != 0 )
    {
      v6 = v5 & 0xFFFFFB7F;
      goto LABEL_8;
    }
  }
  else if ( (v5 & 0x40) != 0 )
  {
    v6 = v5 & 0xFFFFFBBF | 0x400;
LABEL_8:
    v7[1] = v6;
    TtmiScheduleSessionWorker(v4, 4);
  }
  ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
  KeLeaveCriticalRegion();
}
