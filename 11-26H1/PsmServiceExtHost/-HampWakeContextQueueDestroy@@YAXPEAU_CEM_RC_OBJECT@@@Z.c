/*
 * XREFs of ?HampWakeContextQueueDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003FD30
 * Callers:
 *     <none>
 * Callees:
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003FE24 (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003FE90 (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 */

void __fastcall HampWakeContextQueueDestroy(struct _CEM_RC_OBJECT *a1)
{
  if ( *((_QWORD *)a1 + 12) )
  {
    HampWakeContextAcquireLockExclusive(a1);
    *((_BYTE *)a1 + 184) |= 8u;
    HampWakeContextReleaseLockExclusive(a1);
    TpPostWork(*((_QWORD *)a1 + 12));
  }
  else
  {
    HampWakeContextDestroy(a1);
  }
}
