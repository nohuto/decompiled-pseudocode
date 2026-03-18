/*
 * XREFs of ?MonitorDataFromId@CMonitorTopology@@QEBAPEBUMonitorData@1@AEBUMonitorId@1@@Z @ 0x140160F2C
 * Callers:
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x1401608B0 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     ?Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1401603D8 (-Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z.c)
 */

const struct CMonitorTopology::MonitorData *__fastcall CMonitorTopology::MonitorDataFromId(
        CMonitorTopology *this,
        const struct CMonitorTopology::MonitorId *a2)
{
  __int64 i; // rbx

  if ( *((_DWORD *)a2 + 2) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1); i = (unsigned int)(i + 1) )
    {
      if ( CMonitorTopology::MonitorId::Compare((CMonitorTopology *)((char *)this + 72 * i + 64), a2) )
        return (CMonitorTopology *)((char *)this + 72 * i + 16);
    }
  }
  return 0LL;
}
