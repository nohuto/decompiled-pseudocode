/*
 * XREFs of ?HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18003FD7C
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002365C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003FDD0 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003FE90 (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 */

void __fastcall HampWakeContextUpdateExternalApplicationState(__int64 a1, char a2)
{
  char v4; // al

  HampWakeContextAcquireLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)a1);
  v4 = *(_BYTE *)(a1 + 184);
  *(_BYTE *)(a1 + 185) |= 0x10u;
  *(_BYTE *)(a1 + 184) = v4 ^ (v4 ^ (16 * a2)) & 0x70;
  HampWakeContextQueueWorker((struct _HAM_HOST_WAKE_CONTEXT *)a1);
  HampWakeContextReleaseLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)a1);
}
