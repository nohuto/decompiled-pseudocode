/*
 * XREFs of ?RmpSystemNotificationAcquireInputFocusLock@@YAXPEAU_RM_SYSTEM_NOTIFICATION_CONTEXT@@@Z @ 0x18000E22C
 * Callers:
 *     ?RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18000DDC0 (-RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBX.c)
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000ECE0 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpSystemNotificationAcquireInputFocusLock(struct _RM_SYSTEM_NOTIFICATION_CONTEXT *a1)
{
  char *v1; // rbx

  v1 = (char *)a1 + 16;
  RtlAcquireSRWLockExclusive((char *)a1 + 16);
  *((_DWORD *)v1 + 14) = GetCurrentThreadId();
}
