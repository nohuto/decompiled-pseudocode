/*
 * XREFs of StorPortCompleteRequest @ 0x14007B250
 * Callers:
 *     StorPortCompleteRequestVrfy @ 0x1401C2180 (StorPortCompleteRequestVrfy.c)
 * Callees:
 *     RaidResumeAdapterQueue @ 0x140010650 (RaidResumeAdapterQueue.c)
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     RaidPauseUnitQueue @ 0x1400292F0 (RaidPauseUnitQueue.c)
 *     RaidResumeUnitQueue @ 0x140029480 (RaidResumeUnitQueue.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     RaidPauseAdapterQueue @ 0x14002EEF0 (RaidPauseAdapterQueue.c)
 *     RaMiniportGetRaidAdapter @ 0x140042128 (RaMiniportGetRaidAdapter.c)
 *     WPP_SF_DDD @ 0x14006F394 (WPP_SF_DDD.c)
 */

char __fastcall StorPortCompleteRequest(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  _DWORD *v5; // rcx
  __int64 v6; // r15
  __int64 v7; // rsi
  int v8; // ebp
  int v9; // r14d
  __int64 RaidAdapter; // rax
  __int64 v11; // rdi
  __int64 *Unit; // rax
  __int64 v13; // r9
  __int64 v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+28h] [rbp-30h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  int v18; // [rsp+60h] [rbp+8h]

  v5 = *(_DWORD **)(a1 - 16);
  v6 = 0LL;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  LODWORD(RaidAdapter) = v5[62];
  HIBYTE(v18) = 0;
  if ( (RaidAdapter & 1) != 0 )
    return RaidAdapter;
  RaidAdapter = RaMiniportGetRaidAdapter(v5);
  v11 = RaidAdapter;
  if ( !RaidAdapter )
    return RaidAdapter;
  if ( (qword_140172448 & 0x40) != 0 )
    DbgLogRequest(
      RaidAdapter,
      12,
      RaidAdapter,
      v7 | (int)(*(_DWORD *)(RaidAdapter + 56) << 24) | (unsigned __int64)((v8 | (unsigned int)(v9 << 8)) << 8),
      retaddr,
      0LL,
      0LL);
  if ( (_BYTE)v9 == 0xFF || (_BYTE)v8 == 0xFF || (_BYTE)v7 == 0xFF )
  {
    RaidPauseAdapterQueue(v11);
  }
  else
  {
    LOBYTE(v18) = v9;
    BYTE1(v18) = v8;
    BYTE2(v18) = v7;
    Unit = RaidAdapterFindUnit(v11, v18);
    v6 = (__int64)Unit;
    if ( !Unit )
    {
      RaidAdapter = (__int64)&WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        LODWORD(RaidAdapter) = HIDWORD(WPP_GLOBAL_Control->Timer);
        if ( (RaidAdapter & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        {
          LODWORD(v16) = v7;
          LODWORD(v15) = v8;
          LOBYTE(RaidAdapter) = WPP_SF_DDD(
                                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                                  0x1Au,
                                  (__int64)&WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids,
                                  v9,
                                  v15,
                                  v16);
        }
      }
      return RaidAdapter;
    }
    RaidPauseUnitQueue((__int64)Unit);
  }
  LOBYTE(RaidAdapter) = KeInsertQueueDpc(
                          (PRKDPC)(v11 + 1912),
                          (PVOID)(v7 | ((v8 | (unsigned int)(v9 << 8)) << 8)),
                          (PVOID)a5);
  if ( !(_BYTE)RaidAdapter )
  {
    if ( (_BYTE)v9 == 0xFF || (_BYTE)v8 == 0xFF || (_BYTE)v7 == 0xFF )
      LOBYTE(RaidAdapter) = RaidResumeAdapterQueue(v11, 0LL, 0LL, v13);
    else
      LOBYTE(RaidAdapter) = RaidResumeUnitQueue(v6);
  }
  return RaidAdapter;
}
