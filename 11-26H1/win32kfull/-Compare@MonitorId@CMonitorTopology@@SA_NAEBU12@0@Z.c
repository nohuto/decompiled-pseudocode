/*
 * XREFs of ?Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1401603D8
 * Callers:
 *     ?Compare@CMonitorTopology@@QEBA?AW4CompareResult@1@PEBV1@W4CompareType@1@@Z @ 0x1401602C0 (-Compare@CMonitorTopology@@QEBA-AW4CompareResult@1@PEBV1@W4CompareType@1@@Z.c)
 *     ?MonitorDataFromId@CMonitorTopology@@QEBAPEBUMonitorData@1@AEBUMonitorId@1@@Z @ 0x140160F2C (-MonitorDataFromId@CMonitorTopology@@QEBAPEBUMonitorData@1@AEBUMonitorId@1@@Z.c)
 *     ?Compare@MonitorData@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1401621B8 (-Compare@MonitorData@CMonitorTopology@@SA_NAEBU12@0@Z.c)
 * Callees:
 *     AreHashesEqual @ 0x140160474 (AreHashesEqual.c)
 */

char __fastcall CMonitorTopology::MonitorId::Compare(
        const struct CMonitorTopology::MonitorId *a1,
        const struct CMonitorTopology::MonitorId *a2)
{
  int v4; // edx
  int v6; // eax
  __int64 i; // rdi
  __int64 v8; // rbx

  v4 = *((_DWORD *)a1 + 2);
  if ( !v4 )
    return 0;
  v6 = *((_DWORD *)a2 + 2);
  if ( !v6 || v4 != v6 )
    return 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 2); i = (unsigned int)(i + 1) )
  {
    v8 = 0LL;
    if ( v6 )
    {
      do
      {
        if ( (unsigned __int8)AreHashesEqual(*(_QWORD *)a1 + 20 * i, *(_QWORD *)a2 + 20 * v8) )
          break;
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < *((_DWORD *)a2 + 2) );
    }
    v6 = *((_DWORD *)a2 + 2);
    if ( (_DWORD)v8 == v6 )
      return 0;
  }
  return 1;
}
