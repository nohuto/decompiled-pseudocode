/*
 * XREFs of StorPortPauseDevice @ 0x140028C40
 * Callers:
 *     StorPortPauseDeviceVrfy @ 0x1401C2750 (StorPortPauseDeviceVrfy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     RaidPauseUnitQueue @ 0x1400292F0 (RaidPauseUnitQueue.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     WPP_SF_DDD @ 0x14006F394 (WPP_SF_DDD.c)
 *     McTemplateK0pqquuu_EtwWriteTransfer @ 0x140078C44 (McTemplateK0pqquuu_EtwWriteTransfer.c)
 */

char __fastcall StorPortPauseDevice(__int64 a1, unsigned __int8 a2, int *a3, unsigned __int8 a4, unsigned int a5)
{
  __int64 v5; // rax
  unsigned int v6; // r12d
  int v7; // edi
  int *v9; // rsi
  int v10; // r15d
  int *v11; // r10
  __int64 v12; // rdx
  int v13; // ecx
  int *v14; // r14
  int *v15; // rcx
  unsigned int v16; // r9d
  unsigned int v17; // r11d
  int v18; // ecx
  __int64 Unit; // rax
  __int64 v20; // r14
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v23; // [rsp+90h] [rbp+8h]

  v5 = *(_QWORD *)(a1 - 16);
  v6 = a2;
  v7 = a1;
  v9 = 0LL;
  v10 = (unsigned __int8)a3;
  v11 = 0LL;
  HIBYTE(v23) = 0;
  LODWORD(v12) = 1314275652;
  if ( v5 )
  {
    a3 = *(int **)v5;
    if ( *(_QWORD *)v5 )
    {
      v13 = *a3;
      if ( (*(_DWORD *)(v5 + 248) & 1) != 0 )
      {
        if ( v13 == 1314275652 )
          v11 = *(int **)v5;
      }
      else if ( v13 == 1094997074 )
      {
        v9 = *(int **)v5;
      }
    }
  }
  if ( (qword_140172448 & 0x200) != 0 )
  {
    v14 = v9;
    if ( !v9 )
      v14 = v11;
    v15 = v9;
    if ( !v9 )
      v15 = v11;
    v16 = a4 | ((v10 | (v6 << 8)) << 8);
    if ( v15 )
    {
      if ( *v15 != 1314275652 )
      {
        v17 = v15[1249];
        if ( v17 )
        {
          a3 = (int *)*((_QWORD *)v15 + 625);
          if ( a3 )
          {
            v12 = 6LL * (_InterlockedIncrement(v15 + 1248) % v17);
            a3[2 * v12] = 16;
            *(_QWORD *)&a3[2 * v12 + 10] = MEMORY[0xFFFFF78000000014];
            *(_QWORD *)&a3[2 * v12 + 2] = retaddr;
            *(_QWORD *)&a3[2 * v12 + 8] = v16;
            *(_QWORD *)&a3[2 * v12 + 4] = v14;
            *(_QWORD *)&a3[2 * v12 + 6] = a5;
          }
        }
      }
    }
  }
  if ( v9 )
  {
    v18 = v9[14];
  }
  else if ( v11 )
  {
    v18 = v11[14];
  }
  else
  {
    v18 = 255;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
    McTemplateK0pqquuu_EtwWriteTransfer(v18, v12, (_BYTE)a3, v7, a5, v18, v6, v10, a4);
  if ( v9 )
  {
    LOBYTE(v23) = v6;
    BYTE1(v23) = v10;
    BYTE2(v23) = a4;
    Unit = RaidAdapterFindUnit(v9, v23);
    v20 = Unit;
    if ( Unit )
    {
      ++*(_DWORD *)(Unit + 2272);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      {
        WPP_SF_DDD(WPP_GLOBAL_Control->AttachedDevice, 17LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids, v6, v10);
      }
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 1440), 134684676, 134684677) == 134684677
        && v20 != -1424 )
      {
        *(_DWORD *)(v20 + 1456) = 5;
        *(_DWORD *)(v20 + 1460) = v23;
        *(_DWORD *)(v20 + 1464) = a5;
        RaidPauseUnitQueue(v20);
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v9 + 73, (PSLIST_ENTRY)(v20 + 1424));
        KeInsertQueueDpc((PRKDPC)(v9 + 270), v9 + 268, 0LL);
        return 1;
      }
      _InterlockedIncrement(&RaidUnloggedErrors);
      if ( (qword_140172448 & 0x800) != 0 )
        DbgLogRequest((_DWORD)v9, 22, (_DWORD)retaddr, 594, 0LL, 0LL, 0LL);
    }
    else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_DDD(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids, v6, v10);
    }
  }
  return 0;
}
