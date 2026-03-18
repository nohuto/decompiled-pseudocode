/*
 * XREFs of ??$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140182AB8
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x140180DF0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngHTBlt @ 0x14018174C (EngHTBlt.c)
 *     ?vAcquire@HTSEMOBJ@@QEAAXXZ @ 0x140182A8C (-vAcquire@HTSEMOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$09@@YAXXZ @ 0x140182B04 (--$GrepAcquireLockValidate@$09@@YAXXZ.c)
 */

__int64 __fastcall GreAcquireSemaphore<10,>(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  EtwTraceGreLockAcquireSemaphoreExclusive(L"HT", *a1 + 1352, 0LL);
  GreAcquireSemaphoreInternal((HSEMAPHORE)(v1 + 1352));
  return GrepAcquireLockValidate<10>();
}
