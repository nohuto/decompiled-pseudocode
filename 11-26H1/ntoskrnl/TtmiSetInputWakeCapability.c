/*
 * XREFs of TtmiSetInputWakeCapability @ 0x1407EAFF0
 * Callers:
 *     TtmpDispatchSetInputWakeCapability @ 0x1407EDFD0 (TtmpDispatchSetInputWakeCapability.c)
 * Callees:
 *     TtmpFindDeviceByDeviceId @ 0x1407EB6AC (TtmpFindDeviceByDeviceId.c)
 *     TtmiScheduleSessionWorker @ 0x1407EC304 (TtmiScheduleSessionWorker.c)
 *     TtmiLogDeviceSetInputWakeCapability @ 0x1407EEEFC (TtmiLogDeviceSetInputWakeCapability.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 */

__int64 __fastcall TtmiSetInputWakeCapability(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v13[0] = 0LL;
  if ( (unsigned __int8)TtmpFindDeviceByDeviceId(a1, a3, v13) )
  {
    v10 = v13[0];
    v11 = *(unsigned int *)(v8 + 28);
    if ( (_DWORD)v11 == *(_DWORD *)(v13[0] + 596LL) )
    {
      TtmiLogDeviceSetInputWakeCapability(v11, v7, a4);
      *(_DWORD *)(v10 + 600) = *(_DWORD *)(v10 + 600) ^ ((unsigned __int8)*(_DWORD *)(v10 + 600) ^ (unsigned __int8)((_BYTE)a4 << 7)) & 0x80 | 0x40;
      TtmiScheduleSessionWorker(a1, 1LL);
      return v4;
    }
    v4 = -1073741811;
    v9 = 1297LL;
  }
  else
  {
    v4 = -1073741275;
    v9 = 1288LL;
  }
  TtmiLogError("TtmiSetInputWakeCapability", v9, 0xFFFFFFFFLL, v4);
  return v4;
}
