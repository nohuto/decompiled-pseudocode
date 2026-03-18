/*
 * XREFs of ??$GreReleaseSemaphoreExclusive@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140335B70
 * Callers:
 *     GreDrvDisconnect @ 0x140287F5C (GreDrvDisconnect.c)
 *     GreDrvReconnect @ 0x140335C68 (GreDrvReconnect.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall GreReleaseSemaphoreExclusive<19,>(HSEMAPHORE *a1)
{
  HSEMAPHORE v1; // rbx
  struct _GRETHREAD *v2; // rax

  v1 = *a1;
  EtwTraceGreLockReleaseSemaphore(L"DriverMgmt", *a1);
  v2 = GreGetCurrentThreadCrossSessionCheck();
  if ( v2 )
  {
    if ( (*((_BYTE *)v2 + 27))-- == 1 )
      *(_QWORD *)v2 &= ~0x80000uLL;
    if ( !*(_QWORD *)v2 )
      GrepOnAllLocksReleased();
  }
  GreReleaseSemaphoreExclusiveInternal(v1);
}
