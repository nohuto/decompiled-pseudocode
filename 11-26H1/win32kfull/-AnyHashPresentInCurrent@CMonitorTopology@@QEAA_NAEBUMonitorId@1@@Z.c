/*
 * XREFs of ?AnyHashPresentInCurrent@CMonitorTopology@@QEAA_NAEBUMonitorId@1@@Z @ 0x14015BB74
 * Callers:
 *     ?ShouldMinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@@PEBVCRecalcContext@@@Z @ 0x14015BC24 (-ShouldMinimizeOnMonitorRemove@CRecalcState@@AEAA_NPEAUtagWND@@PEBUMonitorData@CMonitorTopology@.c)
 * Callees:
 *     AreHashesEqual @ 0x140160474 (AreHashesEqual.c)
 */

char __fastcall CMonitorTopology::AnyHashPresentInCurrent(
        CMonitorTopology *this,
        const struct CMonitorTopology::MonitorId *a2)
{
  __int64 UserSessionState; // r14
  __int64 i; // rdi
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 j; // rsi

  UserSessionState = W32GetUserSessionState(this, a2);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)a2 + 2) )
      return 0;
    v5 = 0LL;
LABEL_4:
    v6 = *(_QWORD *)(UserSessionState + 71208);
    if ( (unsigned int)v5 < *(_DWORD *)(v6 + 4) )
      break;
  }
  for ( j = 0LL; ; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= *(_DWORD *)(v6 + 72 * v5 + 72) )
    {
      v5 = (unsigned int)(v5 + 1);
      goto LABEL_4;
    }
    if ( (unsigned __int8)AreHashesEqual(*(_QWORD *)(v6 + 72 * v5 + 64) + 20 * j, *(_QWORD *)a2 + 20 * i) )
      break;
  }
  return 1;
}
