/*
 * XREFs of KiSendHeteroRescheduleIntRequest @ 0x14021FDA0
 * Callers:
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiIdleSchedule @ 0x140312AA0 (KiIdleSchedule.c)
 *     KiUnparkCurrentProcessor @ 0x140420BA0 (KiUnparkCurrentProcessor.c)
 * Callees:
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14021FEA0 (KiSendHeteroRescheduleIntRequestHelper.c)
 */

char __fastcall KiSendHeteroRescheduleIntRequest(_QWORD *a1)
{
  __int64 v1; // r9
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1[24];
  v3 = *(_QWORD *)(v1 + 24);
  if ( (v3 & a1[4564]) != 0 )
  {
    v4 = a1[25];
    v3 = *(unsigned __int8 *)(v1 + 185);
    v11 = 0LL;
    v5 = *(_QWORD *)(*(_QWORD *)(v1 + 192) + 24 * v3 + 16) & *(_QWORD *)(*(_QWORD *)(v1 + 192) + 24 * v3 + 8);
    LOBYTE(v3) = (v4 & *(_QWORD *)(v1 + 8)) != 0;
    if ( (((v5 & v4) != 0) & (unsigned __int8)v3) != 0 )
    {
      v6 = ~*(_QWORD *)(v1 + 16);
      v7 = (*(_QWORD *)(v1 + 128) ^ v5) & (*(_QWORD *)(v1 + 80) | *(_QWORD *)(v1 + 96));
      v10 = 0LL;
      LOBYTE(v3) = KiSendHeteroRescheduleIntRequestHelper(v6 & v7, &v11, &v10, a1);
      if ( (_BYTE)v3 )
      {
        v8 = v10;
        LOBYTE(v3) = KiSendHeteroRescheduleIntRequestHelper(*(_QWORD *)(v10 + 200), 0LL, 0LL, a1);
        if ( !(_BYTE)v3 )
          LOBYTE(v3) = KiSendHeteroRescheduleIntRequestHelper(*(_QWORD *)(v8 + 200) ^ v11, 0LL, 0LL, a1);
      }
    }
  }
  return v3;
}
