/*
 * XREFs of ExpPoolMgrRebalanceWorker @ 0x140AC5280
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     ExpPoolLookasideRebalance @ 0x140428B54 (ExpPoolLookasideRebalance.c)
 *     ExpPoolMgrGetFirstPool @ 0x1404DF874 (ExpPoolMgrGetFirstPool.c)
 *     ExpPoolMgrGetNextPool @ 0x1404E0AB4 (ExpPoolMgrGetNextPool.c)
 *     ExpPoolMgrResolveMaintenanceHint @ 0x140AC54C0 (ExpPoolMgrResolveMaintenanceHint.c)
 *     ExpPoolMgrSetMaintenanceHint @ 0x140AC5520 (ExpPoolMgrSetMaintenanceHint.c)
 */

ULONG __fastcall ExpPoolMgrRebalanceWorker(volatile signed __int32 *a1)
{
  unsigned int v1; // esi
  __int64 v3; // rax
  struct _EX_RUNDOWN_REF *v4; // rbx
  __int64 FirstPool; // rax

  v1 = 0;
  v3 = ExpPoolMgrResolveMaintenanceHint(a1, 2LL);
  v4 = (struct _EX_RUNDOWN_REF *)v3;
  if ( v3 )
  {
    DbgPrintEx(0x6Eu, 2u, "Resuming lookaside rebalance with pool %wZ\n", v3 + 48);
    goto LABEL_8;
  }
  FirstPool = ExpPoolMgrGetFirstPool((__int64)a1);
  while ( 1 )
  {
    v4 = (struct _EX_RUNDOWN_REF *)FirstPool;
    if ( !FirstPool )
      break;
LABEL_8:
    if ( v1 >= 5 )
      break;
    ExpPoolLookasideRebalance((__int64)v4);
    FirstPool = ExpPoolMgrGetNextPool((__int64)a1, (__int64)v4);
    ++v1;
  }
  ExpPoolMgrSetMaintenanceHint(a1, 2LL, v4);
  if ( v4 )
    ExReleaseRundownProtection_0(v4 + 3);
  _InterlockedAnd(a1, 0xFFFFFFFD);
  return DbgPrintEx(0x6Eu, 2u, "Rebalanced %u pool(s)\n", v1);
}
