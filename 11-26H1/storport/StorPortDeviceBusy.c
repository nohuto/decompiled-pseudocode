/*
 * XREFs of StorPortDeviceBusy @ 0x140027E70
 * Callers:
 *     StorPortDeviceBusyVrfy @ 0x1401C21A0 (StorPortDeviceBusyVrfy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     RaidQueueDeferredItem @ 0x140029A6C (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     WPP_SF_dddd @ 0x14007DB88 (WPP_SF_dddd.c)
 */

char __fastcall StorPortDeviceBusy(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, unsigned int a5)
{
  unsigned int **v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // r10d
  __int64 v8; // r15
  int v9; // edi
  unsigned int v10; // r14d
  unsigned int v11; // r9d
  unsigned int v12; // ecx
  __int64 Unit; // rax
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v16; // [rsp+70h] [rbp+8h]

  v5 = *(unsigned int ***)(a1 - 16);
  v6 = 0LL;
  v7 = 0;
  v8 = a4;
  v9 = (unsigned __int8)a3;
  v10 = (unsigned __int8)a2;
  HIBYTE(v16) = 0;
  if ( v5 && *v5 )
  {
    a2 = **v5;
    if ( ((_DWORD)v5[31] & 1) != 0 )
    {
      if ( (_DWORD)a2 == 1314275652 )
        v7 = (unsigned int)*v5;
    }
    else if ( (_DWORD)a2 == 1094997074 )
    {
      v6 = (__int64)*v5;
    }
  }
  if ( (qword_140172448 & 0x200) != 0 )
  {
    v11 = v6;
    v12 = v6;
    if ( !v6 )
    {
      v11 = v7;
      v12 = v7;
    }
    DbgLogRequest(v12, 20, (_DWORD)retaddr, v11, a5, v8 | (((unsigned __int8)a3 | (v10 << 8)) << 8), 0LL);
  }
  if ( v6 )
  {
    LOBYTE(v16) = v10;
    BYTE1(v16) = v9;
    BYTE2(v16) = v8;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_dddd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, v10, v9, v8, a5);
    }
    Unit = RaidAdapterFindUnit(v6, v16);
    if ( Unit )
    {
      ++*(_DWORD *)(Unit + 2276);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1600), 134684676, 134684677) == 134684677
        && Unit != -1584 )
      {
        *(_DWORD *)(Unit + 1616) = 9;
        *(_DWORD *)(Unit + 1620) = v16;
        *(_DWORD *)(Unit + 1624) = a5;
        RaidQueueDeferredItem((PVOID)(v6 + 1072));
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_140172448 & 0x800) != 0 )
        DbgLogRequest(v6, 22, (_DWORD)retaddr, 916, 0LL, 0LL, 0LL);
    }
  }
  return 0;
}
