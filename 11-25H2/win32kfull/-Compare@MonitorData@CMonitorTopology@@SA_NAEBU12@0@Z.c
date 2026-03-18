/*
 * XREFs of ?Compare@MonitorData@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1401CF26C
 * Callers:
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x140024CF0 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     ?Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z @ 0x1401CF468 (-Compare@MonitorId@CMonitorTopology@@SA_NAEBU12@0@Z.c)
 */

bool __fastcall CMonitorTopology::MonitorData::Compare(
        const struct CMonitorTopology::MonitorData *a1,
        const struct CMonitorTopology::MonitorData *a2)
{
  __int64 v4; // rcx
  __int64 v6; // rcx

  v4 = *((_QWORD *)a1 + 1) - *((_QWORD *)a2 + 1);
  if ( !v4 )
    v4 = *((_QWORD *)a1 + 2) - *((_QWORD *)a2 + 2);
  if ( v4 )
    return 0;
  v6 = *((_QWORD *)a1 + 3) - *((_QWORD *)a2 + 3);
  if ( !v6 )
    v6 = *((_QWORD *)a1 + 4) - *((_QWORD *)a2 + 4);
  return !v6
      && *((_WORD *)a1 + 20) == *((_WORD *)a2 + 20)
      && CMonitorTopology::MonitorId::Compare(
           (const struct CMonitorTopology::MonitorData *)((char *)a1 + 48),
           (const struct CMonitorTopology::MonitorData *)((char *)a2 + 48))
      && *((_DWORD *)a1 + 16) == *((_DWORD *)a2 + 16);
}
