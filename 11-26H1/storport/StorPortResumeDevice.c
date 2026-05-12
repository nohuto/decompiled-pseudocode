/*
 * XREFs of StorPortResumeDevice @ 0x140028690
 * Callers:
 *     StorPortResumeDeviceVrfy @ 0x1401C27B0 (StorPortResumeDeviceVrfy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     RaidQueueDeferredItem @ 0x140029A6C (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     WPP_SF_DDD @ 0x14006F394 (WPP_SF_DDD.c)
 *     McTemplateK0pquuu_EtwWriteTransfer @ 0x140078DEC (McTemplateK0pquuu_EtwWriteTransfer.c)
 */

char __fastcall StorPortResumeDevice(__int64 a1, unsigned __int8 a2, int *a3, unsigned __int8 a4)
{
  __int64 v4; // rax
  int *v5; // rsi
  int *v6; // rdi
  __int64 v7; // rbp
  int v8; // r14d
  int v9; // r13d
  unsigned int v10; // r15d
  int v11; // ecx
  int v12; // ecx
  __int64 Unit; // rax
  int v15; // r9d
  int v16; // ecx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v18; // [rsp+60h] [rbp+8h]

  v4 = *(_QWORD *)(a1 - 16);
  v5 = 0LL;
  v6 = 0LL;
  v7 = a4;
  v8 = (unsigned __int8)a3;
  v9 = a1;
  v10 = a2;
  HIBYTE(v18) = 0;
  if ( v4 )
  {
    a3 = *(int **)v4;
    if ( *(_QWORD *)v4 )
    {
      v11 = *a3;
      if ( (*(_DWORD *)(v4 + 248) & 1) != 0 )
      {
        if ( v11 == 1314275652 )
          v6 = *(int **)v4;
      }
      else if ( v11 == 1094997074 )
      {
        v5 = *(int **)v4;
      }
    }
  }
  if ( (qword_140172448 & 0x200) != 0 )
  {
    v15 = (int)v5;
    v16 = (int)v5;
    if ( !v5 )
    {
      v15 = (int)v6;
      v16 = (int)v6;
    }
    DbgLogRequest(v16, 17, (_DWORD)retaddr, v15, 0LL, v7 | ((v8 | (a2 << 8)) << 8), 0LL);
  }
  if ( v5 )
  {
    v12 = v5[14];
  }
  else if ( v6 )
  {
    v12 = v6[14];
  }
  else
  {
    v12 = 255;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
    McTemplateK0pquuu_EtwWriteTransfer(v12, a2, (_BYTE)a3, v9, v12, v10, v8, v7);
  if ( !v5 )
    return 0;
  LOBYTE(v18) = v10;
  BYTE1(v18) = v8;
  BYTE2(v18) = v7;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_DDD(WPP_GLOBAL_Control->AttachedDevice, 18LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids, v10, v8);
  }
  Unit = RaidAdapterFindUnit(v5, v18);
  if ( !Unit )
    return 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(Unit + 1520), 134684676, 134684677) != 134684677
    || Unit == -1504 )
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_140172448 & 0x800) != 0 )
      DbgLogRequest((_DWORD)v5, 22, (_DWORD)retaddr, 711, 0LL, 0LL, 0LL);
    return 0;
  }
  *(_DWORD *)(Unit + 1536) = 6;
  *(_DWORD *)(Unit + 1540) = v18;
  RaidQueueDeferredItem(v5 + 268);
  return 1;
}
