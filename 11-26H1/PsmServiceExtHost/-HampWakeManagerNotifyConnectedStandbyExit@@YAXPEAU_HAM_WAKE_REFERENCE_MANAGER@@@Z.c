/*
 * XREFs of ?HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180068744
 * Callers:
 *     ?HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z @ 0x18001B490 (-HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z.c)
 * Callees:
 *     CemRcTableGetNext @ 0x18003BDF0 (CemRcTableGetNext.c)
 *     CemRcTableGetFirst @ 0x18003C4D4 (CemRcTableGetFirst.c)
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003FDD0 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003FE24 (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003FE90 (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 */

void __fastcall HampWakeManagerNotifyConnectedStandbyExit(struct _HAM_WAKE_REFERENCE_MANAGER *a1)
{
  struct _HAM_HOST_WAKE_CONTEXT *i; // rax
  struct _HAM_HOST_WAKE_CONTEXT *v2; // rbx

  for ( i = (struct _HAM_HOST_WAKE_CONTEXT *)CemRcTableGetFirst((__int64)a1 + 32);
        ;
        i = (struct _HAM_HOST_WAKE_CONTEXT *)CemRcTableGetNext(v2) )
  {
    v2 = i;
    if ( !i )
      break;
    HampWakeContextAcquireLockExclusive(i);
    *((_BYTE *)v2 + 185) |= 8u;
    HampWakeContextQueueWorker(v2);
    HampWakeContextReleaseLockExclusive(v2);
  }
}
