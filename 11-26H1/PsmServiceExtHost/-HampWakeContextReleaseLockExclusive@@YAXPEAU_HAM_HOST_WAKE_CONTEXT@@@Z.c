/*
 * XREFs of ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003FE24
 * Callers:
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180022DE4 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002365C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180039C10 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@K@Z @ 0x18003FBB0 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 *     ?HampWakeContextQueueDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003FD30 (-HampWakeContextQueueDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x18003FD7C (-HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_APPLICATION_EXECUT.c)
 *     ?HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180068744 (-HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeContextTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180069150 (-HampWakeContextTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z @ 0x1800693A0 (-HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18007F4F8 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampWakeContextReleaseLockExclusive(struct _HAM_HOST_WAKE_CONTEXT *a1)
{
  __int64 *Value; // rax
  __int64 v3; // rdx

  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v3 = *Value;
    if ( (*Value & 0x800) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[12]-- == 1 )
      *Value = v3 & 0xFFFFFFFFFFFFF7FFuLL;
  }
  *((_DWORD *)a1 + 12) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 40);
}
