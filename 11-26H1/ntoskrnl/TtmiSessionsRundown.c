/*
 * XREFs of TtmiSessionsRundown @ 0x1407EC33C
 * Callers:
 *     TtmpTraceLoggingCallback @ 0x1407F1580 (TtmpTraceLoggingCallback.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     TtmiDevicesRundown @ 0x1407EAC68 (TtmiDevicesRundown.c)
 *     TtmiAcquireCurrentSession @ 0x1407EC1A0 (TtmiAcquireCurrentSession.c)
 *     TtmiLogSessionRundown @ 0x1407F0548 (TtmiLogSessionRundown.c)
 *     TtmiTerminalsRundown @ 0x1407F20E8 (TtmiTerminalsRundown.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 */

void __fastcall TtmiSessionsRundown(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  int *v4; // rbx
  _DWORD v5[12]; // [rsp+20h] [rbp-30h] BYREF
  int *v6; // [rsp+60h] [rbp+10h] BYREF

  v6 = 0LL;
  v3 = TtmiAcquireCurrentSession((__int64)&v6, a2, a3);
  v4 = v6;
  if ( v3 >= 0 )
  {
    v5[0] = *v6;
    v5[1] = v6[1];
    v5[2] = v6[2];
    v5[3] = v6[19];
    v5[4] = v6[29];
    v5[5] = v6[3];
    v5[6] = v6[4];
    v5[7] = v6[5];
    v5[8] = v6[66];
    v5[9] = v6[67];
    TtmiLogSessionRundown(v5);
    TtmiTerminalsRundown(v4);
    TtmiDevicesRundown(v4);
  }
  else
  {
    TtmiLogError("TtmiSessionsRundown", 4254LL, (unsigned int)v3, 0xFFFFFFFFLL);
  }
  if ( v4 )
  {
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
    KeLeaveCriticalRegion();
  }
}
