/*
 * XREFs of ?Compare@MonitorData@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1401621B8
 * Callers:
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x1401608B0 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     ?Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1401603D8 (-Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z.c)
 */

bool __fastcall CMonitorTopology::MonitorData::Compare(
        const struct CMonitorTopology::MonitorData *a1,
        const struct CMonitorTopology::MonitorData *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *((_QWORD *)a1 + 1) - *((_QWORD *)a2 + 1);
  if ( !v4 )
    v4 = *((_QWORD *)a1 + 2) - *((_QWORD *)a2 + 2);
  if ( v4 )
    return 0;
  v5 = *((_QWORD *)a1 + 3) - *((_QWORD *)a2 + 3);
  if ( !v5 )
    v5 = *((_QWORD *)a1 + 4) - *((_QWORD *)a2 + 4);
  return !v5
      && *((_WORD *)a1 + 20) == *((_WORD *)a2 + 20)
      && CMonitorTopology::MonitorId::Compare(
           (const struct CMonitorTopology::MonitorData *)((char *)a1 + 48),
           (const struct CMonitorTopology::MonitorData *)((char *)a2 + 48))
      && *((_DWORD *)a1 + 16) == *((_DWORD *)a2 + 16);
}
