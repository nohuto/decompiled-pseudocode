/*
 * XREFs of TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1407ED5FC
 * Callers:
 *     TtmpPublishDisplayRequiredPowerRequestEvents @ 0x1407ECF70 (TtmpPublishDisplayRequiredPowerRequestEvents.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1407ED464 (TtmpUpdateDisplayRequiredPowerRequest.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     TtmiWriteEventToAllQueues @ 0x1407EC734 (TtmiWriteEventToAllQueues.c)
 *     TtmiWriteEventToSingleQueue @ 0x1407F2C4C (TtmiWriteEventToSingleQueue.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
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
                          554LL,
                          (unsigned int)result,
                          0xFFFFFFFFLL);
  return result;
}
