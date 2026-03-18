/*
 * XREFs of ?Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1401CF468
 * Callers:
 *     ?Compare@MonitorData@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1401CF26C (-Compare@MonitorData@CMonitorTopology@@SA_NAEBU12@0@Z.c)
 *     ?MonitorDataFromId@CMonitorTopology@@QEBAPEBUMonitorData@1@AEBUMonitorId@1@@Z @ 0x1401CF2E4 (-MonitorDataFromId@CMonitorTopology@@QEBAPEBUMonitorData@1@AEBUMonitorId@1@@Z.c)
 *     ?Compare@CMonitorTopology@@QEBA?AW4CompareResult@1@PEBV1@W4CompareType@1@@Z @ 0x1401CF350 (-Compare@CMonitorTopology@@QEBA-AW4CompareResult@1@PEBV1@W4CompareType@1@@Z.c)
 * Callees:
 *     AreHashesEqual @ 0x1401CF504 (AreHashesEqual.c)
 */

char __fastcall CMonitorTopology::MonitorId::Compare(
        const struct CMonitorTopology::MonitorId *a1,
        const struct CMonitorTopology::MonitorId *a2)
{
  int v4; // edx
  int v5; // eax
  __int64 i; // rdi
  __int64 v7; // rbx

  v4 = *((_DWORD *)a1 + 2);
  if ( !v4 )
    return 0;
  v5 = *((_DWORD *)a2 + 2);
  if ( !v5 || v4 != v5 )
    return 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 2); i = (unsigned int)(i + 1) )
  {
    v7 = 0LL;
    if ( v5 )
    {
      do
      {
        if ( (unsigned __int8)AreHashesEqual(*(_QWORD *)a1 + 20 * i, *(_QWORD *)a2 + 20 * v7) )
          break;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *((_DWORD *)a2 + 2) );
    }
    v5 = *((_DWORD *)a2 + 2);
    if ( (_DWORD)v7 == v5 )
      return 0;
  }
  return 1;
}
