/*
 * XREFs of TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x14075B878
 * Callers:
 *     TtmpPublishDisplayRequiredPowerRequestEvents @ 0x14075B1F4 (TtmpPublishDisplayRequiredPowerRequestEvents.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x14075B6E4 (TtmpUpdateDisplayRequiredPowerRequest.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     TtmiWriteEventToAllQueues @ 0x14075A98C (TtmiWriteEventToAllQueues.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407611E4 (TtmiWriteEventToSingleQueue.c)
 *     TtmiLogError @ 0x140A2DC20 (TtmiLogError.c)
 */

_UNKNOWN **__fastcall TtmpWriteDisplayRequiredPowerRequestUpdatedEvent(__int64 a1, __int64 a2, __int64 a3)
{
  bool v6; // zf
  int v7; // eax
  _UNKNOWN **result; // rax
  _DWORD v9[4]; // [rsp+20h] [rbp-228h] BYREF
  __int64 v10; // [rsp+30h] [rbp-218h]
  bool v11; // [rsp+38h] [rbp-210h]

  memset_0(v9, 0, 0x220uLL);
  v6 = *(_DWORD *)(a3 + 40) == 0;
  v9[2] = *(_DWORD *)(a3 + 16);
  v7 = *(_DWORD *)(a3 + 20);
  v11 = !v6;
  v9[3] = v7;
  v10 = *(_QWORD *)(a3 + 32);
  v9[0] = 6;
  if ( !a2 )
    return TtmiWriteEventToAllQueues(a1, (__int64)v9);
  result = (_UNKNOWN **)TtmiWriteEventToSingleQueue(a2, v9);
  if ( (int)result < 0 )
    return (_UNKNOWN **)TtmiLogError(
                          "TtmpWriteDisplayRequiredPowerRequestUpdatedEvent",
                          556LL,
                          (unsigned int)result,
                          0xFFFFFFFFLL);
  return result;
}
