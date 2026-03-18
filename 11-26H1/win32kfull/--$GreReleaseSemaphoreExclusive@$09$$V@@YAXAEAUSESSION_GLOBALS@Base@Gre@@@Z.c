/*
 * XREFs of ??$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140182BBC
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x140180DF0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngHTBlt @ 0x14018174C (EngHTBlt.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x140182B90 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall GreReleaseSemaphoreExclusive<10,>(__int64 *a1)
{
  __int64 v1; // rbx
  struct _GRETHREAD *v2; // rax

  v1 = *a1;
  EtwTraceGreLockReleaseSemaphore(L"HT", *a1 + 1352);
  v2 = GreGetCurrentThreadCrossSessionCheck();
  if ( v2 )
  {
    if ( (*((_BYTE *)v2 + 18))-- == 1 )
      *(_QWORD *)v2 &= ~0x400uLL;
    if ( !*(_QWORD *)v2 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreExclusiveInternal((HSEMAPHORE)(v1 + 1352));
}
