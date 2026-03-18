/*
 * XREFs of TtmiSessionsRundown @ 0x14075A59C
 * Callers:
 *     TtmpTraceLoggingCallback @ 0x14075FB00 (TtmpTraceLoggingCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     TtmiDevicesRundown @ 0x140758EDC (TtmiDevicesRundown.c)
 *     TtmiAcquireCurrentSession @ 0x14075A3F0 (TtmiAcquireCurrentSession.c)
 *     TtmiLogSessionRundown @ 0x14075EA50 (TtmiLogSessionRundown.c)
 *     TtmiTerminalsRundown @ 0x140760660 (TtmiTerminalsRundown.c)
 *     TtmiLogError @ 0x140A2DC20 (TtmiLogError.c)
 */

void TtmiSessionsRundown()
{
  int v0; // eax
  int *v1; // rbx
  _DWORD v2[12]; // [rsp+20h] [rbp-30h] BYREF
  int *v3; // [rsp+60h] [rbp+10h] BYREF

  v3 = 0LL;
  v0 = TtmiAcquireCurrentSession((__int64)&v3);
  v1 = v3;
  if ( v0 >= 0 )
  {
    v2[0] = *v3;
    v2[1] = v3[1];
    v2[2] = v3[2];
    v2[3] = v3[19];
    v2[4] = v3[29];
    v2[5] = v3[3];
    v2[6] = v3[4];
    v2[7] = v3[5];
    v2[8] = v3[66];
    v2[9] = v3[67];
    TtmiLogSessionRundown(v2);
    TtmiTerminalsRundown(v1);
    TtmiDevicesRundown(v1);
  }
  else
  {
    TtmiLogError("TtmiSessionsRundown", 4256LL, (unsigned int)v0, 0xFFFFFFFFLL);
  }
  if ( v1 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
}
