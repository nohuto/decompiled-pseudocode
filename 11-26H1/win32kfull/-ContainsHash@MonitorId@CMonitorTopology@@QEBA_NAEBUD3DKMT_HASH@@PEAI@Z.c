/*
 * XREFs of ?ContainsHash@MonitorId@CMonitorTopology@@QEBA_NAEBUD3DKMT_HASH@@PEAI@Z @ 0x140260044
 * Callers:
 *     ?GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z @ 0x14022A6FC (-GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z.c)
 * Callees:
 *     AreHashesEqual @ 0x140160474 (AreHashesEqual.c)
 */

char __fastcall CMonitorTopology::MonitorId::ContainsHash(
        CMonitorTopology::MonitorId *this,
        const struct D3DKMT_HASH *a2,
        unsigned int *a3)
{
  __int64 i; // rbx

  if ( a3 )
    *a3 = 0;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 2) )
      return 0;
    if ( AreHashesEqual((const void *)(*(_QWORD *)this + 20 * i), a2) )
      break;
  }
  if ( a3 )
    *a3 = i;
  return 1;
}
