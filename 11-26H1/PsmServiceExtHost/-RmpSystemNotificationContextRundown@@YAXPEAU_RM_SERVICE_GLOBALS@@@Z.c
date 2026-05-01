/*
 * XREFs of ?RmpSystemNotificationContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180088508
 * Callers:
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800804C8 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpSystemNotificationContextRundown(struct _RM_SERVICE_GLOBALS *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)a1 + 86);
  if ( v2 )
    PowerSettingUnregisterNotification(v2);
  v3 = (void *)*((_QWORD *)a1 + 87);
  if ( v3 )
    PowerSettingUnregisterNotification(v3);
  if ( *((_QWORD *)a1 + 89) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)a1 + 90) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *((_QWORD *)a1 + 91) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  v4 = (void *)*((_QWORD *)a1 + 93);
  if ( v4 )
    NtClose(v4);
}
