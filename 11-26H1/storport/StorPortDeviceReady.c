/*
 * XREFs of StorPortDeviceReady @ 0x14007B410
 * Callers:
 *     StorPortDeviceReadyVrfy @ 0x1401C21C0 (StorPortDeviceReadyVrfy.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     RaidQueueDeferredItem @ 0x140029A6C (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     WPP_SF_DDD @ 0x14006F394 (WPP_SF_DDD.c)
 */

char __fastcall StorPortDeviceReady(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // edi
  int v5; // ebp
  __int64 v6; // r14
  int *v7; // rsi
  int *v8; // rcx
  int *v9; // r9
  __int64 *Unit; // rax
  __int64 v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+28h] [rbp-50h]
  int v14; // [rsp+40h] [rbp-38h]
  int *v15; // [rsp+48h] [rbp-30h] BYREF
  int *v16; // [rsp+50h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v4 = a3;
  v5 = a2;
  v6 = a4;
  v15 = 0LL;
  v16 = 0LL;
  HIBYTE(v14) = 0;
  RaidpPortGetAdapter(a1, &v15, &v16);
  v7 = v15;
  if ( (qword_140172448 & 0x200) != 0 )
  {
    v8 = v16;
    v9 = v16;
    if ( v15 )
    {
      v9 = v15;
      v8 = v15;
    }
    DbgLogRequest((__int64)v8, 21, retaddr, (__int64)v9, 0LL, v6 | ((v4 | (unsigned int)(v5 << 8)) << 8), 0LL);
  }
  if ( v7 )
  {
    LOBYTE(v14) = v5;
    BYTE1(v14) = v4;
    BYTE2(v14) = v6;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      LODWORD(v13) = v6;
      LODWORD(v12) = v4;
      WPP_SF_DDD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x14u,
        (__int64)&WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids,
        v5,
        v12,
        v13);
    }
    Unit = RaidAdapterFindUnit((__int64)v7, v14);
    if ( Unit )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)Unit + 420, 134684676, 134684677) == 134684677
        && Unit != (__int64 *)-1664LL )
      {
        *((_DWORD *)Unit + 424) = 10;
        *((_DWORD *)Unit + 425) = v14;
        RaidQueueDeferredItem((char *)v7 + 1072, (struct _SLIST_ENTRY *)Unit + 104);
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_140172448 & 0x800) != 0 )
        DbgLogRequest((__int64)v7, 22, retaddr, 1008LL, 0LL, 0LL, 0LL);
    }
  }
  return 0;
}
