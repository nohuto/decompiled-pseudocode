/*
 * XREFs of ?Compare@CMonitorTopology@@QEBA?AW4CompareResult@1@PEBV1@W4CompareType@1@@Z @ 0x1401CF350
 * Callers:
 *     ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@W4CompareType@1@@Z @ 0x14002233C (-CompareToCurrent@CMonitorTopology@@QEBA-AW4CompareResult@1@W4CompareType@1@@Z.c)
 *     ?PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z @ 0x1402C4D80 (-PostMessagesForRecalcDisabledWindows@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@@Z.c)
 *     ?PostRecalcMessages@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@1@Z @ 0x1402C5040 (-PostRecalcMessages@CRecalcProp@@AEAAXPEAUtagWND@@PEBVCMonitorTopology@@1@Z.c)
 * Callees:
 *     ?Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1401CF468 (-Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z.c)
 */

__int64 __fastcall CMonitorTopology::Compare(__int64 a1, __int64 a2, int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbp
  bool v9; // al
  int v10; // ecx
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rcx

  if ( a1 == a2 )
    return 0LL;
  v6 = *(_DWORD *)(a1 + 4);
  if ( v6 != *(_DWORD *)(a2 + 4) )
    return 1LL;
  v7 = 0;
  v8 = 0LL;
  if ( v6 )
  {
    do
    {
      if ( !a3 )
      {
        v12 = v7 | 8;
        if ( *(_WORD *)(a1 + 72 * v8 + 56) == *(_WORD *)(a2 + 72 * v8 + 56) )
          v12 = v7;
        v7 = v12;
        v13 = *(_QWORD *)(a1 + 72 * v8 + 24) - *(_QWORD *)(a2 + 72 * v8 + 24);
        if ( !v13 )
          v13 = *(_QWORD *)(a1 + 72 * v8 + 32) - *(_QWORD *)(a2 + 72 * v8 + 32);
        if ( v13 )
        {
          if ( *(_DWORD *)(a1 + 72 * v8 + 24) == *(_DWORD *)(a2 + 72 * v8 + 24)
            && *(_DWORD *)(a1 + 72 * v8 + 28) == *(_DWORD *)(a2 + 72 * v8 + 28) )
          {
            v7 = v12 | 4;
          }
          else
          {
            v7 = v12 | 2;
          }
        }
        v14 = *(_QWORD *)(a1 + 72 * v8 + 40) - *(_QWORD *)(a2 + 72 * v8 + 40);
        if ( !v14 )
          v14 = *(_QWORD *)(a1 + 72 * v8 + 48) - *(_QWORD *)(a2 + 72 * v8 + 48);
        if ( v14 )
          v7 |= 0x10u;
      }
      v9 = CMonitorTopology::MonitorId::Compare(
             (const struct CMonitorTopology::MonitorId *)(a1 + 8 * (9 * v8 + 8)),
             (const struct CMonitorTopology::MonitorId *)(a2 + 64 + 72 * v8));
      v10 = v7 | 0x20;
      if ( v9 )
        v10 = v7;
      v8 = (unsigned int)(v8 + 1);
      v7 = v10;
    }
    while ( (unsigned int)v8 < *(_DWORD *)(a1 + 4) );
  }
  return v7;
}
